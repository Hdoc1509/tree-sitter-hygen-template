changelog_file=$REPO_ROOT/CHANGELOG.md
breaking_changes_message_file=$REPO_ROOT/scripts/breaking-change-message.md

# TODO: use same release flow as hygen.nvim

cargo_toml_file=$REPO_ROOT/Cargo.toml
tree_sitter_json_file=$REPO_ROOT/tree-sitter.json
pyproject_toml_file=$REPO_ROOT/pyproject.toml
makefile=$REPO_ROOT/Makefile
c_make_lists_file=$REPO_ROOT/CMakeLists.txt

generate_changelog() {
  if ! npx changeset version; then
    echo
    echo "[RELEASE]: Error while generating changelog!"
    exit 1
  fi
}
get_version_from_changelog() {
  head --lines=3 "$changelog_file" | tail --lines=1 | awk '{ print $2 }'
}
set_changelog_initial_release_message() {
  sed -i "5 s/.*/### Initial release/" "$changelog_file"
}
set_changelog_breaking_changes_message() {
  local compatible_semver=$1
  local previous_version=$2
  local version_npm
  local version_cargo
  local version_pypi
  local major_minor_v

  if [[ $compatible_semver == "patch" ]]; then
    version_cargo="~$previous_version"
    version_npm="~$previous_version"
    version_pypi="~=$previous_version"
  elif [[ $compatible_semver == "minor" ]]; then
    major_minor_v=$(cut --delimiter=. --fields=1,2 <<<"$previous_version")
    version_cargo="$previous_version"
    version_npm="^$previous_version"
    version_pypi="~=$major_minor_v"
  else
    echo "Invalid compatible semver: $compatible_semver"
    exit 1
  fi

  echo
  echo "[RELEASE]: Breaking changes detected!"
  echo "[RELEASE]: Generating breaking change message..."

  sed -i "4r $breaking_changes_message_file" CHANGELOG.md
  sed -i "s/{{ compatible_semver }}/$compatible_semver/" CHANGELOG.md
  sed -i "s/{{ version_npm }}/$version_npm/" CHANGELOG.md
  sed -i "s/{{ version_cargo }}/$version_cargo/" CHANGELOG.md
  sed -i "s/{{ version_pypi }}/$version_pypi/" CHANGELOG.md

  echo "[RELEASE]: Breaking changes message generated!"
}

get_last_tag() { git describe --tags --abbrev=0; }

update_new_version() { new_version="$(get_version_from_changelog)"; }

update_package_files_version() {
  local previous_version=$1

  echo
  echo "[RELEASE]: Updating package files version..."

  sed -i "s/version = \"$previous_version/version = \"$new_version/" "$cargo_toml_file"
  sed -i "s/version = \"$previous_version/version = \"$new_version/" "$pyproject_toml_file"
  sed -i "s/version\": \"$previous_version/version\": \"$new_version/" "$tree_sitter_json_file"
  sed -i "s/VERSION := $previous_version/VERSION := $new_version/" "$makefile"
  sed -i "s/VERSION \"$previous_version/VERSION \"$new_version/" "$c_make_lists_file"

  echo "[RELEASE]: Package files version updated!"
  echo
  echo "[RELEASE]: If all changes are correct, update lock file by running:"
  # inject:bash:
  echo "> npm install"
  echo
  echo "[RELEASE]: Don't forget to commit the changes!"
  echo "[RELEASE]: Don't forget to generate git tags:"
  # inject:bash:
  echo "> npx changeset tag"
}
