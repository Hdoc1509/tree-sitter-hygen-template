REPO_ROOT=$(git rev-parse --show-toplevel)
CHANGELOG_FILE=$REPO_ROOT/CHANGELOG.md

source "$REPO_ROOT"/scripts/logger.sh
source "$REPO_ROOT"/scripts/utils.sh

if ! [[ -f $CHANGELOG_FILE ]]; then
  PREVIOUS_VERSION="0.0.0"

  info_log "Initial release!"
  warn_log "Breaking changes check will be skipped!"
  echo

  trigger_release

  sed -i "5 s/.*/### Initial release/" "$CHANGELOG_FILE"
  update_package_files_version

  exit 0
fi

PREVIOUS_VERSION=$(sed --quiet '3p' "$CHANGELOG_FILE" | awk '{ print $2 }')

if [[ ${PREVIOUS_VERSION:0:1} -eq 0 ]]; then
  source "$REPO_ROOT"/scripts/release-major-0.sh
else
  source "$REPO_ROOT"/scripts/release-normal.sh
fi
