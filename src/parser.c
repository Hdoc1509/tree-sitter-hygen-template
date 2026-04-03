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
  [18] = 9,
  [19] = 19,
  [20] = 20,
  [21] = 11,
  [22] = 22,
  [23] = 22,
  [24] = 24,
  [25] = 24,
  [26] = 26,
  [27] = 27,
  [28] = 27,
  [29] = 26,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 26,
  [35] = 27,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 37,
  [40] = 36,
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
        '\n', 65,
        '#', 83,
        '%', 4,
        '-', 11,
        ':', 64,
        '<', 5,
        '=', 13,
        '_', 14,
        'f', 24,
        't', 28,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '<') ADVANCE(6);
      if (lookahead == 'f') ADVANCE(75);
      if (lookahead == 't') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(82);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '<') ADVANCE(6);
      if (lookahead == 'f') ADVANCE(75);
      if (lookahead == 't') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(82);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(66);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(85);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '>') ADVANCE(52);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(48);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(49);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(35);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '=') ADVANCE(34);
      if (lookahead == '_') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(35);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '=') ADVANCE(37);
      if (lookahead == '_') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(35);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '_') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(21);
      END_STATE();
    case 11:
      if (lookahead == '%') ADVANCE(21);
      if (lookahead == '-') ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == '%') ADVANCE(21);
      if (lookahead == '-') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == '%') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == '%') ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == '%') ADVANCE(19);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '_') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(85);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(62);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '<') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(63);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(52);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(41);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(53);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(60);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(54);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(70);
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
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == '%') ADVANCE(19);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == '=') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 32:
      if (eof) ADVANCE(33);
      if (lookahead == '<') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0) ADVANCE(46);
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
      if (lookahead == '>') ADVANCE(52);
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '-' &&
          lookahead != '=' &&
          lookahead != '_') ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '-' &&
          lookahead != '=' &&
          lookahead != '_') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT_GT);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '%') ADVANCE(48);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(46);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(46);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PERCENT);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '%') ADVANCE(47);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == '_') ADVANCE(50);
      if (lookahead == '|') ADVANCE(51);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == '_') ADVANCE(50);
      if (lookahead == '|') ADVANCE(51);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PIPE);
      if (lookahead == '=') ADVANCE(57);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_PERCENT_GT);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT_GT);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym__PERCENT_GT);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_EQ);
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_EQ_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PIPE_EQ);
      if (lookahead == '=') ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PIPE_EQ_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_DASH);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_EQ_PERCENT_GT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_POUND);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH2);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_metadata_token1);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 't') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_metadata_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(85);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_true);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(82);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_false);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(82);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(82);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == 'f') ADVANCE(75);
      if (lookahead == 't') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(82);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == 'a') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(82);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(82);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(82);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == 'l') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(82);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == 'r') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(82);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == 's') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(82);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == 'u') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_frontmatter_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__blank);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 't') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
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
  [1] = {.lex_state = 17},
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
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 31},
  [31] = {.lex_state = 31},
  [32] = {.lex_state = 31},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 31},
  [37] = {.lex_state = 15},
  [38] = {.lex_state = 31},
  [39] = {.lex_state = 15},
  [40] = {.lex_state = 31},
  [41] = {.lex_state = 31},
  [42] = {.lex_state = 31},
  [43] = {.lex_state = 31},
  [44] = {.lex_state = 31},
  [45] = {.lex_state = 31},
  [46] = {.lex_state = 3},
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
    [sym_frontmatter_comment] = ACTIONS(1),
    [sym__blank] = ACTIONS(3),
  },
  [1] = {
    [sym_template] = STATE(43),
    [sym_content] = STATE(3),
    [sym_directive] = STATE(3),
    [sym_output_directive] = STATE(3),
    [sym_comment_directive] = STATE(3),
    [sym_frontmatter] = STATE(2),
    [sym_body] = STATE(41),
    [aux_sym_content_repeat1] = STATE(13),
    [aux_sym_body_repeat1] = STATE(3),
    [aux_sym_content_token1] = ACTIONS(5),
    [anon_sym_LT_PERCENT_PERCENT] = ACTIONS(7),
    [anon_sym_LT_PERCENT] = ACTIONS(9),
    [anon_sym_LT_PERCENT_] = ACTIONS(11),
    [anon_sym_LT_PERCENT_PIPE] = ACTIONS(9),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(13),
    [anon_sym_LT_PERCENT_EQ_EQ] = ACTIONS(15),
    [anon_sym_LT_PERCENT_PIPE_EQ] = ACTIONS(13),
    [anon_sym_LT_PERCENT_PIPE_EQ_EQ] = ACTIONS(15),
    [anon_sym_LT_PERCENT_DASH] = ACTIONS(15),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(17),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(19),
    [sym__blank] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(5), 1,
      aux_sym_content_token1,
    ACTIONS(7), 1,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(11), 1,
      anon_sym_LT_PERCENT_,
    ACTIONS(17), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      aux_sym_content_repeat1,
    STATE(44), 1,
      sym_body,
    ACTIONS(9), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
    ACTIONS(13), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(15), 3,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
    STATE(3), 5,
      sym_content,
      sym_directive,
      sym_output_directive,
      sym_comment_directive,
      aux_sym_body_repeat1,
  [45] = 11,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(5), 1,
      aux_sym_content_token1,
    ACTIONS(7), 1,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(11), 1,
      anon_sym_LT_PERCENT_,
    ACTIONS(17), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      aux_sym_content_repeat1,
    ACTIONS(9), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
    ACTIONS(13), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(15), 3,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
    STATE(4), 5,
      sym_content,
      sym_directive,
      sym_output_directive,
      sym_comment_directive,
      aux_sym_body_repeat1,
  [87] = 11,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      aux_sym_content_token1,
    ACTIONS(30), 1,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(36), 1,
      anon_sym_LT_PERCENT_,
    ACTIONS(45), 1,
      anon_sym_LT_PERCENT_POUND,
    STATE(13), 1,
      aux_sym_content_repeat1,
    ACTIONS(33), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
    ACTIONS(39), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(42), 3,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
    STATE(4), 5,
      sym_content,
      sym_directive,
      sym_output_directive,
      sym_comment_directive,
      aux_sym_body_repeat1,
  [129] = 8,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(50), 1,
      anon_sym_LT_PERCENT_,
    STATE(46), 1,
      sym_value,
    ACTIONS(48), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
    ACTIONS(52), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(54), 3,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
    STATE(6), 3,
      sym_directive,
      sym_output_directive,
      aux_sym_value_repeat1,
    ACTIONS(56), 4,
      sym_true,
      sym_false,
      sym_number,
      sym_string_value,
  [163] = 8,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(50), 1,
      anon_sym_LT_PERCENT_,
    ACTIONS(58), 1,
      aux_sym_metadata_token1,
    ACTIONS(48), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
    ACTIONS(52), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(54), 3,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
    STATE(7), 3,
      sym_directive,
      sym_output_directive,
      aux_sym_value_repeat1,
    ACTIONS(60), 4,
      sym_true,
      sym_false,
      sym_number,
      sym_string_value,
  [197] = 8,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(65), 1,
      anon_sym_LT_PERCENT_,
    ACTIONS(74), 1,
      aux_sym_metadata_token1,
    ACTIONS(62), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
    ACTIONS(68), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(71), 3,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
    STATE(7), 3,
      sym_directive,
      sym_output_directive,
      aux_sym_value_repeat1,
    ACTIONS(76), 4,
      sym_true,
      sym_false,
      sym_number,
      sym_string_value,
  [231] = 3,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(81), 4,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
    ACTIONS(79), 9,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
      aux_sym_metadata_token1,
      sym_true,
      sym_false,
      sym_number,
      sym_string_value,
  [252] = 3,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(85), 4,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
    ACTIONS(83), 9,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
      aux_sym_metadata_token1,
      sym_true,
      sym_false,
      sym_number,
      sym_string_value,
  [273] = 6,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(89), 1,
      aux_sym_content_token1,
    ACTIONS(92), 1,
      anon_sym_LT_PERCENT_PERCENT,
    STATE(10), 1,
      aux_sym_content_repeat1,
    ACTIONS(95), 4,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(87), 6,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
  [300] = 3,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(99), 4,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
    ACTIONS(97), 9,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
      aux_sym_metadata_token1,
      sym_true,
      sym_false,
      sym_number,
      sym_string_value,
  [321] = 3,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(103), 4,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
    ACTIONS(101), 9,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
      aux_sym_metadata_token1,
      sym_true,
      sym_false,
      sym_number,
      sym_string_value,
  [342] = 6,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(107), 1,
      aux_sym_content_token1,
    ACTIONS(109), 1,
      anon_sym_LT_PERCENT_PERCENT,
    STATE(10), 1,
      aux_sym_content_repeat1,
    ACTIONS(111), 4,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(105), 6,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
  [369] = 3,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(101), 5,
      aux_sym_content_token1,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(103), 7,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
  [389] = 3,
    ACTIONS(3), 1,
      sym__blank,
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
  [409] = 3,
    ACTIONS(3), 1,
      sym__blank,
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
  [429] = 3,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(79), 5,
      aux_sym_content_token1,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(81), 7,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
  [449] = 3,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(83), 5,
      aux_sym_content_token1,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(85), 7,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
  [469] = 3,
    ACTIONS(3), 1,
      sym__blank,
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
  [489] = 3,
    ACTIONS(3), 1,
      sym__blank,
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
  [509] = 3,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(97), 5,
      aux_sym_content_token1,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(99), 7,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
  [529] = 6,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(129), 1,
      aux_sym_code_token1,
    ACTIONS(131), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(27), 1,
      aux_sym_code_repeat1,
    STATE(36), 1,
      sym_code,
    ACTIONS(133), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
  [550] = 6,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(129), 1,
      aux_sym_code_token1,
    ACTIONS(131), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(27), 1,
      aux_sym_code_repeat1,
    STATE(40), 1,
      sym_code,
    ACTIONS(135), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
  [571] = 6,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(137), 1,
      aux_sym_code_token1,
    ACTIONS(139), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(28), 1,
      aux_sym_code_repeat1,
    STATE(37), 1,
      sym_code,
    ACTIONS(141), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym__PERCENT_GT,
  [592] = 6,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(137), 1,
      aux_sym_code_token1,
    ACTIONS(139), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(28), 1,
      aux_sym_code_repeat1,
    STATE(39), 1,
      sym_code,
    ACTIONS(143), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym__PERCENT_GT,
  [613] = 5,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(145), 1,
      aux_sym_code_token1,
    ACTIONS(148), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(26), 1,
      aux_sym_code_repeat1,
    ACTIONS(151), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym__PERCENT_GT,
  [631] = 5,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(153), 1,
      aux_sym_code_token1,
    ACTIONS(155), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(29), 1,
      aux_sym_code_repeat1,
    ACTIONS(157), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
  [649] = 5,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(159), 1,
      aux_sym_code_token1,
    ACTIONS(161), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(26), 1,
      aux_sym_code_repeat1,
    ACTIONS(157), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym__PERCENT_GT,
  [667] = 5,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(163), 1,
      aux_sym_code_token1,
    ACTIONS(166), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(29), 1,
      aux_sym_code_repeat1,
    ACTIONS(151), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
  [685] = 5,
    ACTIONS(169), 1,
      anon_sym_DASH_DASH_DASH2,
    ACTIONS(171), 1,
      sym_key,
    ACTIONS(174), 1,
      sym_frontmatter_comment,
    ACTIONS(177), 1,
      sym__blank,
    STATE(30), 2,
      sym_metadata,
      aux_sym_frontmatter_repeat1,
  [702] = 5,
    ACTIONS(177), 1,
      sym__blank,
    ACTIONS(179), 1,
      anon_sym_DASH_DASH_DASH2,
    ACTIONS(181), 1,
      sym_key,
    ACTIONS(183), 1,
      sym_frontmatter_comment,
    STATE(32), 2,
      sym_metadata,
      aux_sym_frontmatter_repeat1,
  [719] = 5,
    ACTIONS(177), 1,
      sym__blank,
    ACTIONS(181), 1,
      sym_key,
    ACTIONS(185), 1,
      anon_sym_DASH_DASH_DASH2,
    ACTIONS(187), 1,
      sym_frontmatter_comment,
    STATE(30), 2,
      sym_metadata,
      aux_sym_frontmatter_repeat1,
  [736] = 6,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(189), 1,
      aux_sym_code_token1,
    ACTIONS(191), 1,
      anon_sym_PERCENT_PERCENT_GT,
    ACTIONS(193), 1,
      anon_sym_PERCENT_GT,
    STATE(35), 1,
      aux_sym_code_repeat1,
    STATE(42), 1,
      sym_code,
  [755] = 5,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(151), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(195), 1,
      aux_sym_code_token1,
    ACTIONS(198), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(34), 1,
      aux_sym_code_repeat1,
  [771] = 5,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(157), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(201), 1,
      aux_sym_code_token1,
    ACTIONS(203), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(34), 1,
      aux_sym_code_repeat1,
  [787] = 2,
    ACTIONS(177), 1,
      sym__blank,
    ACTIONS(205), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
  [796] = 2,
    ACTIONS(177), 1,
      sym__blank,
    ACTIONS(207), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym__PERCENT_GT,
  [805] = 2,
    ACTIONS(177), 1,
      sym__blank,
    ACTIONS(209), 3,
      anon_sym_DASH_DASH_DASH2,
      sym_key,
      sym_frontmatter_comment,
  [814] = 2,
    ACTIONS(177), 1,
      sym__blank,
    ACTIONS(211), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym__PERCENT_GT,
  [823] = 2,
    ACTIONS(177), 1,
      sym__blank,
    ACTIONS(213), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
  [832] = 2,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(177), 1,
      sym__blank,
  [839] = 2,
    ACTIONS(177), 1,
      sym__blank,
    ACTIONS(215), 1,
      anon_sym_PERCENT_GT,
  [846] = 2,
    ACTIONS(177), 1,
      sym__blank,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
  [853] = 2,
    ACTIONS(177), 1,
      sym__blank,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
  [860] = 2,
    ACTIONS(177), 1,
      sym__blank,
    ACTIONS(221), 1,
      anon_sym_COLON,
  [867] = 2,
    ACTIONS(3), 1,
      sym__blank,
    ACTIONS(223), 1,
      aux_sym_metadata_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 87,
  [SMALL_STATE(5)] = 129,
  [SMALL_STATE(6)] = 163,
  [SMALL_STATE(7)] = 197,
  [SMALL_STATE(8)] = 231,
  [SMALL_STATE(9)] = 252,
  [SMALL_STATE(10)] = 273,
  [SMALL_STATE(11)] = 300,
  [SMALL_STATE(12)] = 321,
  [SMALL_STATE(13)] = 342,
  [SMALL_STATE(14)] = 369,
  [SMALL_STATE(15)] = 389,
  [SMALL_STATE(16)] = 409,
  [SMALL_STATE(17)] = 429,
  [SMALL_STATE(18)] = 449,
  [SMALL_STATE(19)] = 469,
  [SMALL_STATE(20)] = 489,
  [SMALL_STATE(21)] = 509,
  [SMALL_STATE(22)] = 529,
  [SMALL_STATE(23)] = 550,
  [SMALL_STATE(24)] = 571,
  [SMALL_STATE(25)] = 592,
  [SMALL_STATE(26)] = 613,
  [SMALL_STATE(27)] = 631,
  [SMALL_STATE(28)] = 649,
  [SMALL_STATE(29)] = 667,
  [SMALL_STATE(30)] = 685,
  [SMALL_STATE(31)] = 702,
  [SMALL_STATE(32)] = 719,
  [SMALL_STATE(33)] = 736,
  [SMALL_STATE(34)] = 755,
  [SMALL_STATE(35)] = 771,
  [SMALL_STATE(36)] = 787,
  [SMALL_STATE(37)] = 796,
  [SMALL_STATE(38)] = 805,
  [SMALL_STATE(39)] = 814,
  [SMALL_STATE(40)] = 823,
  [SMALL_STATE(41)] = 832,
  [SMALL_STATE(42)] = 839,
  [SMALL_STATE(43)] = 846,
  [SMALL_STATE(44)] = 853,
  [SMALL_STATE(45)] = 860,
  [SMALL_STATE(46)] = 867,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_directive, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_directive, 3, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2, 0, 0),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_directive, 2, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_directive, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_directive, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_directive, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frontmatter, 2, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frontmatter, 2, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_directive, 3, 0, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_directive, 3, 0, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frontmatter, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frontmatter, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 4, 0, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [217] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 2, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
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
