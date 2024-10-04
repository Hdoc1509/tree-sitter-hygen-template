REPO_ROOT=$(git rev-parse --show-toplevel)
export REPO_ROOT

source "$REPO_ROOT"/scripts/utils.sh

previous_version=$(get_version_from_changelog)

# genrate changelog and update version
npx changeset version

update_new_version "$(get_version_from_changelog)"
major_change_count=$(head --line=5 CHANGELOG.md | grep --count "Major")

# NOTE: uncomment to test
# major_change_count=1

if [[ $major_change_count -gt 0 ]]; then
  set_changelog_breaking_changes_message "minor" "$previous_version"
fi

update_package_files_version
