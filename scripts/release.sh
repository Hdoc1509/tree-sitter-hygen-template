npx changeset version

pyproject_line=8
cargo_line=4

new_version=$(head --lines=3 CHANGELOG.md | tail --lines=1 | awk '{ print $2 }')

update_version_in() {
  target_file=$1
  target_line=$2

  sed -i "$target_line s/[0-9]\.[0-9]\.[0-9]/$new_version/" "$target_file"
}

update_version_in pyproject.toml "$pyproject_line"
update_version_in Cargo.toml "$cargo_line"
