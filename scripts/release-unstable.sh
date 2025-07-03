REPO_ROOT=$(git rev-parse --show-toplevel)
export REPO_ROOT

source "$REPO_ROOT"/scripts/utils.sh

# INITIAL RELEASE
if ! [[ -f CHANGELOG.md ]]; then
  echo "[RELEASE]: Initial release!"
  echo "[RELEASE]: Breaking changes check will be skipped!"
  echo

  generate_changelog

  # changelog is now generated
  update_new_version
  set_changelog_initial_release_message
  update_package_files_version

  exit 0
fi

# NORMAL RELEASE
previous_version=$(get_version_from_changelog)

# changes since last release
unstable_message_regex='^\w+(\(.*\))?:!'
breaking_changes_count=$(
  git log "$(get_last_tag)"..HEAD --oneline |
    grep --count --extended-regexp "$unstable_message_regex"
)

echo "[RELEASE]: Unstable version release!"
echo

generate_changelog

update_new_version

# NOTE: uncomment to test
# breaking_changes_count=1

if [[ $breaking_changes_count -gt 0 ]]; then
  set_changelog_breaking_changes_message "patch" "$previous_version"
fi

update_package_files_version "$previous_version"
