# package versioning files
pyproject_line=8
cargo_line=4

get_version_from_changelog() {
  head --lines=3 CHANGELOG.md | tail --lines=1 | awk '{ print $2 }'
}

update_version_in() {
  target_file=$1
  target_line=$2

  # TODO: at least on digit per version part
  # sed -i "$target_line s/[0-9]\+\.[0-9]\+\.[0-9]\+/$new_version/" "$target_file"
  # NOTE: $new_version is updated dynamically
  sed -i "$target_line s/[0-9]\.[0-9]\.[0-9]/$new_version/" "$target_file"
}

# INITIAL RELEASE
if ! [[ -f CHANGELOG.md ]]; then
  echo "[RELEASE]: Initial release!"
  echo "[RELEASE]: Skipping breaking changes check..."
  npx changeset version

  # changelog is now generated
  new_version=$(get_version_from_changelog)

  sed -i "5 s/Minor Changes/Initial release/" CHANGELOG.md

  update_version_in pyproject.toml "$pyproject_line"
  update_version_in Cargo.toml "$cargo_line"

  exit 0
fi

# NORMAL RELEASE
previous_version=$(get_version_from_changelog)

# genrate changelog and update version
npx changeset version

new_version=$(get_version_from_changelog)
major_change_count=$(head --line=5 CHANGELOG.md | grep --count "Major")

# NOTE: uncomment to test
# major_change_count=1

if [[ $major_change_count -gt 0 ]]; then
  breaking_changes_message=$(
    sed \
      -e "s/{{ compatible_semver }}/minor/" \
      -e "s/{{ previous_version }}/\`^$previous_version\` or \`~$previous_version\`/" \
      docs/breaking-change-message.txt
  )
  echo
  echo "[RELEASE]: Major change detected, generating breaking change message..."
  sed -i "4 a$breaking_changes_message\n" CHANGELOG.md
fi

update_version_in pyproject.toml "$pyproject_line"
update_version_in Cargo.toml "$cargo_line"
