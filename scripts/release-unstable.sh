# package versioning files
pyproject_line=8
cargo_line=4
previous_version="0.0.0"

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
get_last_tag() { git describe --tags --abbrev=0; }

previous_version=$(get_version_from_changelog)

# changes since last release
breaking_changes_count=$(
  git log "$(get_last_tag)"..HEAD --oneline |
    grep --count --extended-regexp "$unstable_message_regex"
)
unstable_message_regex='^\w+(\(.*\))?:!'

# genrate changelog and update version
npx changeset version

new_version=$(get_version_from_changelog)

# NOTE: uncomment to test
# breaking_changes_count=1

if [[ $breaking_changes_count -gt 0 ]]; then
  breaking_changes_message=$(
    sed \
      -e "s/{{ compatible_semver }}/patch/" \
      -e "s/{{ previous_version }}/\`~$previous_version\`/" \
      docs/breaking-change-message.txt
  )
  echo
  echo "[RELEASE]: Unstable version release!"
  echo "[RELEASE]: Breaking changes detected, generating breaking change message..."
  sed -i "4 a$breaking_changes_message\n" CHANGELOG.md
fi

update_version_in pyproject.toml "$pyproject_line"
update_version_in Cargo.toml "$cargo_line"
