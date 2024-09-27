#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 47
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 1
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  aux_sym_code_token1 = 1,
  anon_sym_PERCENT_PERCENT_GT = 2,
  aux_sym_content_token1 = 3,
  anon_sym_LT_PERCENT_PERCENT = 4,
  anon_sym_LT_PERCENT = 5,
  anon_sym_LT_PERCENT_ = 6,
  anon_sym_LT_PERCENT_PIPE = 7,
  anon_sym_PERCENT_GT = 8,
  anon_sym_DASH_PERCENT_GT = 9,
  anon_sym__PERCENT_GT = 10,
  anon_sym_LT_PERCENT_EQ = 11,
  anon_sym_LT_PERCENT_EQ_EQ = 12,
  anon_sym_LT_PERCENT_PIPE_EQ = 13,
  anon_sym_LT_PERCENT_PIPE_EQ_EQ = 14,
  anon_sym_LT_PERCENT_DASH = 15,
  anon_sym_EQ_PERCENT_GT = 16,
  anon_sym_LT_PERCENT_POUND = 17,
  anon_sym_LT_PERCENTgraphql = 18,
  anon_sym_DASH_DASH_DASH = 19,
  aux_sym_frontmatter_token1 = 20,
  anon_sym_DASH_DASH_DASH2 = 21,
  anon_sym_COLON = 22,
  sym_key = 23,
  sym_string_value = 24,
  sym_template = 25,
  sym_code = 26,
  sym_content = 27,
  sym_directive = 28,
  sym_output_directive = 29,
  sym_comment_directive = 30,
  sym_frontmatter = 31,
  sym_metadata = 32,
  sym_value = 33,
  sym_body = 34,
  aux_sym_code_repeat1 = 35,
  aux_sym_content_repeat1 = 36,
  aux_sym_frontmatter_repeat1 = 37,
  aux_sym_value_repeat1 = 38,
  aux_sym_body_repeat1 = 39,
  alias_sym_comment = 40,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_code_token1] = "code_token1",
  [anon_sym_PERCENT_PERCENT_GT] = "%%>",
  [aux_sym_content_token1] = "content_token1",
  [anon_sym_LT_PERCENT_PERCENT] = "<%%",
  [anon_sym_LT_PERCENT] = "<%",
  [anon_sym_LT_PERCENT_] = "<%_",
  [anon_sym_LT_PERCENT_PIPE] = "<%|",
  [anon_sym_PERCENT_GT] = "%>",
  [anon_sym_DASH_PERCENT_GT] = "-%>",
  [anon_sym__PERCENT_GT] = "_%>",
  [anon_sym_LT_PERCENT_EQ] = "<%=",
  [anon_sym_LT_PERCENT_EQ_EQ] = "<%==",
  [anon_sym_LT_PERCENT_PIPE_EQ] = "<%|=",
  [anon_sym_LT_PERCENT_PIPE_EQ_EQ] = "<%|==",
  [anon_sym_LT_PERCENT_DASH] = "<%-",
  [anon_sym_EQ_PERCENT_GT] = "=%>",
  [anon_sym_LT_PERCENT_POUND] = "<%#",
  [anon_sym_LT_PERCENTgraphql] = "<%graphql",
  [anon_sym_DASH_DASH_DASH] = "---",
  [aux_sym_frontmatter_token1] = "frontmatter_token1",
  [anon_sym_DASH_DASH_DASH2] = "---",
  [anon_sym_COLON] = ":",
  [sym_key] = "key",
  [sym_string_value] = "string_value",
  [sym_template] = "template",
  [sym_code] = "code",
  [sym_content] = "content",
  [sym_directive] = "directive",
  [sym_output_directive] = "output_directive",
  [sym_comment_directive] = "comment_directive",
  [sym_frontmatter] = "frontmatter",
  [sym_metadata] = "metadata",
  [sym_value] = "value",
  [sym_body] = "body",
  [aux_sym_code_repeat1] = "code_repeat1",
  [aux_sym_content_repeat1] = "content_repeat1",
  [aux_sym_frontmatter_repeat1] = "frontmatter_repeat1",
  [aux_sym_value_repeat1] = "value_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
  [alias_sym_comment] = "comment",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_code_token1] = aux_sym_code_token1,
  [anon_sym_PERCENT_PERCENT_GT] = anon_sym_PERCENT_PERCENT_GT,
  [aux_sym_content_token1] = aux_sym_content_token1,
  [anon_sym_LT_PERCENT_PERCENT] = anon_sym_LT_PERCENT_PERCENT,
  [anon_sym_LT_PERCENT] = anon_sym_LT_PERCENT,
  [anon_sym_LT_PERCENT_] = anon_sym_LT_PERCENT_,
  [anon_sym_LT_PERCENT_PIPE] = anon_sym_LT_PERCENT_PIPE,
  [anon_sym_PERCENT_GT] = anon_sym_PERCENT_GT,
  [anon_sym_DASH_PERCENT_GT] = anon_sym_DASH_PERCENT_GT,
  [anon_sym__PERCENT_GT] = anon_sym__PERCENT_GT,
  [anon_sym_LT_PERCENT_EQ] = anon_sym_LT_PERCENT_EQ,
  [anon_sym_LT_PERCENT_EQ_EQ] = anon_sym_LT_PERCENT_EQ_EQ,
  [anon_sym_LT_PERCENT_PIPE_EQ] = anon_sym_LT_PERCENT_PIPE_EQ,
  [anon_sym_LT_PERCENT_PIPE_EQ_EQ] = anon_sym_LT_PERCENT_PIPE_EQ_EQ,
  [anon_sym_LT_PERCENT_DASH] = anon_sym_LT_PERCENT_DASH,
  [anon_sym_EQ_PERCENT_GT] = anon_sym_EQ_PERCENT_GT,
  [anon_sym_LT_PERCENT_POUND] = anon_sym_LT_PERCENT_POUND,
  [anon_sym_LT_PERCENTgraphql] = anon_sym_LT_PERCENTgraphql,
  [anon_sym_DASH_DASH_DASH] = anon_sym_DASH_DASH_DASH,
  [aux_sym_frontmatter_token1] = aux_sym_frontmatter_token1,
  [anon_sym_DASH_DASH_DASH2] = anon_sym_DASH_DASH_DASH,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_key] = sym_key,
  [sym_string_value] = sym_string_value,
  [sym_template] = sym_template,
  [sym_code] = sym_code,
  [sym_content] = sym_content,
  [sym_directive] = sym_directive,
  [sym_output_directive] = sym_output_directive,
  [sym_comment_directive] = sym_comment_directive,
  [sym_frontmatter] = sym_frontmatter,
  [sym_metadata] = sym_metadata,
  [sym_value] = sym_value,
  [sym_body] = sym_body,
  [aux_sym_code_repeat1] = aux_sym_code_repeat1,
  [aux_sym_content_repeat1] = aux_sym_content_repeat1,
  [aux_sym_frontmatter_repeat1] = aux_sym_frontmatter_repeat1,
  [aux_sym_value_repeat1] = aux_sym_value_repeat1,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [alias_sym_comment] = alias_sym_comment,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_code_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PERCENT_PERCENT_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_content_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_PERCENT_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_PERCENT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__PERCENT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_PIPE_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_PERCENT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENTgraphql] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_frontmatter_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH_DASH_DASH2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_string_value] = {
    .visible = true,
    .named = true,
  },
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym_content] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_output_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_frontmatter] = {
    .visible = true,
    .named = true,
  },
  [sym_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_code_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_frontmatter_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_comment] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_key = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_comment,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_code, 2,
    sym_code,
    alias_sym_comment,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 17,
  [19] = 12,
  [20] = 13,
  [21] = 11,
  [22] = 22,
  [23] = 23,
  [24] = 23,
  [25] = 22,
  [26] = 26,
  [27] = 27,
  [28] = 27,
  [29] = 26,
  [30] = 30,
  [31] = 31,
  [32] = 26,
  [33] = 27,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 37,
  [39] = 36,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(27);
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '%') ADVANCE(2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == ':') ADVANCE(57);
      if (lookahead == '<') ADVANCE(3);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '_') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '<') ADVANCE(4);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(16);
      if (lookahead == '>') ADVANCE(43);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(38);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(40);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '_') ADVANCE(28);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '_') ADVANCE(28);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(17);
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(54);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(56);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(34);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(44);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(51);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(45);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 21:
      if (lookahead == 'h') ADVANCE(24);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 23:
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == 'q') ADVANCE(22);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 26:
      if (eof) ADVANCE(27);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_code_token1);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '%') ADVANCE(16);
      if (lookahead == '>') ADVANCE(43);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '%') ADVANCE(17);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '%') ADVANCE(18);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '%') ADVANCE(19);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '-' &&
          lookahead != '=' &&
          lookahead != '_') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT_GT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '%') ADVANCE(39);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PERCENT);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '%') ADVANCE(37);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'g') ADVANCE(25);
      if (lookahead == '|') ADVANCE(42);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '%') ADVANCE(37);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == '|') ADVANCE(42);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == '|') ADVANCE(42);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PIPE);
      if (lookahead == '=') ADVANCE(48);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_PERCENT_GT);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT_GT);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym__PERCENT_GT);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_EQ);
      if (lookahead == '=') ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_EQ_EQ);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PIPE_EQ);
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PIPE_EQ_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_DASH);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_EQ_PERCENT_GT);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_POUND);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LT_PERCENTgraphql);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_frontmatter_token1);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH2);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '%') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<') ADVANCE(60);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 13},
  [2] = {.lex_state = 26},
  [3] = {.lex_state = 26},
  [4] = {.lex_state = 26},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 26},
  [8] = {.lex_state = 26},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 26},
  [11] = {.lex_state = 26},
  [12] = {.lex_state = 26},
  [13] = {.lex_state = 26},
  [14] = {.lex_state = 26},
  [15] = {.lex_state = 26},
  [16] = {.lex_state = 26},
  [17] = {.lex_state = 26},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 13},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 14},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PERCENT_PERCENT_GT] = ACTIONS(1),
    [anon_sym_LT_PERCENT_PERCENT] = ACTIONS(1),
    [anon_sym_LT_PERCENT] = ACTIONS(1),
    [anon_sym_LT_PERCENT_] = ACTIONS(1),
    [anon_sym_LT_PERCENT_PIPE] = ACTIONS(1),
    [anon_sym_PERCENT_GT] = ACTIONS(1),
    [anon_sym_DASH_PERCENT_GT] = ACTIONS(1),
    [anon_sym__PERCENT_GT] = ACTIONS(1),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_LT_PERCENT_EQ_EQ] = ACTIONS(1),
    [anon_sym_LT_PERCENT_PIPE_EQ] = ACTIONS(1),
    [anon_sym_LT_PERCENT_PIPE_EQ_EQ] = ACTIONS(1),
    [anon_sym_LT_PERCENT_DASH] = ACTIONS(1),
    [anon_sym_EQ_PERCENT_GT] = ACTIONS(1),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(1),
    [anon_sym_LT_PERCENTgraphql] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(1),
    [aux_sym_frontmatter_token1] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH2] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_key] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(43),
    [sym_frontmatter] = STATE(2),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(5), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 1,
      aux_sym_content_token1,
    ACTIONS(9), 1,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(13), 1,
      anon_sym_LT_PERCENT_,
    ACTIONS(19), 1,
      anon_sym_LT_PERCENT_POUND,
    STATE(10), 1,
      aux_sym_content_repeat1,
    STATE(45), 1,
      sym_body,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
    ACTIONS(15), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(17), 3,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
    STATE(4), 5,
      sym_content,
      sym_directive,
      sym_output_directive,
      sym_comment_directive,
      aux_sym_body_repeat1,
  [42] = 10,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      aux_sym_content_token1,
    ACTIONS(26), 1,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(32), 1,
      anon_sym_LT_PERCENT_,
    ACTIONS(41), 1,
      anon_sym_LT_PERCENT_POUND,
    STATE(10), 1,
      aux_sym_content_repeat1,
    ACTIONS(29), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
    ACTIONS(35), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(38), 3,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
    STATE(3), 5,
      sym_content,
      sym_directive,
      sym_output_directive,
      sym_comment_directive,
      aux_sym_body_repeat1,
  [81] = 10,
    ACTIONS(7), 1,
      aux_sym_content_token1,
    ACTIONS(9), 1,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(13), 1,
      anon_sym_LT_PERCENT_,
    ACTIONS(19), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      aux_sym_content_repeat1,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
    ACTIONS(15), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(17), 3,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
    STATE(3), 5,
      sym_content,
      sym_directive,
      sym_output_directive,
      sym_comment_directive,
      aux_sym_body_repeat1,
  [120] = 7,
    ACTIONS(49), 1,
      anon_sym_LT_PERCENT_,
    ACTIONS(58), 1,
      aux_sym_frontmatter_token1,
    ACTIONS(60), 1,
      sym_string_value,
    ACTIONS(46), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
    ACTIONS(52), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(55), 3,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
    STATE(5), 3,
      sym_directive,
      sym_output_directive,
      aux_sym_value_repeat1,
  [148] = 7,
    ACTIONS(65), 1,
      anon_sym_LT_PERCENT_,
    ACTIONS(71), 1,
      aux_sym_frontmatter_token1,
    ACTIONS(73), 1,
      sym_string_value,
    ACTIONS(63), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
    ACTIONS(67), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(69), 3,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
    STATE(5), 3,
      sym_directive,
      sym_output_directive,
      aux_sym_value_repeat1,
  [176] = 3,
    ACTIONS(79), 1,
      aux_sym_frontmatter_token1,
    ACTIONS(77), 5,
      aux_sym_content_token1,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(75), 7,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
  [196] = 5,
    ACTIONS(83), 1,
      aux_sym_content_token1,
    ACTIONS(86), 1,
      anon_sym_LT_PERCENT_PERCENT,
    STATE(8), 1,
      aux_sym_content_repeat1,
    ACTIONS(89), 4,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(81), 6,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
  [220] = 7,
    ACTIONS(65), 1,
      anon_sym_LT_PERCENT_,
    ACTIONS(91), 1,
      sym_string_value,
    STATE(42), 1,
      sym_value,
    ACTIONS(63), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
    ACTIONS(67), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(69), 3,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
    STATE(6), 3,
      sym_directive,
      sym_output_directive,
      aux_sym_value_repeat1,
  [248] = 5,
    ACTIONS(95), 1,
      aux_sym_content_token1,
    ACTIONS(97), 1,
      anon_sym_LT_PERCENT_PERCENT,
    STATE(8), 1,
      aux_sym_content_repeat1,
    ACTIONS(99), 4,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(93), 6,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
  [272] = 2,
    ACTIONS(103), 5,
      aux_sym_content_token1,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(101), 7,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
  [289] = 2,
    ACTIONS(107), 5,
      aux_sym_content_token1,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(105), 7,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
  [306] = 2,
    ACTIONS(111), 5,
      aux_sym_content_token1,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(109), 7,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
  [323] = 2,
    ACTIONS(115), 5,
      aux_sym_content_token1,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(113), 7,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
  [340] = 2,
    ACTIONS(119), 5,
      aux_sym_content_token1,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(117), 7,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
  [357] = 2,
    ACTIONS(123), 5,
      aux_sym_content_token1,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(121), 7,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
  [374] = 2,
    ACTIONS(127), 5,
      aux_sym_content_token1,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(125), 7,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
  [391] = 2,
    ACTIONS(127), 4,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(125), 6,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
      aux_sym_frontmatter_token1,
      sym_string_value,
  [406] = 2,
    ACTIONS(107), 4,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(105), 6,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
      aux_sym_frontmatter_token1,
      sym_string_value,
  [421] = 2,
    ACTIONS(111), 4,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(109), 6,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
      aux_sym_frontmatter_token1,
      sym_string_value,
  [436] = 2,
    ACTIONS(103), 4,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(101), 6,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
      aux_sym_frontmatter_token1,
      sym_string_value,
  [451] = 5,
    ACTIONS(129), 1,
      aux_sym_code_token1,
    ACTIONS(131), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(26), 1,
      aux_sym_code_repeat1,
    STATE(39), 1,
      sym_code,
    ACTIONS(133), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
  [469] = 5,
    ACTIONS(135), 1,
      aux_sym_code_token1,
    ACTIONS(137), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(29), 1,
      aux_sym_code_repeat1,
    STATE(38), 1,
      sym_code,
    ACTIONS(139), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym__PERCENT_GT,
  [487] = 5,
    ACTIONS(135), 1,
      aux_sym_code_token1,
    ACTIONS(137), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(29), 1,
      aux_sym_code_repeat1,
    STATE(37), 1,
      sym_code,
    ACTIONS(141), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym__PERCENT_GT,
  [505] = 5,
    ACTIONS(129), 1,
      aux_sym_code_token1,
    ACTIONS(131), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(26), 1,
      aux_sym_code_repeat1,
    STATE(36), 1,
      sym_code,
    ACTIONS(143), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
  [523] = 4,
    ACTIONS(145), 1,
      aux_sym_code_token1,
    ACTIONS(147), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(28), 1,
      aux_sym_code_repeat1,
    ACTIONS(149), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
  [538] = 4,
    ACTIONS(151), 1,
      aux_sym_code_token1,
    ACTIONS(154), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(27), 1,
      aux_sym_code_repeat1,
    ACTIONS(157), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym__PERCENT_GT,
  [553] = 4,
    ACTIONS(159), 1,
      aux_sym_code_token1,
    ACTIONS(162), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(28), 1,
      aux_sym_code_repeat1,
    ACTIONS(157), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
  [568] = 4,
    ACTIONS(165), 1,
      aux_sym_code_token1,
    ACTIONS(167), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(27), 1,
      aux_sym_code_repeat1,
    ACTIONS(149), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym__PERCENT_GT,
  [583] = 5,
    ACTIONS(169), 1,
      aux_sym_code_token1,
    ACTIONS(171), 1,
      anon_sym_PERCENT_PERCENT_GT,
    ACTIONS(173), 1,
      anon_sym_PERCENT_GT,
    STATE(32), 1,
      aux_sym_code_repeat1,
    STATE(46), 1,
      sym_code,
  [599] = 3,
    ACTIONS(175), 1,
      anon_sym_DASH_DASH_DASH2,
    ACTIONS(177), 1,
      sym_key,
    STATE(31), 2,
      sym_metadata,
      aux_sym_frontmatter_repeat1,
  [610] = 4,
    ACTIONS(149), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(180), 1,
      aux_sym_code_token1,
    ACTIONS(182), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(33), 1,
      aux_sym_code_repeat1,
  [623] = 4,
    ACTIONS(157), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(184), 1,
      aux_sym_code_token1,
    ACTIONS(187), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(33), 1,
      aux_sym_code_repeat1,
  [636] = 3,
    ACTIONS(190), 1,
      anon_sym_DASH_DASH_DASH2,
    ACTIONS(192), 1,
      sym_key,
    STATE(31), 2,
      sym_metadata,
      aux_sym_frontmatter_repeat1,
  [647] = 2,
    ACTIONS(192), 1,
      sym_key,
    STATE(34), 2,
      sym_metadata,
      aux_sym_frontmatter_repeat1,
  [655] = 1,
    ACTIONS(194), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
  [661] = 1,
    ACTIONS(196), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym__PERCENT_GT,
  [667] = 1,
    ACTIONS(198), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym__PERCENT_GT,
  [673] = 1,
    ACTIONS(200), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
  [679] = 1,
    ACTIONS(202), 2,
      anon_sym_DASH_DASH_DASH2,
      sym_key,
  [684] = 1,
    ACTIONS(204), 1,
      anon_sym_COLON,
  [688] = 1,
    ACTIONS(206), 1,
      aux_sym_frontmatter_token1,
  [692] = 1,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
  [696] = 1,
    ACTIONS(210), 1,
      aux_sym_frontmatter_token1,
  [700] = 1,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
  [704] = 1,
    ACTIONS(214), 1,
      anon_sym_PERCENT_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 81,
  [SMALL_STATE(5)] = 120,
  [SMALL_STATE(6)] = 148,
  [SMALL_STATE(7)] = 176,
  [SMALL_STATE(8)] = 196,
  [SMALL_STATE(9)] = 220,
  [SMALL_STATE(10)] = 248,
  [SMALL_STATE(11)] = 272,
  [SMALL_STATE(12)] = 289,
  [SMALL_STATE(13)] = 306,
  [SMALL_STATE(14)] = 323,
  [SMALL_STATE(15)] = 340,
  [SMALL_STATE(16)] = 357,
  [SMALL_STATE(17)] = 374,
  [SMALL_STATE(18)] = 391,
  [SMALL_STATE(19)] = 406,
  [SMALL_STATE(20)] = 421,
  [SMALL_STATE(21)] = 436,
  [SMALL_STATE(22)] = 451,
  [SMALL_STATE(23)] = 469,
  [SMALL_STATE(24)] = 487,
  [SMALL_STATE(25)] = 505,
  [SMALL_STATE(26)] = 523,
  [SMALL_STATE(27)] = 538,
  [SMALL_STATE(28)] = 553,
  [SMALL_STATE(29)] = 568,
  [SMALL_STATE(30)] = 583,
  [SMALL_STATE(31)] = 599,
  [SMALL_STATE(32)] = 610,
  [SMALL_STATE(33)] = 623,
  [SMALL_STATE(34)] = 636,
  [SMALL_STATE(35)] = 647,
  [SMALL_STATE(36)] = 655,
  [SMALL_STATE(37)] = 661,
  [SMALL_STATE(38)] = 667,
  [SMALL_STATE(39)] = 673,
  [SMALL_STATE(40)] = 679,
  [SMALL_STATE(41)] = 684,
  [SMALL_STATE(42)] = 688,
  [SMALL_STATE(43)] = 692,
  [SMALL_STATE(44)] = 696,
  [SMALL_STATE(45)] = 700,
  [SMALL_STATE(46)] = 704,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, 0, 0),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frontmatter, 4, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frontmatter, 4, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2, 0, 0),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_directive, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_directive, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_directive, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_directive, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frontmatter, 5, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frontmatter, 5, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_directive, 3, 0, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_directive, 3, 0, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_directive, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_directive, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 1, 0, 0),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 4, 0, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [208] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 2, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_hygen_template(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
