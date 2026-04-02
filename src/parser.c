#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 47
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 1
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
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
  anon_sym_DASH_DASH_DASH = 18,
  anon_sym_DASH_DASH_DASH2 = 19,
  anon_sym_COLON = 20,
  aux_sym_metadata_token1 = 21,
  sym_key = 22,
  sym_true = 23,
  sym_false = 24,
  sym_number = 25,
  sym_string_value = 26,
  sym_frontmatter_comment = 27,
  sym__blank = 28,
  sym_template = 29,
  sym_code = 30,
  sym_content = 31,
  sym_directive = 32,
  sym_output_directive = 33,
  sym_comment_directive = 34,
  sym_frontmatter = 35,
  sym_metadata = 36,
  sym_value = 37,
  sym_body = 38,
  aux_sym_code_repeat1 = 39,
  aux_sym_content_repeat1 = 40,
  aux_sym_frontmatter_repeat1 = 41,
  aux_sym_value_repeat1 = 42,
  aux_sym_body_repeat1 = 43,
  alias_sym_comment = 44,
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
  [anon_sym_DASH_DASH_DASH] = "---",
  [anon_sym_DASH_DASH_DASH2] = "---",
  [anon_sym_COLON] = ":",
  [aux_sym_metadata_token1] = "metadata_token1",
  [sym_key] = "key",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_number] = "number",
  [sym_string_value] = "string_value",
  [sym_frontmatter_comment] = "frontmatter_comment",
  [sym__blank] = "_blank",
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
  [anon_sym_DASH_DASH_DASH] = anon_sym_DASH_DASH_DASH,
  [anon_sym_DASH_DASH_DASH2] = anon_sym_DASH_DASH_DASH,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_metadata_token1] = aux_sym_metadata_token1,
  [sym_key] = sym_key,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_number] = sym_number,
  [sym_string_value] = sym_string_value,
  [sym_frontmatter_comment] = sym_frontmatter_comment,
  [sym__blank] = sym__blank,
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
  [anon_sym_DASH_DASH_DASH] = {
    .visible = true,
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
  [aux_sym_metadata_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string_value] = {
    .visible = true,
    .named = true,
  },
  [sym_frontmatter_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__blank] = {
    .visible = false,
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
  [14] = 12,
  [15] = 15,
  [16] = 16,
  [17] = 8,
  [18] = 18,
  [19] = 19,
  [20] = 9,
  [21] = 11,
  [22] = 22,
  [23] = 23,
  [24] = 22,
  [25] = 23,
  [26] = 26,
  [27] = 27,
  [28] = 26,
  [29] = 27,
  [30] = 30,
  [31] = 27,
  [32] = 32,
  [33] = 33,
  [34] = 26,
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
      if (eof) ADVANCE(33);
      ADVANCE_MAP(
        '\n', 67,
        '#', 85,
        '%', 9,
        '-', 13,
        ':', 66,
        '<', 10,
        '=', 15,
        '_', 16,
        'f', 24,
        't', 28,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == 'f') ADVANCE(77);
      if (lookahead == 't') ADVANCE(81);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == 'f') ADVANCE(77);
      if (lookahead == 't') ADVANCE(81);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == '#') ADVANCE(85);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(87);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '%') ADVANCE(19);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '_') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(87);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '<') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '%') ADVANCE(35);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '=') ADVANCE(34);
      if (lookahead == '_') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '%') ADVANCE(35);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '=') ADVANCE(37);
      if (lookahead == '_') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(39);
      if (lookahead == '%') ADVANCE(35);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '_') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '>') ADVANCE(54);
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(50);
      END_STATE();
    case 11:
      if (lookahead == '%') ADVANCE(51);
      END_STATE();
    case 12:
      if (lookahead == '%') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == '%') ADVANCE(21);
      if (lookahead == '-') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == '%') ADVANCE(21);
      if (lookahead == '-') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == '%') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == '%') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(64);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(65);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(54);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(42);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(55);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(62);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(56);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 31:
      if (eof) ADVANCE(33);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '%') ADVANCE(19);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '=') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 32:
      if (eof) ADVANCE(33);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '<') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_code_token1);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '>') ADVANCE(54);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '%') ADVANCE(21);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '%') ADVANCE(22);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '%') ADVANCE(23);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(41);
      if (lookahead == '%' ||
          lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '_') ADVANCE(85);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '-' &&
          lookahead != '=' &&
          lookahead != '_') ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '-' &&
          lookahead != '=' &&
          lookahead != '_') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT_GT);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '%') ADVANCE(50);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(48);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(48);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '<') ADVANCE(85);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(48);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PERCENT);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '%') ADVANCE(49);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '=') ADVANCE(57);
      if (lookahead == '_') ADVANCE(52);
      if (lookahead == '|') ADVANCE(53);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '=') ADVANCE(57);
      if (lookahead == '_') ADVANCE(52);
      if (lookahead == '|') ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PIPE);
      if (lookahead == '=') ADVANCE(59);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_PERCENT_GT);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT_GT);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym__PERCENT_GT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_EQ);
      if (lookahead == '=') ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_EQ_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PIPE_EQ);
      if (lookahead == '=') ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PIPE_EQ_EQ);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_DASH);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_EQ_PERCENT_GT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_POUND);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH2);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_metadata_token1);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 't') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_metadata_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(87);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_true);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(84);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_false);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(84);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(84);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == 'f') ADVANCE(77);
      if (lookahead == 't') ADVANCE(81);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(84);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(84);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(84);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(84);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == 'l') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(84);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == 'r') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(84);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == 's') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(84);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == 'u') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_frontmatter_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__blank);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 't') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__blank);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(87);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 32},
  [3] = {.lex_state = 32},
  [4] = {.lex_state = 32},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 32},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 32},
  [14] = {.lex_state = 32},
  [15] = {.lex_state = 32},
  [16] = {.lex_state = 32},
  [17] = {.lex_state = 32},
  [18] = {.lex_state = 32},
  [19] = {.lex_state = 32},
  [20] = {.lex_state = 32},
  [21] = {.lex_state = 32},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 31},
  [33] = {.lex_state = 31},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 31},
  [36] = {.lex_state = 31},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 31},
  [40] = {.lex_state = 31},
  [41] = {.lex_state = 31},
  [42] = {.lex_state = 31},
  [43] = {.lex_state = 31},
  [44] = {.lex_state = 31},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 31},
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
    [anon_sym_DASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH2] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_metadata_token1] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_frontmatter_comment] = ACTIONS(3),
    [sym__blank] = ACTIONS(5),
  },
  [1] = {
    [sym_template] = STATE(46),
    [sym_content] = STATE(3),
    [sym_directive] = STATE(3),
    [sym_output_directive] = STATE(3),
    [sym_comment_directive] = STATE(3),
    [sym_frontmatter] = STATE(2),
    [sym_body] = STATE(42),
    [aux_sym_content_repeat1] = STATE(13),
    [aux_sym_body_repeat1] = STATE(3),
    [aux_sym_content_token1] = ACTIONS(7),
    [anon_sym_LT_PERCENT_PERCENT] = ACTIONS(9),
    [anon_sym_LT_PERCENT] = ACTIONS(11),
    [anon_sym_LT_PERCENT_] = ACTIONS(13),
    [anon_sym_LT_PERCENT_PIPE] = ACTIONS(11),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(15),
    [anon_sym_LT_PERCENT_EQ_EQ] = ACTIONS(17),
    [anon_sym_LT_PERCENT_PIPE_EQ] = ACTIONS(15),
    [anon_sym_LT_PERCENT_PIPE_EQ_EQ] = ACTIONS(17),
    [anon_sym_LT_PERCENT_DASH] = ACTIONS(17),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(19),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(21),
    [sym_frontmatter_comment] = ACTIONS(5),
    [sym__blank] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(7), 1,
      aux_sym_content_token1,
    ACTIONS(9), 1,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(13), 1,
      anon_sym_LT_PERCENT_,
    ACTIONS(19), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      aux_sym_content_repeat1,
    STATE(43), 1,
      sym_body,
    ACTIONS(5), 2,
      sym_frontmatter_comment,
      sym__blank,
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
  [46] = 11,
    ACTIONS(7), 1,
      aux_sym_content_token1,
    ACTIONS(9), 1,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(13), 1,
      anon_sym_LT_PERCENT_,
    ACTIONS(19), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      aux_sym_content_repeat1,
    ACTIONS(5), 2,
      sym_frontmatter_comment,
      sym__blank,
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
  [89] = 11,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      aux_sym_content_token1,
    ACTIONS(32), 1,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(38), 1,
      anon_sym_LT_PERCENT_,
    ACTIONS(47), 1,
      anon_sym_LT_PERCENT_POUND,
    STATE(13), 1,
      aux_sym_content_repeat1,
    ACTIONS(5), 2,
      sym_frontmatter_comment,
      sym__blank,
    ACTIONS(35), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
    ACTIONS(41), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(44), 3,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
    STATE(4), 5,
      sym_content,
      sym_directive,
      sym_output_directive,
      sym_comment_directive,
      aux_sym_body_repeat1,
  [132] = 9,
    ACTIONS(3), 1,
      sym_frontmatter_comment,
    ACTIONS(5), 1,
      sym__blank,
    ACTIONS(52), 1,
      anon_sym_LT_PERCENT_,
    STATE(45), 1,
      sym_value,
    ACTIONS(50), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
    ACTIONS(54), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(56), 3,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
    STATE(6), 3,
      sym_directive,
      sym_output_directive,
      aux_sym_value_repeat1,
    ACTIONS(58), 4,
      sym_true,
      sym_false,
      sym_number,
      sym_string_value,
  [169] = 9,
    ACTIONS(3), 1,
      sym_frontmatter_comment,
    ACTIONS(5), 1,
      sym__blank,
    ACTIONS(52), 1,
      anon_sym_LT_PERCENT_,
    ACTIONS(60), 1,
      aux_sym_metadata_token1,
    ACTIONS(50), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
    ACTIONS(54), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(56), 3,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
    STATE(7), 3,
      sym_directive,
      sym_output_directive,
      aux_sym_value_repeat1,
    ACTIONS(62), 4,
      sym_true,
      sym_false,
      sym_number,
      sym_string_value,
  [206] = 9,
    ACTIONS(3), 1,
      sym_frontmatter_comment,
    ACTIONS(5), 1,
      sym__blank,
    ACTIONS(67), 1,
      anon_sym_LT_PERCENT_,
    ACTIONS(76), 1,
      aux_sym_metadata_token1,
    ACTIONS(64), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
    ACTIONS(70), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(73), 3,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
    STATE(7), 3,
      sym_directive,
      sym_output_directive,
      aux_sym_value_repeat1,
    ACTIONS(78), 4,
      sym_true,
      sym_false,
      sym_number,
      sym_string_value,
  [243] = 4,
    ACTIONS(3), 1,
      sym_frontmatter_comment,
    ACTIONS(5), 1,
      sym__blank,
    ACTIONS(83), 4,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
    ACTIONS(81), 9,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
      aux_sym_metadata_token1,
      sym_true,
      sym_false,
      sym_number,
      sym_string_value,
  [267] = 4,
    ACTIONS(3), 1,
      sym_frontmatter_comment,
    ACTIONS(5), 1,
      sym__blank,
    ACTIONS(87), 4,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
    ACTIONS(85), 9,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
      aux_sym_metadata_token1,
      sym_true,
      sym_false,
      sym_number,
      sym_string_value,
  [291] = 6,
    ACTIONS(91), 1,
      aux_sym_content_token1,
    ACTIONS(94), 1,
      anon_sym_LT_PERCENT_PERCENT,
    STATE(10), 1,
      aux_sym_content_repeat1,
    ACTIONS(5), 2,
      sym_frontmatter_comment,
      sym__blank,
    ACTIONS(97), 4,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(89), 6,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
  [319] = 4,
    ACTIONS(3), 1,
      sym_frontmatter_comment,
    ACTIONS(5), 1,
      sym__blank,
    ACTIONS(101), 4,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
    ACTIONS(99), 9,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
      aux_sym_metadata_token1,
      sym_true,
      sym_false,
      sym_number,
      sym_string_value,
  [343] = 4,
    ACTIONS(3), 1,
      sym_frontmatter_comment,
    ACTIONS(5), 1,
      sym__blank,
    ACTIONS(105), 4,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
    ACTIONS(103), 9,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
      aux_sym_metadata_token1,
      sym_true,
      sym_false,
      sym_number,
      sym_string_value,
  [367] = 6,
    ACTIONS(109), 1,
      aux_sym_content_token1,
    ACTIONS(111), 1,
      anon_sym_LT_PERCENT_PERCENT,
    STATE(10), 1,
      aux_sym_content_repeat1,
    ACTIONS(5), 2,
      sym_frontmatter_comment,
      sym__blank,
    ACTIONS(113), 4,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(107), 6,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
  [395] = 3,
    ACTIONS(5), 2,
      sym_frontmatter_comment,
      sym__blank,
    ACTIONS(103), 5,
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
  [416] = 3,
    ACTIONS(5), 2,
      sym_frontmatter_comment,
      sym__blank,
    ACTIONS(117), 5,
      aux_sym_content_token1,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(115), 7,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
  [437] = 3,
    ACTIONS(5), 2,
      sym_frontmatter_comment,
      sym__blank,
    ACTIONS(121), 5,
      aux_sym_content_token1,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(119), 7,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
  [458] = 3,
    ACTIONS(5), 2,
      sym_frontmatter_comment,
      sym__blank,
    ACTIONS(81), 5,
      aux_sym_content_token1,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(83), 7,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
  [479] = 3,
    ACTIONS(5), 2,
      sym_frontmatter_comment,
      sym__blank,
    ACTIONS(125), 5,
      aux_sym_content_token1,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(123), 7,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
  [500] = 3,
    ACTIONS(5), 2,
      sym_frontmatter_comment,
      sym__blank,
    ACTIONS(129), 5,
      aux_sym_content_token1,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(127), 7,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
  [521] = 3,
    ACTIONS(5), 2,
      sym_frontmatter_comment,
      sym__blank,
    ACTIONS(85), 5,
      aux_sym_content_token1,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(87), 7,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
  [542] = 3,
    ACTIONS(5), 2,
      sym_frontmatter_comment,
      sym__blank,
    ACTIONS(99), 5,
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
  [563] = 6,
    ACTIONS(131), 1,
      aux_sym_code_token1,
    ACTIONS(133), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(26), 1,
      aux_sym_code_repeat1,
    STATE(39), 1,
      sym_code,
    ACTIONS(5), 2,
      sym_frontmatter_comment,
      sym__blank,
    ACTIONS(135), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
  [585] = 6,
    ACTIONS(137), 1,
      aux_sym_code_token1,
    ACTIONS(139), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(28), 1,
      aux_sym_code_repeat1,
    STATE(37), 1,
      sym_code,
    ACTIONS(5), 2,
      sym_frontmatter_comment,
      sym__blank,
    ACTIONS(141), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym__PERCENT_GT,
  [607] = 6,
    ACTIONS(131), 1,
      aux_sym_code_token1,
    ACTIONS(133), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(26), 1,
      aux_sym_code_repeat1,
    STATE(36), 1,
      sym_code,
    ACTIONS(5), 2,
      sym_frontmatter_comment,
      sym__blank,
    ACTIONS(143), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
  [629] = 6,
    ACTIONS(137), 1,
      aux_sym_code_token1,
    ACTIONS(139), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(28), 1,
      aux_sym_code_repeat1,
    STATE(38), 1,
      sym_code,
    ACTIONS(5), 2,
      sym_frontmatter_comment,
      sym__blank,
    ACTIONS(145), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym__PERCENT_GT,
  [651] = 5,
    ACTIONS(147), 1,
      aux_sym_code_token1,
    ACTIONS(149), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(29), 1,
      aux_sym_code_repeat1,
    ACTIONS(5), 2,
      sym_frontmatter_comment,
      sym__blank,
    ACTIONS(151), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
  [670] = 5,
    ACTIONS(153), 1,
      aux_sym_code_token1,
    ACTIONS(156), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(27), 1,
      aux_sym_code_repeat1,
    ACTIONS(5), 2,
      sym_frontmatter_comment,
      sym__blank,
    ACTIONS(159), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym__PERCENT_GT,
  [689] = 5,
    ACTIONS(161), 1,
      aux_sym_code_token1,
    ACTIONS(163), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(27), 1,
      aux_sym_code_repeat1,
    ACTIONS(5), 2,
      sym_frontmatter_comment,
      sym__blank,
    ACTIONS(151), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym__PERCENT_GT,
  [708] = 5,
    ACTIONS(165), 1,
      aux_sym_code_token1,
    ACTIONS(168), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(29), 1,
      aux_sym_code_repeat1,
    ACTIONS(5), 2,
      sym_frontmatter_comment,
      sym__blank,
    ACTIONS(159), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
  [727] = 6,
    ACTIONS(171), 1,
      aux_sym_code_token1,
    ACTIONS(173), 1,
      anon_sym_PERCENT_PERCENT_GT,
    ACTIONS(175), 1,
      anon_sym_PERCENT_GT,
    STATE(34), 1,
      aux_sym_code_repeat1,
    STATE(41), 1,
      sym_code,
    ACTIONS(5), 2,
      sym_frontmatter_comment,
      sym__blank,
  [747] = 5,
    ACTIONS(159), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(177), 1,
      aux_sym_code_token1,
    ACTIONS(180), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(31), 1,
      aux_sym_code_repeat1,
    ACTIONS(5), 2,
      sym_frontmatter_comment,
      sym__blank,
  [764] = 4,
    ACTIONS(183), 1,
      anon_sym_DASH_DASH_DASH2,
    ACTIONS(185), 1,
      sym_key,
    ACTIONS(3), 2,
      sym_frontmatter_comment,
      sym__blank,
    STATE(32), 2,
      sym_metadata,
      aux_sym_frontmatter_repeat1,
  [779] = 4,
    ACTIONS(188), 1,
      anon_sym_DASH_DASH_DASH2,
    ACTIONS(190), 1,
      sym_key,
    ACTIONS(3), 2,
      sym_frontmatter_comment,
      sym__blank,
    STATE(35), 2,
      sym_metadata,
      aux_sym_frontmatter_repeat1,
  [794] = 5,
    ACTIONS(151), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(192), 1,
      aux_sym_code_token1,
    ACTIONS(194), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(31), 1,
      aux_sym_code_repeat1,
    ACTIONS(5), 2,
      sym_frontmatter_comment,
      sym__blank,
  [811] = 4,
    ACTIONS(190), 1,
      sym_key,
    ACTIONS(196), 1,
      anon_sym_DASH_DASH_DASH2,
    ACTIONS(3), 2,
      sym_frontmatter_comment,
      sym__blank,
    STATE(32), 2,
      sym_metadata,
      aux_sym_frontmatter_repeat1,
  [826] = 2,
    ACTIONS(3), 2,
      sym_frontmatter_comment,
      sym__blank,
    ACTIONS(198), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
  [836] = 2,
    ACTIONS(3), 2,
      sym_frontmatter_comment,
      sym__blank,
    ACTIONS(200), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym__PERCENT_GT,
  [846] = 2,
    ACTIONS(3), 2,
      sym_frontmatter_comment,
      sym__blank,
    ACTIONS(202), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym__PERCENT_GT,
  [856] = 2,
    ACTIONS(3), 2,
      sym_frontmatter_comment,
      sym__blank,
    ACTIONS(204), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
  [866] = 2,
    ACTIONS(3), 2,
      sym_frontmatter_comment,
      sym__blank,
    ACTIONS(206), 2,
      anon_sym_DASH_DASH_DASH2,
      sym_key,
  [875] = 2,
    ACTIONS(208), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(3), 2,
      sym_frontmatter_comment,
      sym__blank,
  [883] = 2,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_frontmatter_comment,
      sym__blank,
  [891] = 2,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_frontmatter_comment,
      sym__blank,
  [899] = 2,
    ACTIONS(212), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_frontmatter_comment,
      sym__blank,
  [907] = 3,
    ACTIONS(3), 1,
      sym_frontmatter_comment,
    ACTIONS(5), 1,
      sym__blank,
    ACTIONS(214), 1,
      aux_sym_metadata_token1,
  [917] = 2,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_frontmatter_comment,
      sym__blank,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 89,
  [SMALL_STATE(5)] = 132,
  [SMALL_STATE(6)] = 169,
  [SMALL_STATE(7)] = 206,
  [SMALL_STATE(8)] = 243,
  [SMALL_STATE(9)] = 267,
  [SMALL_STATE(10)] = 291,
  [SMALL_STATE(11)] = 319,
  [SMALL_STATE(12)] = 343,
  [SMALL_STATE(13)] = 367,
  [SMALL_STATE(14)] = 395,
  [SMALL_STATE(15)] = 416,
  [SMALL_STATE(16)] = 437,
  [SMALL_STATE(17)] = 458,
  [SMALL_STATE(18)] = 479,
  [SMALL_STATE(19)] = 500,
  [SMALL_STATE(20)] = 521,
  [SMALL_STATE(21)] = 542,
  [SMALL_STATE(22)] = 563,
  [SMALL_STATE(23)] = 585,
  [SMALL_STATE(24)] = 607,
  [SMALL_STATE(25)] = 629,
  [SMALL_STATE(26)] = 651,
  [SMALL_STATE(27)] = 670,
  [SMALL_STATE(28)] = 689,
  [SMALL_STATE(29)] = 708,
  [SMALL_STATE(30)] = 727,
  [SMALL_STATE(31)] = 747,
  [SMALL_STATE(32)] = 764,
  [SMALL_STATE(33)] = 779,
  [SMALL_STATE(34)] = 794,
  [SMALL_STATE(35)] = 811,
  [SMALL_STATE(36)] = 826,
  [SMALL_STATE(37)] = 836,
  [SMALL_STATE(38)] = 846,
  [SMALL_STATE(39)] = 856,
  [SMALL_STATE(40)] = 866,
  [SMALL_STATE(41)] = 875,
  [SMALL_STATE(42)] = 883,
  [SMALL_STATE(43)] = 891,
  [SMALL_STATE(44)] = 899,
  [SMALL_STATE(45)] = 907,
  [SMALL_STATE(46)] = 917,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_directive, 3, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_directive, 3, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2, 0, 0),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_directive, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_directive, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_directive, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_directive, 2, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frontmatter, 2, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frontmatter, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_directive, 3, 0, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_directive, 3, 0, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frontmatter, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frontmatter, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 1, 0, 0),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 4, 0, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 2, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [216] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
