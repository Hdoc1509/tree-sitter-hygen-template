local ts_parsers = require("nvim-treesitter.parsers")

local has_v_0_10 = vim.fn.has("nvim-0.10") == 1
local options = nil

-- see changed features in treesitter section
-- https://neovim.io/doc/user/news-0.10.html#_changed-features
if has_v_0_10 then
  options = {}
end

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
  options = options,
}
