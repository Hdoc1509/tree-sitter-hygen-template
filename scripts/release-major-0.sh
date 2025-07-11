# inject:regex:
unstable_message_regex='^\w+(\(.*\))?:!'

_get_last_tag() { git describe --tags --abbrev=0; }

release_major_0() {
  local previous_version=$1
  local breaking_changes_count

  breaking_changes_count=$(
    git log "$(_get_last_tag)"..HEAD --oneline |
      grep --count --extended-regexp "$unstable_message_regex"
  )

  echo -e "[RELEASE]: Major 0 release!\n"

  trigger_release
  update_new_version

  # NOTE: uncomment to test
  # breaking_changes_count=1

  if [[ $breaking_changes_count -gt 0 ]]; then
    set_changelog_breaking_changes_message "patch" "$previous_version"
  fi

  update_package_files_version "$previous_version"
  # reminder_message
}
