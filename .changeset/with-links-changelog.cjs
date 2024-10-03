// @ts-check

// same as @changesets/changelog-git but with commit links in the changelog
// https://github.com/changesets/changesets/blob/main/packages/changelog-git/src/index.ts

/** @typedef {import('@changesets/types').NewChangesetWithCommit} NewChangesetWithCommit */
/** @typedef {import('@changesets/types').VersionType} VersionType */
/** @typedef {import('@changesets/types').ChangelogFunctions} ChangelogFunctions */
/** @typedef {import('@changesets/types').ModCompWithPackage} ModCompWithPackage */

const COMMIT_BASE_URL =
  "https://github.com/Hdoc1509/tree-sitter-hygen-template/commit";

/** @param {string} commit */
const createCommitLink = (commit) =>
  `[${commit.slice(0, 7)}](${COMMIT_BASE_URL}/${commit})`;

/**
 * @param {NewChangesetWithCommit} changeset
 */
const getReleaseLine = async (changeset) => {
  const [firstLine, ...futureLines] = changeset.summary
    .split("\n")
    .map((l) => l.trimRight());

  let returnVal = `- ${
    changeset.commit ? `${createCommitLink(changeset.commit)}: ` : ""
  }${firstLine}`;

  if (futureLines.length > 0) {
    returnVal += `\n${futureLines.map((l) => `  ${l}`).join("\n")}`;
  }

  return returnVal;
};

/**
 * @param {NewChangesetWithCommit[]} changesets
 * @param {ModCompWithPackage[]} dependenciesUpdated
 */
const getDependencyReleaseLine = async (changesets, dependenciesUpdated) => {
  if (dependenciesUpdated.length === 0) return "";

  const changesetLinks = changesets.map(
    (changeset) =>
      `- Updated dependencies${
        changeset.commit ? `${createCommitLink(changeset.commit)}` : ""
      }`,
  );

  const updatedDependenciesList = dependenciesUpdated.map(
    (dependency) => `  - ${dependency.name}@${dependency.newVersion}`,
  );

  return [...changesetLinks, ...updatedDependenciesList].join("\n");
};

/** @type {ChangelogFunctions} */
const defaultChangelogFunctions = {
  getReleaseLine,
  getDependencyReleaseLine,
};

module.exports = defaultChangelogFunctions;
