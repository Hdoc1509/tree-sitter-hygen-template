#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 47
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 1
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  anon_sym_DASH_DASH_DASH = 1,
  anon_sym_DASH_DASH_DASH2 = 2,
  anon_sym_COLON = 3,
  aux_sym_metadata_token1 = 4,
  sym_key = 5,
  sym_true = 6,
  sym_false = 7,
  sym_number = 8,
  sym_string_value = 9,
  anon_sym_LT_PERCENT = 10,
  anon_sym_LT_PERCENT_ = 11,
  anon_sym_PERCENT_GT = 12,
  anon_sym_DASH_PERCENT_GT = 13,
  anon_sym__PERCENT_GT = 14,
  anon_sym_LT_PERCENT_EQ = 15,
  anon_sym_LT_PERCENT_DASH = 16,
  anon_sym_LT_PERCENT_POUND = 17,
  aux_sym_code_token1 = 18,
  anon_sym_PERCENT_PERCENT_GT = 19,
  aux_sym_content_token1 = 20,
  anon_sym_LT_PERCENT_PERCENT = 21,
  sym_frontmatter_comment = 22,
  sym__blank = 23,
  sym_template = 24,
  sym_frontmatter = 25,
  sym_metadata = 26,
  sym_value = 27,
  sym_directive = 28,
  sym_output_directive = 29,
  sym_comment_directive = 30,
  sym_code = 31,
  sym_body = 32,
  sym_content = 33,
  aux_sym_frontmatter_repeat1 = 34,
  aux_sym_value_repeat1 = 35,
  aux_sym_code_repeat1 = 36,
  aux_sym_body_repeat1 = 37,
  aux_sym_content_repeat1 = 38,
  alias_sym_comment = 39,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DASH_DASH_DASH] = "---",
  [anon_sym_DASH_DASH_DASH2] = "---",
  [anon_sym_COLON] = ":",
  [aux_sym_metadata_token1] = "metadata_token1",
  [sym_key] = "key",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_number] = "number",
  [sym_string_value] = "string_value",
  [anon_sym_LT_PERCENT] = "<%",
  [anon_sym_LT_PERCENT_] = "<%_",
  [anon_sym_PERCENT_GT] = "%>",
  [anon_sym_DASH_PERCENT_GT] = "-%>",
  [anon_sym__PERCENT_GT] = "_%>",
  [anon_sym_LT_PERCENT_EQ] = "<%=",
  [anon_sym_LT_PERCENT_DASH] = "<%-",
  [anon_sym_LT_PERCENT_POUND] = "<%#",
  [aux_sym_code_token1] = "code_token1",
  [anon_sym_PERCENT_PERCENT_GT] = "%%>",
  [aux_sym_content_token1] = "content_token1",
  [anon_sym_LT_PERCENT_PERCENT] = "<%%",
  [sym_frontmatter_comment] = "frontmatter_comment",
  [sym__blank] = "_blank",
  [sym_template] = "template",
  [sym_frontmatter] = "frontmatter",
  [sym_metadata] = "metadata",
  [sym_value] = "value",
  [sym_directive] = "directive",
  [sym_output_directive] = "output_directive",
  [sym_comment_directive] = "comment_directive",
  [sym_code] = "code",
  [sym_body] = "body",
  [sym_content] = "content",
  [aux_sym_frontmatter_repeat1] = "frontmatter_repeat1",
  [aux_sym_value_repeat1] = "value_repeat1",
  [aux_sym_code_repeat1] = "code_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_content_repeat1] = "content_repeat1",
  [alias_sym_comment] = "comment",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DASH_DASH_DASH] = anon_sym_DASH_DASH_DASH,
  [anon_sym_DASH_DASH_DASH2] = anon_sym_DASH_DASH_DASH,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_metadata_token1] = aux_sym_metadata_token1,
  [sym_key] = sym_key,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_number] = sym_number,
  [sym_string_value] = sym_string_value,
  [anon_sym_LT_PERCENT] = anon_sym_LT_PERCENT,
  [anon_sym_LT_PERCENT_] = anon_sym_LT_PERCENT_,
  [anon_sym_PERCENT_GT] = anon_sym_PERCENT_GT,
  [anon_sym_DASH_PERCENT_GT] = anon_sym_DASH_PERCENT_GT,
  [anon_sym__PERCENT_GT] = anon_sym__PERCENT_GT,
  [anon_sym_LT_PERCENT_EQ] = anon_sym_LT_PERCENT_EQ,
  [anon_sym_LT_PERCENT_DASH] = anon_sym_LT_PERCENT_DASH,
  [anon_sym_LT_PERCENT_POUND] = anon_sym_LT_PERCENT_POUND,
  [aux_sym_code_token1] = aux_sym_code_token1,
  [anon_sym_PERCENT_PERCENT_GT] = anon_sym_PERCENT_PERCENT_GT,
  [aux_sym_content_token1] = aux_sym_content_token1,
  [anon_sym_LT_PERCENT_PERCENT] = anon_sym_LT_PERCENT_PERCENT,
  [sym_frontmatter_comment] = sym_frontmatter_comment,
  [sym__blank] = sym__blank,
  [sym_template] = sym_template,
  [sym_frontmatter] = sym_frontmatter,
  [sym_metadata] = sym_metadata,
  [sym_value] = sym_value,
  [sym_directive] = sym_directive,
  [sym_output_directive] = sym_output_directive,
  [sym_comment_directive] = sym_comment_directive,
  [sym_code] = sym_code,
  [sym_body] = sym_body,
  [sym_content] = sym_content,
  [aux_sym_frontmatter_repeat1] = aux_sym_frontmatter_repeat1,
  [aux_sym_value_repeat1] = aux_sym_value_repeat1,
  [aux_sym_code_repeat1] = aux_sym_code_repeat1,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_content_repeat1] = aux_sym_content_repeat1,
  [alias_sym_comment] = alias_sym_comment,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [anon_sym_LT_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_] = {
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
  [anon_sym_LT_PERCENT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_POUND] = {
    .visible = true,
    .named = false,
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
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_content] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_frontmatter_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_content_repeat1] = {
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
  [15] = 12,
  [16] = 16,
  [17] = 11,
  [18] = 18,
  [19] = 13,
  [20] = 20,
  [21] = 8,
  [22] = 22,
  [23] = 22,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 24,
  [28] = 28,
  [29] = 29,
  [30] = 26,
  [31] = 31,
  [32] = 32,
  [33] = 25,
  [34] = 25,
  [35] = 26,
  [36] = 36,
  [37] = 37,
  [38] = 36,
  [39] = 39,
  [40] = 39,
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
      if (eof) ADVANCE(31);
      ADVANCE_MAP(
        '\n', 35,
        '#', 83,
        '%', 4,
        '-', 11,
        ':', 34,
        '<', 5,
        '_', 37,
        'f', 38,
        't', 41,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '<') ADVANCE(6);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 't') ADVANCE(57);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(60);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '<') ADVANCE(6);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 't') ADVANCE(57);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(60);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(85);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(19);
      if (lookahead == '>') ADVANCE(64);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(61);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(62);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(71);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '=') ADVANCE(70);
      if (lookahead == '_') ADVANCE(73);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(71);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '=' ||
          lookahead == '_') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(71);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '_') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(20);
      END_STATE();
    case 11:
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '-') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '-') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == '%') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == '%') ADVANCE(18);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '_') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(85);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(32);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(79);
      if (lookahead == '<') ADVANCE(77);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(33);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(64);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(76);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(65);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(66);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 28:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 29:
      if (eof) ADVANCE(31);
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == '%') ADVANCE(18);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == ':') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 30:
      if (eof) ADVANCE(31);
      if (lookahead == '<') ADVANCE(77);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH2);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_metadata_token1);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == 't') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_metadata_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(85);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '%') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'a') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'e') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'l') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'r') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 's') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'u') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_true);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(60);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_false);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(60);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(60);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 't') ADVANCE(57);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(60);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(60);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(60);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(60);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == 'l') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(60);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == 'r') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(60);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(60);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == 'u') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      if (lookahead == '#') ADVANCE(69);
      if (lookahead == '%') ADVANCE(82);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '=') ADVANCE(67);
      if (lookahead == '_') ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '=') ADVANCE(67);
      if (lookahead == '_') ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_PERCENT_GT);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT_GT);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym__PERCENT_GT);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_EQ);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_DASH);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_POUND);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_code_token1);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '%') ADVANCE(19);
      if (lookahead == '>') ADVANCE(64);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '%') ADVANCE(20);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '%') ADVANCE(21);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '-' &&
          lookahead != '=' &&
          lookahead != '_') ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '-' &&
          lookahead != '=' &&
          lookahead != '_') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT_GT);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '%') ADVANCE(61);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(81);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PERCENT);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_frontmatter_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__blank);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == 't') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__blank);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(85);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 16},
  [2] = {.lex_state = 30},
  [3] = {.lex_state = 30},
  [4] = {.lex_state = 30},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 30},
  [10] = {.lex_state = 30},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 30},
  [15] = {.lex_state = 30},
  [16] = {.lex_state = 30},
  [17] = {.lex_state = 30},
  [18] = {.lex_state = 30},
  [19] = {.lex_state = 30},
  [20] = {.lex_state = 30},
  [21] = {.lex_state = 30},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 29},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 29},
  [32] = {.lex_state = 29},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 29},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 29},
  [40] = {.lex_state = 29},
  [41] = {.lex_state = 29},
  [42] = {.lex_state = 29},
  [43] = {.lex_state = 29},
  [44] = {.lex_state = 29},
  [45] = {.lex_state = 29},
  [46] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH2] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_metadata_token1] = ACTIONS(1),
    [sym_key] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_LT_PERCENT] = ACTIONS(1),
    [anon_sym_LT_PERCENT_] = ACTIONS(1),
    [anon_sym_PERCENT_GT] = ACTIONS(1),
    [anon_sym_DASH_PERCENT_GT] = ACTIONS(1),
    [anon_sym__PERCENT_GT] = ACTIONS(1),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_LT_PERCENT_DASH] = ACTIONS(1),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(1),
    [anon_sym_PERCENT_PERCENT_GT] = ACTIONS(1),
    [anon_sym_LT_PERCENT_PERCENT] = ACTIONS(1),
    [sym_frontmatter_comment] = ACTIONS(1),
    [sym__blank] = ACTIONS(3),
  },
  [1] = {
    [sym_template] = STATE(44),
    [sym_frontmatter] = STATE(2),
    [sym_directive] = STATE(3),
    [sym_output_directive] = STATE(3),
    [sym_comment_directive] = STATE(3),
    [sym_body] = STATE(45),
    [sym_content] = STATE(3),
    [aux_sym_body_repeat1] = STATE(3),
    [aux_sym_content_repeat1] = STATE(9),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(5),
    [anon_sym_LT_PERCENT] = ACTIONS(7),
    [anon_sym_LT_PERCENT_] = ACTIONS(9),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(11),
    [anon_sym_LT_PERCENT_DASH] = ACTIONS(11),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(13),
    [aux_sym_content_token1] = ACTIONS(15),
    [anon_sym_LT_PERCENT_PERCENT] = ACTIONS(17),
    [sym__blank] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(7), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(9), 1,
      anon_sym_LT_PERCENT_,
    ACTIONS(13), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(15), 1,
      aux_sym_content_token1,
    ACTIONS(17), 1,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym_content_repeat1,
    STATE(41), 1,
      sym_body,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_DASH,
    STATE(3), 5,
      sym_directive,
      sym_output_directive,
      sym_comment_directive,
      sym_content,
      aux_sym_body_repeat1,
  [39] = 10,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(7), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(9), 1,
      anon_sym_LT_PERCENT_,
    ACTIONS(13), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(15), 1,
      aux_sym_content_token1,
    ACTIONS(17), 1,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym_content_repeat1,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_DASH,
    STATE(4), 5,
      sym_directive,
      sym_output_directive,
      sym_comment_directive,
      sym_content,
      aux_sym_body_repeat1,
  [75] = 10,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(28), 1,
      anon_sym_LT_PERCENT_,
    ACTIONS(34), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(37), 1,
      aux_sym_content_token1,
    ACTIONS(40), 1,
      anon_sym_LT_PERCENT_PERCENT,
    STATE(9), 1,
      aux_sym_content_repeat1,
    ACTIONS(31), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_DASH,
    STATE(4), 5,
      sym_directive,
      sym_output_directive,
      sym_comment_directive,
      sym_content,
      aux_sym_body_repeat1,
  [111] = 7,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(45), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(47), 1,
      anon_sym_LT_PERCENT_,
    STATE(46), 1,
      sym_value,
    ACTIONS(49), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_DASH,
    STATE(6), 3,
      sym_directive,
      sym_output_directive,
      aux_sym_value_repeat1,
    ACTIONS(43), 4,
      sym_true,
      sym_false,
      sym_number,
      sym_string_value,
  [139] = 7,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(45), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(47), 1,
      anon_sym_LT_PERCENT_,
    ACTIONS(51), 1,
      aux_sym_metadata_token1,
    ACTIONS(49), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_DASH,
    STATE(7), 3,
      sym_directive,
      sym_output_directive,
      aux_sym_value_repeat1,
    ACTIONS(53), 4,
      sym_true,
      sym_false,
      sym_number,
      sym_string_value,
  [167] = 7,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(55), 1,
      aux_sym_metadata_token1,
    ACTIONS(60), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(63), 1,
      anon_sym_LT_PERCENT_,
    ACTIONS(66), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_DASH,
    STATE(7), 3,
      sym_directive,
      sym_output_directive,
      aux_sym_value_repeat1,
    ACTIONS(57), 4,
      sym_true,
      sym_false,
      sym_number,
      sym_string_value,
  [195] = 3,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(71), 3,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_DASH,
    ACTIONS(69), 6,
      aux_sym_metadata_token1,
      sym_true,
      sym_false,
      sym_number,
      sym_string_value,
      anon_sym_LT_PERCENT,
  [212] = 6,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(75), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(77), 1,
      aux_sym_content_token1,
    ACTIONS(79), 1,
      anon_sym_LT_PERCENT_PERCENT,
    STATE(10), 1,
      aux_sym_content_repeat1,
    ACTIONS(73), 5,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
  [235] = 6,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(83), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(85), 1,
      aux_sym_content_token1,
    ACTIONS(88), 1,
      anon_sym_LT_PERCENT_PERCENT,
    STATE(10), 1,
      aux_sym_content_repeat1,
    ACTIONS(81), 5,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
  [258] = 3,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(93), 3,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_DASH,
    ACTIONS(91), 6,
      aux_sym_metadata_token1,
      sym_true,
      sym_false,
      sym_number,
      sym_string_value,
      anon_sym_LT_PERCENT,
  [275] = 3,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(97), 3,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_DASH,
    ACTIONS(95), 6,
      aux_sym_metadata_token1,
      sym_true,
      sym_false,
      sym_number,
      sym_string_value,
      anon_sym_LT_PERCENT,
  [292] = 3,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(101), 3,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_DASH,
    ACTIONS(99), 6,
      aux_sym_metadata_token1,
      sym_true,
      sym_false,
      sym_number,
      sym_string_value,
      anon_sym_LT_PERCENT,
  [309] = 3,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(105), 2,
      anon_sym_LT_PERCENT,
      aux_sym_content_token1,
    ACTIONS(103), 6,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_PERCENT,
  [325] = 3,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(95), 2,
      anon_sym_LT_PERCENT,
      aux_sym_content_token1,
    ACTIONS(97), 6,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_PERCENT,
  [341] = 3,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(109), 2,
      anon_sym_LT_PERCENT,
      aux_sym_content_token1,
    ACTIONS(107), 6,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_PERCENT,
  [357] = 3,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(91), 2,
      anon_sym_LT_PERCENT,
      aux_sym_content_token1,
    ACTIONS(93), 6,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_PERCENT,
  [373] = 3,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(113), 2,
      anon_sym_LT_PERCENT,
      aux_sym_content_token1,
    ACTIONS(111), 6,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_PERCENT,
  [389] = 3,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(99), 2,
      anon_sym_LT_PERCENT,
      aux_sym_content_token1,
    ACTIONS(101), 6,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_PERCENT,
  [405] = 3,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(117), 2,
      anon_sym_LT_PERCENT,
      aux_sym_content_token1,
    ACTIONS(115), 6,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_PERCENT,
  [421] = 3,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(69), 2,
      anon_sym_LT_PERCENT,
      aux_sym_content_token1,
    ACTIONS(71), 6,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
      anon_sym_LT_PERCENT_PERCENT,
  [437] = 6,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(121), 1,
      aux_sym_code_token1,
    ACTIONS(123), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(25), 1,
      aux_sym_code_repeat1,
    STATE(36), 1,
      sym_code,
    ACTIONS(119), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym__PERCENT_GT,
  [458] = 6,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(121), 1,
      aux_sym_code_token1,
    ACTIONS(123), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(25), 1,
      aux_sym_code_repeat1,
    STATE(38), 1,
      sym_code,
    ACTIONS(125), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym__PERCENT_GT,
  [479] = 6,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(129), 1,
      aux_sym_code_token1,
    ACTIONS(131), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(33), 1,
      aux_sym_code_repeat1,
    STATE(39), 1,
      sym_code,
    ACTIONS(127), 2,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
  [499] = 5,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(135), 1,
      aux_sym_code_token1,
    ACTIONS(137), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(26), 1,
      aux_sym_code_repeat1,
    ACTIONS(133), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym__PERCENT_GT,
  [517] = 5,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(141), 1,
      aux_sym_code_token1,
    ACTIONS(144), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(26), 1,
      aux_sym_code_repeat1,
    ACTIONS(139), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym__PERCENT_GT,
  [535] = 6,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(129), 1,
      aux_sym_code_token1,
    ACTIONS(131), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(33), 1,
      aux_sym_code_repeat1,
    STATE(40), 1,
      sym_code,
    ACTIONS(147), 2,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
  [555] = 5,
    ACTIONS(149), 1,
      anon_sym_DASH_DASH_DASH2,
    ACTIONS(151), 1,
      sym_key,
    ACTIONS(154), 1,
      sym_frontmatter_comment,
    ACTIONS(157), 1,
      sym__blank,
    STATE(28), 2,
      sym_metadata,
      aux_sym_frontmatter_repeat1,
  [572] = 6,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(159), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(161), 1,
      aux_sym_code_token1,
    ACTIONS(163), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(34), 1,
      aux_sym_code_repeat1,
    STATE(42), 1,
      sym_code,
  [591] = 5,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(165), 1,
      aux_sym_code_token1,
    ACTIONS(168), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(30), 1,
      aux_sym_code_repeat1,
    ACTIONS(139), 2,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
  [608] = 5,
    ACTIONS(157), 1,
      sym__blank,
    ACTIONS(171), 1,
      anon_sym_DASH_DASH_DASH2,
    ACTIONS(173), 1,
      sym_key,
    ACTIONS(175), 1,
      sym_frontmatter_comment,
    STATE(32), 2,
      sym_metadata,
      aux_sym_frontmatter_repeat1,
  [625] = 5,
    ACTIONS(157), 1,
      sym__blank,
    ACTIONS(173), 1,
      sym_key,
    ACTIONS(177), 1,
      anon_sym_DASH_DASH_DASH2,
    ACTIONS(179), 1,
      sym_frontmatter_comment,
    STATE(28), 2,
      sym_metadata,
      aux_sym_frontmatter_repeat1,
  [642] = 5,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(181), 1,
      aux_sym_code_token1,
    ACTIONS(183), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(30), 1,
      aux_sym_code_repeat1,
    ACTIONS(133), 2,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
  [659] = 5,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(133), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(185), 1,
      aux_sym_code_token1,
    ACTIONS(187), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(35), 1,
      aux_sym_code_repeat1,
  [675] = 5,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(139), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(189), 1,
      aux_sym_code_token1,
    ACTIONS(192), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(35), 1,
      aux_sym_code_repeat1,
  [691] = 2,
    ACTIONS(157), 1,
      sym__blank,
    ACTIONS(195), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym__PERCENT_GT,
  [700] = 2,
    ACTIONS(157), 1,
      sym__blank,
    ACTIONS(197), 3,
      anon_sym_DASH_DASH_DASH2,
      sym_key,
      sym_frontmatter_comment,
  [709] = 2,
    ACTIONS(157), 1,
      sym__blank,
    ACTIONS(199), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym__PERCENT_GT,
  [718] = 2,
    ACTIONS(157), 1,
      sym__blank,
    ACTIONS(201), 2,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
  [726] = 2,
    ACTIONS(157), 1,
      sym__blank,
    ACTIONS(203), 2,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
  [734] = 2,
    ACTIONS(157), 1,
      sym__blank,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
  [741] = 2,
    ACTIONS(157), 1,
      sym__blank,
    ACTIONS(207), 1,
      anon_sym_PERCENT_GT,
  [748] = 2,
    ACTIONS(157), 1,
      sym__blank,
    ACTIONS(209), 1,
      anon_sym_COLON,
  [755] = 2,
    ACTIONS(157), 1,
      sym__blank,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
  [762] = 2,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(157), 1,
      sym__blank,
  [769] = 2,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(213), 1,
      aux_sym_metadata_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 39,
  [SMALL_STATE(4)] = 75,
  [SMALL_STATE(5)] = 111,
  [SMALL_STATE(6)] = 139,
  [SMALL_STATE(7)] = 167,
  [SMALL_STATE(8)] = 195,
  [SMALL_STATE(9)] = 212,
  [SMALL_STATE(10)] = 235,
  [SMALL_STATE(11)] = 258,
  [SMALL_STATE(12)] = 275,
  [SMALL_STATE(13)] = 292,
  [SMALL_STATE(14)] = 309,
  [SMALL_STATE(15)] = 325,
  [SMALL_STATE(16)] = 341,
  [SMALL_STATE(17)] = 357,
  [SMALL_STATE(18)] = 373,
  [SMALL_STATE(19)] = 389,
  [SMALL_STATE(20)] = 405,
  [SMALL_STATE(21)] = 421,
  [SMALL_STATE(22)] = 437,
  [SMALL_STATE(23)] = 458,
  [SMALL_STATE(24)] = 479,
  [SMALL_STATE(25)] = 499,
  [SMALL_STATE(26)] = 517,
  [SMALL_STATE(27)] = 535,
  [SMALL_STATE(28)] = 555,
  [SMALL_STATE(29)] = 572,
  [SMALL_STATE(30)] = 591,
  [SMALL_STATE(31)] = 608,
  [SMALL_STATE(32)] = 625,
  [SMALL_STATE(33)] = 642,
  [SMALL_STATE(34)] = 659,
  [SMALL_STATE(35)] = 675,
  [SMALL_STATE(36)] = 691,
  [SMALL_STATE(37)] = 700,
  [SMALL_STATE(38)] = 709,
  [SMALL_STATE(39)] = 718,
  [SMALL_STATE(40)] = 726,
  [SMALL_STATE(41)] = 734,
  [SMALL_STATE(42)] = 741,
  [SMALL_STATE(43)] = 748,
  [SMALL_STATE(44)] = 755,
  [SMALL_STATE(45)] = 762,
  [SMALL_STATE(46)] = 769,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2, 0, 0),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_directive, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_directive, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_directive, 3, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_directive, 3, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frontmatter, 3, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frontmatter, 3, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frontmatter, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frontmatter, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_directive, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_directive, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_directive, 3, 0, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_directive, 3, 0, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 1, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 4, 0, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 2, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [211] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
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
