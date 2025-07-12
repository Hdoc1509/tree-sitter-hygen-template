REPO_ROOT=$(git rev-parse --show-toplevel)
CHANGELOG_FILE=$REPO_ROOT/CHANGELOG.md

source "$REPO_ROOT"/scripts/utils.sh

if ! [[ -f $CHANGELOG_FILE ]]; then
  echo "[RELEASE]: Initial release!"
  echo "[RELEASE]: Breaking changes check will be skipped!"
  echo

  trigger_release

  sed -i "5 s/.*/### Initial release/" "$CHANGELOG_FILE"
  update_package_files_version "0.0.0" "$(get_current_version)"

  exit 0
fi

previous_version=$(sed --quiet '3p' "$CHANGELOG_FILE" | awk '{ print $2 }')
previous_major=$(cut --delimiter=. --fields=1 <<<"$previous_version")

if [[ $previous_major -eq 0 ]]; then
  source "$REPO_ROOT"/scripts/release-major-0.sh
  release_major_0 "$previous_version"
else
  source "$REPO_ROOT"/scripts/release-normal.sh
  release_normal "$previous_version"
fi
