// @ts-check

// based on https://github.com/svitejs/changesets-changelog-github-compact/blob/main/packages/changesets-changelog-github-compact/src/index.ts
/** @typedef {import('@changesets/types').ChangelogFunctions} ChangelogFunctions */

require("dotenv").config();
const import_get_github_info = require("@changesets/get-github-info");
const { getInfo, getInfoFromPullRequest } = import_get_github_info;

const validationErrorMessage =
  "Please provide a `repo` option to this changelog generator, like this:\n" +
  '"changelog": ["./path/to/changelog-generator", { "repo": "user/repo" }]';

/** @type {ChangelogFunctions["getDependencyReleaseLine"]} */
const getDependencyReleaseLine = async (
  changesets,
  dependenciesUpdated,
  options,
) => {
  if (options?.repo == null) throw new Error(validationErrorMessage);
  if (dependenciesUpdated.length === 0) return "";

  const { repo } = options;
  const changesetLink = `- Updated dependencies [${(
    await Promise.all(
      changesets.map(async ({ commit }) => {
        if (commit != null)
          return (await getInfo({ repo, commit })).links.commit;
      }),
    )
  )
    .filter((_) => _)
    .join(", ")}]:`;
  const updatedDepenenciesList = dependenciesUpdated.map(
    (dependency) => `  - ${dependency.name}@${dependency.newVersion}`,
  );

  return [changesetLink, ...updatedDepenenciesList].join("\n");
};

/** @type {ChangelogFunctions["getReleaseLine"]} */
const getReleaseLine = async (changeset, _type, options) => {
  if (options?.repo == null) throw new Error(validationErrorMessage);

  const { repo } = options;
  /** @type {number|undefined} */
  let prFromSummary;
  /** @type {string|undefined} */
  let commitFromSummary;

  const replacedChangelog = changeset.summary
    .replace(/^\s*(?:pr|pull|pull\s+request):\s*#?(\d+)/im, (_, pr) => {
      const num = Number(pr);
      if (!isNaN(num)) prFromSummary = num;
      return "";
    })
    .replace(/^\s*commit:\s*([^\s]+)/im, (_, commit) => {
      commitFromSummary = commit;
      return "";
    })
    .replace(/^\s*(?:author|user):\s*@?([^\s]+)/gim, "")
    .trim();

  const linkifyIssueHints = (/** @type {string} */ line) =>
    line.replace(/(?<=\( ?(?:fix|fixes|see) )(#\d+)(?= ?\))/g, (hash) => {
      return `[${hash}](https://github.com/${repo}/issues/${hash.substring(1)})`;
    });

  const [firstLine, ...futureLines] = replacedChangelog
    .split("\n")
    .map((l) => linkifyIssueHints(l.trimRight()));

  const links = await (async () => {
    if (prFromSummary != null) {
      let { links: links2 } = await getInfoFromPullRequest({
        repo,
        pull: prFromSummary,
      });

      if (commitFromSummary != null)
        links2.commit = `[\`${commitFromSummary.slice(0, 7)}\`](https://github.com/${repo}/commit/${commitFromSummary})`;

      return links2;
    }

    const commitToFetchFrom = commitFromSummary || changeset.commit;

    if (commitToFetchFrom)
      return (await getInfo({ repo, commit: commitToFetchFrom })).links;

    return { commit: null, pull: null, user: null };
  })();

  const suffix = links.pull
    ? ` (${links.pull})`
    : links.commit
      ? ` (${links.commit})`
      : "";

  return `- ${firstLine}${suffix}${futureLines.map((l) => `  ${l}`).join("\n")}`;
};

/** @type {ChangelogFunctions} */
const defaultChangelogFunctions = {
  getReleaseLine,
  getDependencyReleaseLine,
};

module.exports = defaultChangelogFunctions;
