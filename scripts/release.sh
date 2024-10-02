npx changeset version

pyproject_line=8
cargo_line=4

new_version=$(
  grep --max-count=1 --fixed-strings version package.json |
    awk -F: '{ print $2 }' |
    sed 's/[",]//g'
)

update_version_in() {
  target_file=$1
  target_line=$2

  sed -i "$target_line s/[0-9]\.[0-9]\.[0-9]/$new_version/" "$target_file"
}

update_version_in pyproject.toml "$pyproject_line"
update_version_in Cargo.toml "$cargo_line"
