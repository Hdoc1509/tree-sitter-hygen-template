**_This release contains backwards-incompatible changes._** To avoid picking up
releases like this, you should set the exact version or use a version range
syntax that only accepts `{{ compatible_semver }}` upgrades, i.e.:

- `{{ version_npm }}` in your `package.json`. See `npm` documentation about
  [semver](https://docs.npmjs.com/cli/v6/using-npm/semver/) for more
  information.
- `{{ version_cargo }}` in your `Cargo.toml`. See `cargo` documentation about
  [version requirement syntax](https://doc.rust-lang.org/cargo/reference/specifying-dependencies.html#version-requirement-syntax)
  for more information.
- `{{ version_pypi }}` in your `pyproject.toml`. See `python` documentation
  about [version specifiers](https://packaging.python.org/en/latest/specifications/version-specifiers/#id5)
  for more information.

