REPO_ROOT=$(git rev-parse --show-toplevel)
changelog_file=$REPO_ROOT/CHANGELOG.md
export REPO_ROOT

source "$REPO_ROOT"/scripts/utils.sh

if ! [[ -f $changelog_file ]]; then
  echo "[RELEASE]: Initial release!"
  echo "[RELEASE]: Breaking changes check will be skipped!"
  echo

  trigger_release

  # TODO: add util get_current_version()
  new_version=$(sed --quiet '3p' "$changelog_file" | awk '{ print $2 }')

  set_changelog_initial_release_message
  update_package_files_version "0.0.0" "$new_version"

  exit 0
fi

previous_version=$(sed --quiet '3p' "$changelog_file" | awk '{ print $2 }')
previous_major=$(cut --delimiter=. --fields=1 <<<"$previous_version")

if [[ $previous_major -eq 0 ]]; then
  source "$REPO_ROOT"/scripts/release-major-0.sh
  release_major_0 "$previous_version" "$changelog_file"
else
  source "$REPO_ROOT"/scripts/release-normal.sh
  release_normal "$previous_version" "$changelog_file"
fi
