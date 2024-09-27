#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 19
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_PERCENT_PERCENT_GT = 1,
  aux_sym_content_token1 = 2,
  anon_sym_LT_PERCENT = 3,
  anon_sym_LT_PERCENT_ = 4,
  anon_sym_LT_PERCENT_PIPE = 5,
  anon_sym_PERCENT_GT = 6,
  anon_sym_DASH_PERCENT_GT = 7,
  anon_sym__PERCENT_GT = 8,
  anon_sym_LT_PERCENT_EQ = 9,
  anon_sym_LT_PERCENT_EQ_EQ = 10,
  anon_sym_LT_PERCENT_PIPE_EQ = 11,
  anon_sym_LT_PERCENT_PIPE_EQ_EQ = 12,
  anon_sym_LT_PERCENT_DASH = 13,
  anon_sym_EQ_PERCENT_GT = 14,
  anon_sym_LT_PERCENT_POUND = 15,
  anon_sym_LT_PERCENTgraphql = 16,
  anon_sym_DASH_DASH_DASH = 17,
  aux_sym_frontmatter_token1 = 18,
  anon_sym_DASH_DASH_DASH2 = 19,
  anon_sym_COLON = 20,
  sym_key = 21,
  sym_template = 22,
  sym_content = 23,
  sym_frontmatter = 24,
  sym_metadata = 25,
  sym_value = 26,
  sym_body = 27,
  aux_sym_frontmatter_repeat1 = 28,
  aux_sym_body_repeat1 = 29,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_PERCENT_PERCENT_GT] = "%%>",
  [aux_sym_content_token1] = "content_token1",
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
  [sym_template] = "template",
  [sym_content] = "content",
  [sym_frontmatter] = "frontmatter",
  [sym_metadata] = "metadata",
  [sym_value] = "value",
  [sym_body] = "body",
  [aux_sym_frontmatter_repeat1] = "frontmatter_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_PERCENT_PERCENT_GT] = anon_sym_PERCENT_PERCENT_GT,
  [aux_sym_content_token1] = aux_sym_content_token1,
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
  [sym_template] = sym_template,
  [sym_content] = sym_content,
  [sym_frontmatter] = sym_frontmatter,
  [sym_metadata] = sym_metadata,
  [sym_value] = sym_value,
  [sym_body] = sym_body,
  [aux_sym_frontmatter_repeat1] = aux_sym_frontmatter_repeat1,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PERCENT_PERCENT_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_content_token1] = {
    .visible = false,
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
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym_content] = {
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
  [aux_sym_frontmatter_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
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
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
  [18] = 18,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(22);
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '%') ADVANCE(1);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == '<') ADVANCE(2);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == '_') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 1:
      if (lookahead == '%') ADVANCE(11);
      if (lookahead == '>') ADVANCE(28);
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(25);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(12);
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(39);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(41);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(23);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(29);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(36);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(30);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 'h') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 18:
      if (lookahead == 'p') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == 'q') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT_GT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == 'g') ADVANCE(20);
      if (lookahead == '|') ADVANCE(27);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PIPE);
      if (lookahead == '=') ADVANCE(33);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_PERCENT_GT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT_GT);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym__PERCENT_GT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_EQ);
      if (lookahead == '=') ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_EQ_EQ);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PIPE_EQ);
      if (lookahead == '=') ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PIPE_EQ_EQ);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_DASH);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_EQ_PERCENT_GT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_POUND);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LT_PERCENTgraphql);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_frontmatter_token1);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH2);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '%') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 21},
  [3] = {.lex_state = 21},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 21},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 21},
  [9] = {.lex_state = 21},
  [10] = {.lex_state = 21},
  [11] = {.lex_state = 21},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PERCENT_PERCENT_GT] = ACTIONS(1),
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
    [sym_template] = STATE(14),
    [sym_frontmatter] = STATE(2),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(5), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 1,
      aux_sym_content_token1,
    STATE(15), 1,
      sym_body,
    STATE(3), 2,
      sym_content,
      aux_sym_body_repeat1,
  [14] = 3,
    ACTIONS(7), 1,
      aux_sym_content_token1,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(5), 2,
      sym_content,
      aux_sym_body_repeat1,
  [25] = 3,
    ACTIONS(11), 1,
      anon_sym_DASH_DASH_DASH2,
    ACTIONS(13), 1,
      sym_key,
    STATE(6), 2,
      sym_metadata,
      aux_sym_frontmatter_repeat1,
  [36] = 3,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      aux_sym_content_token1,
    STATE(5), 2,
      sym_content,
      aux_sym_body_repeat1,
  [47] = 3,
    ACTIONS(20), 1,
      anon_sym_DASH_DASH_DASH2,
    ACTIONS(22), 1,
      sym_key,
    STATE(6), 2,
      sym_metadata,
      aux_sym_frontmatter_repeat1,
  [58] = 2,
    ACTIONS(13), 1,
      sym_key,
    STATE(4), 2,
      sym_metadata,
      aux_sym_frontmatter_repeat1,
  [66] = 2,
    ACTIONS(27), 1,
      aux_sym_frontmatter_token1,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      aux_sym_content_token1,
  [74] = 1,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      aux_sym_content_token1,
  [79] = 2,
    ACTIONS(31), 1,
      aux_sym_content_token1,
    STATE(18), 1,
      sym_value,
  [86] = 1,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      aux_sym_content_token1,
  [91] = 1,
    ACTIONS(35), 2,
      anon_sym_DASH_DASH_DASH2,
      sym_key,
  [96] = 1,
    ACTIONS(37), 1,
      aux_sym_frontmatter_token1,
  [100] = 1,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
  [104] = 1,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
  [108] = 1,
    ACTIONS(43), 1,
      anon_sym_COLON,
  [112] = 1,
    ACTIONS(45), 1,
      aux_sym_frontmatter_token1,
  [116] = 1,
    ACTIONS(47), 1,
      aux_sym_frontmatter_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 14,
  [SMALL_STATE(4)] = 25,
  [SMALL_STATE(5)] = 36,
  [SMALL_STATE(6)] = 47,
  [SMALL_STATE(7)] = 58,
  [SMALL_STATE(8)] = 66,
  [SMALL_STATE(9)] = 74,
  [SMALL_STATE(10)] = 79,
  [SMALL_STATE(11)] = 86,
  [SMALL_STATE(12)] = 91,
  [SMALL_STATE(13)] = 96,
  [SMALL_STATE(14)] = 100,
  [SMALL_STATE(15)] = 104,
  [SMALL_STATE(16)] = 108,
  [SMALL_STATE(17)] = 112,
  [SMALL_STATE(18)] = 116,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frontmatter, 4, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frontmatter, 5, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 4, 0, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [39] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
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
