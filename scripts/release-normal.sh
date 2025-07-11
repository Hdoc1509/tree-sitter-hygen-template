release_normal() {
  local previous_version=$1
  local changelog_file=$2
  local breaking_changes_count

  echo -e "[RELEASE]: Normal release!\n"

  trigger_release
  update_new_version

  breaking_changes_count=$(
    sed --quiet '5p' "$changelog_file" | grep --count "Major"
  )

  # NOTE: uncomment to test
  # major_change_count=1

  if [[ $breaking_changes_count -gt 0 ]]; then
    set_changelog_breaking_changes_message "minor" "$previous_version"
  fi

  update_package_files_version "$previous_version"
  reminder_message
}
