release_normal() {
  local breaking_changes_count

  echo -e "[RELEASE]: Normal release!\n"

  trigger_release

  breaking_changes_count=$(
    sed --quiet '5p' "$CHANGELOG_FILE" | grep --count "Major"
  )

  # NOTE: uncomment to test
  # major_change_count=1

  if [[ $breaking_changes_count -gt 0 ]]; then
    add_breaking_changes_message "minor"
  fi

  update_package_files_version "$(get_current_version)"
  # reminder_message
}
