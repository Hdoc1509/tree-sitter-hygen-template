# package versioning files
pyproject_line=8
cargo_line=4
previous_version="0.0.0"

trim() { echo "$@" | sed -e 's/^[[:blank:]]*//;s/[[:blank:]]*$//'; }

get_version_from_changelog() {
  head --lines=3 CHANGELOG.md | tail --lines=1 | awk '{ print $2 }'
}
get_version_from_package_json() {
  trim "$(
    grep --max-count=1 --fixed-strings version package.json |
      awk -F: '{ print $2 }' |
      sed -e 's/[",]//g'
  )"
}

if [[ -f CHANGELOG.md ]]; then
  previous_version=$(get_version_from_changelog)
else
  previous_version=$(get_version_from_package_json)
fi

# changes since last release
breaking_changes_count=0
unstable_message_regex='^\w+(\(.*\))?:!'
git_tags_count=$(git tag | wc --lines)

get_last_tag() { git describe --tags --abbrev=0; }

if [[ $git_tags_count -gt 0 ]]; then
  breaking_changes_count=$(
    git log "$(get_last_tag)"..HEAD --oneline |
      grep --count --extended-regexp "$unstable_message_regex"
  )
fi

# release and update releated files
npx changeset version

new_version=$(get_version_from_changelog)

# NOTE: uncomment to test
breaking_changes_count=1

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

update_version_in() {
  target_file=$1
  target_line=$2

  # TODO: at least on digit per version part
  # sed -i "$target_line s/[0-9]+\.[0-9]+\.[0-9]+/$new_version/" "$target_file"
  sed -i "$target_line s/[0-9]\.[0-9]\.[0-9]/$new_version/" "$target_file"
}

update_version_in pyproject.toml "$pyproject_line"
update_version_in Cargo.toml "$cargo_line"
