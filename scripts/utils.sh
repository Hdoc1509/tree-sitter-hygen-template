changelog_file=$REPO_ROOT/CHANGELOG.md
breaking_changes_message_file=$REPO_ROOT/docs/breaking-change-message.txt

cargo_toml_file=$REPO_ROOT/Cargo.toml
cargo_toml_version_line=4
tree_sitter_json_file=$REPO_ROOT/tree-sitter.json
tree_sitter_json_version_line=16
pyproject_toml_file=$REPO_ROOT/pyproject.toml
pyproject_toml_version_line=8

get_version_from_changelog() {
  head --lines=3 "$changelog_file" | tail --lines=1 | awk '{ print $2 }'
}
set_changelog_initial_release_message() {
  sed -i "5 s/.*/### Initial release/" "$changelog_file"
}
set_changelog_breaking_changes_message() {
  local compatible_semver=$1
  local previous_version=$2
  local previous_version_message
  local breaking_changes_message

  if [[ $compatible_semver == "patch" ]]; then
    previous_version_message="\`~$previous_version\`"
  elif [[ $compatible_semver == "minor" ]]; then
    previous_version_message="\`^$previous_version\` or \`~$previous_version\`"
  else
    echo "Invalid compatible semver: $compatible_semver"
    exit 1
  fi

  breaking_changes_message=$(
    sed \
      -e "s/{{ compatible_semver }}/$compatible_semver/" \
      -e "s/{{ previous_version }}/$previous_version_message/" \
      "$breaking_changes_message_file"
  )

  echo
  echo "[RELEASE]: Breaking changes detected!"
  echo "[RELEASE]: Generating breaking change message..."

  sed -i "4 a$breaking_changes_message\n" CHANGELOG.md

  echo "[RELEASE]: Breaking changes message generated!"
}

get_last_tag() { git describe --tags --abbrev=0; }

update_new_version() { new_version="$(get_version_from_changelog)"; }

version_regex='[0-9]\+\.[0-9]\+\.[0-9]\+'

update_package_files_version() {
  echo
  echo "[RELEASE]: Updating package files version..."

  sed -i "$cargo_toml_version_line s/$version_regex/$new_version/" "$cargo_toml_file"
  sed -i "$pyproject_toml_version_line s/$version_regex/$new_version/" "$pyproject_toml_file"
  sed -i "$tree_sitter_json_version_line s/$version_regex/$new_version/" "$tree_sitter_json_file"

  echo "[RELEASE]: Package files version updated!"
}
