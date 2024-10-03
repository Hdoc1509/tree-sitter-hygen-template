# package versioning files
pyproject_line=8
cargo_line=4
previous_version="invalid-version"

get_version_from_changelog() {
  head --lines=3 CHANGELOG.md | tail --lines=1 | awk '{ print $2 }'
}
get_version_from_package_json() {
  grep --max-count=1 --fixed-strings version package.json |
    awk -F: '{ print $2 }' |
    sed -e 's/[",]//g' -e 's/^ *//' -e 's/ *$//'
}

if [[ -f CHANGELOG.md ]]; then
  previous_version=$(get_version_from_changelog)
else
  previous_version=$(get_version_from_package_json)
fi

if [[ $previous_version == "invalid-version" ]]; then
  echo "[RELEASE]: No version found in package.json or CHANGELOG.md"
  exit 1
fi

# changes since last release
breaking_changes_count=0
unstable_message_regex='^\w+(\(.*\))?:!'
git_tags_count=$(git tag | wc --lines)

get_last_tag() { git describe --tags --abbrev=0; }
get_unstable_version_count() {
  get_version_from_package_json | grep "0.*.*" --count
}

if [ "$git_tags_count" -gt 0 ]; then
  breaking_changes_count=$(
    git log "$(get_last_tag)"..HEAD --oneline |
      grep --count --extended-regexp "$unstable_message_regex"
  )
fi

# release and update releated files
npx changeset version

new_version=$(get_version_from_changelog)
major_change_count=$(
  head --line=5 CHANGELOG.md |
    grep --count --fixed-strings "### Major"
)
breaking_changes_message=""

# NOTE: uncomment to test
# major_change_count=1
# breaking_changes_count=1

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
elif [[ $(get_unstable_version_count) -gt 0 && $breaking_changes_count -gt 0 ]]; then
  breaking_changes_message=$(
    sed \
      -e "s/{{ compatible_semver }}/patch/" \
      -e "s/{{ previous_version }}/\`~$previous_version\`/" \
      docs/breaking-change-message.txt
  )
  echo
  echo "[RELEASE]: Unstable version detected!"
  echo "[RELEASE]: Breaking changes detected, generating breaking change message..."
  sed -i "4 a$breaking_changes_message\n" CHANGELOG.md
fi

update_version_in() {
  target_file=$1
  target_line=$2

  # TODO: at least on digit per version part
  # sed -i "$target_line s/[0-9]+\.[0-9]+\.[0-9]+/$new_version/" "$target_file"
  sed -i "$target_line s/[0-9]\.[0-9]\.[0-9]/$new_version/" "$target_file"
}

update_version_in pyproject.toml "$pyproject_line"
update_version_in Cargo.toml "$cargo_line"
