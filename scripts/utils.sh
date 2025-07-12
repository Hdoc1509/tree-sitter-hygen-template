breaking_changes_message_file=$REPO_ROOT/scripts/breaking-change-message.md

cargo_toml_file=$REPO_ROOT/Cargo.toml
tree_sitter_json_file=$REPO_ROOT/tree-sitter.json
pyproject_toml_file=$REPO_ROOT/pyproject.toml
makefile=$REPO_ROOT/Makefile
c_make_lists_file=$REPO_ROOT/CMakeLists.txt

trigger_release() {
  if ! npx changeset version; then
    echo
    echo "[RELEASE]: Error while generating changelog!"
    exit 1
  fi
}

get_current_version() { sed --quiet '3p' "$CHANGELOG_FILE" | awk '{ print $2 }'; }

add_breaking_changes_message() {
  local compatible_semver=$1
  local version_npm
  local version_cargo
  local version_pypi
  local major_minor_v

  if [[ $compatible_semver == "patch" ]]; then
    version_cargo="~$PREVIOUS_VERSION"
    version_npm="~$PREVIOUS_VERSION"
    version_pypi="~=$PREVIOUS_VERSION"
  elif [[ $compatible_semver == "minor" ]]; then
    major_minor_v=$(cut --delimiter=. --fields=1,2 <<<"$PREVIOUS_VERSION")
    version_cargo="$PREVIOUS_VERSION"
    version_npm="^$PREVIOUS_VERSION"
    version_pypi="~=$major_minor_v"
  else
    echo "Invalid compatible semver: $compatible_semver"
    exit 1
  fi

  echo
  echo "[RELEASE]: Breaking changes detected!"
  echo "[RELEASE]: Generating breaking change message..."

  sed -i "4r $breaking_changes_message_file" "$CHANGELOG_FILE"
  sed -i "s/{{ compatible_semver }}/$compatible_semver/" "$CHANGELOG_FILE"
  sed -i "s/{{ version_npm }}/$version_npm/" "$CHANGELOG_FILE"
  sed -i "s/{{ version_cargo }}/$version_cargo/" "$CHANGELOG_FILE"
  sed -i "s/{{ version_pypi }}/$version_pypi/" "$CHANGELOG_FILE"

  echo "[RELEASE]: Breaking changes message generated!"
}

update_package_files_version() {
  local new_version=$1

  echo
  echo "[RELEASE]: Updating package files version..."

  sed -i "s/version = \"$PREVIOUS_VERSION/version = \"$new_version/" "$cargo_toml_file"
  sed -i "s/version = \"$PREVIOUS_VERSION/version = \"$new_version/" "$pyproject_toml_file"
  sed -i "s/version\": \"$PREVIOUS_VERSION/version\": \"$new_version/" "$tree_sitter_json_file"
  sed -i "s/VERSION := $PREVIOUS_VERSION/VERSION := $new_version/" "$makefile"
  sed -i "s/VERSION \"$PREVIOUS_VERSION/VERSION \"$new_version/" "$c_make_lists_file"

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

# TODO: add reminder_message()
