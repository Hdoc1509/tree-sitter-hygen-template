local ts_parsers = require("nvim-treesitter.parsers")

-- adapted from https://github.com/nvim-treesitter/nvim-treesitter/discussions/1917#discussioncomment-10714144
return {
  name = "inject-hygen-tmpl!",
  callback = function(_, _, bufnr, _, metadata)
    local filename = vim.fs.basename(vim.api.nvim_buf_get_name(bufnr))

    local _, _, ext, _ = string.find(filename, ".*%.(%a+)(%.%a+)")
    local filetype = vim.filetype.match({ filename = "name." .. ext })
    local parser_name = ts_parsers.ft_to_lang(filetype or ext) -- filetype can be nil

    metadata["injection.language"] = parser_name
  end,
  options = {},
}
