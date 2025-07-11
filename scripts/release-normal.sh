release_normal() {
  local previous_version=$1
  local changelog_file=$2
  local breaking_changes_count
  local new_version

  echo -e "[RELEASE]: Normal release!\n"

  trigger_release

  new_version=$(get_current_version "$changelog_file")
  breaking_changes_count=$(
    sed --quiet '5p' "$changelog_file" | grep --count "Major"
  )

  # NOTE: uncomment to test
  # major_change_count=1

  if [[ $breaking_changes_count -gt 0 ]]; then
    add_breaking_changes_message "minor" "$previous_version" "$changelog_file"
  fi

  update_package_files_version "$previous_version" "$new_version"
  # reminder_message
}
