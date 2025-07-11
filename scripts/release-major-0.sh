# inject:regex:
unstable_message_regex='^\w+(\(.*\))?:!'

_get_last_tag() { git describe --tags --abbrev=0; }

release_major_0() {
  local previous_version=$1
  local changelog_file=$2
  local breaking_changes_count
  local new_version

  breaking_changes_count=$(
    git log "$(_get_last_tag)"..HEAD --oneline |
      grep --count --extended-regexp "$unstable_message_regex"
  )

  echo -e "[RELEASE]: Major 0 release!\n"

  trigger_release

  new_version=$(get_current_version "$changelog_file")

  # NOTE: uncomment to test
  # breaking_changes_count=1

  if [[ $breaking_changes_count -gt 0 ]]; then
    add_breaking_changes_message "patch" "$previous_version" "$changelog_file"
  fi

  update_package_files_version "$previous_version" "$new_version"
  # reminder_message
}
