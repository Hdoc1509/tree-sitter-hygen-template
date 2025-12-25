#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 1
#define TOKEN_COUNT 27
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
  aux_sym_frontmatter_token1 = 19,
  anon_sym_DASH_DASH_DASH2 = 20,
  anon_sym_COLON = 21,
  sym_key = 22,
  sym_true = 23,
  sym_false = 24,
  sym_number = 25,
  sym_string_value = 26,
  sym_template = 27,
  sym_code = 28,
  sym_content = 29,
  sym_directive = 30,
  sym_output_directive = 31,
  sym_comment_directive = 32,
  sym_frontmatter = 33,
  sym_metadata = 34,
  sym_value = 35,
  sym_body = 36,
  aux_sym_code_repeat1 = 37,
  aux_sym_content_repeat1 = 38,
  aux_sym_frontmatter_repeat1 = 39,
  aux_sym_value_repeat1 = 40,
  aux_sym_body_repeat1 = 41,
  alias_sym_comment = 42,
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
  [aux_sym_frontmatter_token1] = "frontmatter_token1",
  [anon_sym_DASH_DASH_DASH2] = "---",
  [anon_sym_COLON] = ":",
  [sym_key] = "key",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_number] = "number",
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
  [anon_sym_DASH_DASH_DASH] = anon_sym_DASH_DASH_DASH,
  [aux_sym_frontmatter_token1] = aux_sym_frontmatter_token1,
  [anon_sym_DASH_DASH_DASH2] = anon_sym_DASH_DASH_DASH,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_key] = sym_key,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_number] = sym_number,
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
  [14] = 13,
  [15] = 15,
  [16] = 12,
  [17] = 10,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 11,
  [22] = 22,
  [23] = 23,
  [24] = 22,
  [25] = 23,
  [26] = 26,
  [27] = 27,
  [28] = 27,
  [29] = 26,
  [30] = 30,
  [31] = 31,
  [32] = 27,
  [33] = 33,
  [34] = 26,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 36,
  [39] = 37,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(29);
      ADVANCE_MAP(
        '\n', 58,
        '%', 3,
        '-', 9,
        ':', 60,
        '<', 4,
        '=', 10,
        '_', 11,
        'f', 20,
        't', 25,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(69);
      if (lookahead == 't') ADVANCE(73);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '-') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(16);
      if (lookahead == '>') ADVANCE(46);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(42);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(43);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(31);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '_') ADVANCE(34);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(31);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(31);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '_') ADVANCE(30);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(17);
      if (lookahead == '-') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == '%') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(56);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '<') ADVANCE(37);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(59);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(36);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(47);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(54);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(48);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(20);
      if (lookahead == 't') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 28:
      if (eof) ADVANCE(29);
      if (lookahead == '<') ADVANCE(37);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_code_token1);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '%') ADVANCE(16);
      if (lookahead == '>') ADVANCE(46);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '%') ADVANCE(17);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '%') ADVANCE(18);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '%') ADVANCE(19);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '-' &&
          lookahead != '=' &&
          lookahead != '_') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT_GT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '%') ADVANCE(42);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PERCENT);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '%') ADVANCE(41);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == '|') ADVANCE(45);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == '|') ADVANCE(45);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PIPE);
      if (lookahead == '=') ADVANCE(51);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_PERCENT_GT);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_DASH_PERCENT_GT);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym__PERCENT_GT);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_EQ);
      if (lookahead == '=') ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_EQ_EQ);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PIPE_EQ);
      if (lookahead == '=') ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PIPE_EQ_EQ);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_DASH);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_EQ_PERCENT_GT);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_POUND);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_frontmatter_token1);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_frontmatter_token1);
      if (lookahead == 'f') ADVANCE(20);
      if (lookahead == 't') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH2);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_true);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<') ADVANCE(76);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_false);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<') ADVANCE(76);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<') ADVANCE(76);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == 'f') ADVANCE(69);
      if (lookahead == 't') ADVANCE(73);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(76);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == 'a') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<') ADVANCE(76);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<') ADVANCE(76);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<') ADVANCE(76);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == 'l') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<') ADVANCE(76);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == 'r') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<') ADVANCE(76);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == 's') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<') ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == 'u') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<') ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<') ADVANCE(76);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 13},
  [2] = {.lex_state = 28},
  [3] = {.lex_state = 28},
  [4] = {.lex_state = 28},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 28},
  [9] = {.lex_state = 28},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 28},
  [15] = {.lex_state = 28},
  [16] = {.lex_state = 28},
  [17] = {.lex_state = 28},
  [18] = {.lex_state = 28},
  [19] = {.lex_state = 28},
  [20] = {.lex_state = 28},
  [21] = {.lex_state = 28},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
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
    [aux_sym_frontmatter_token1] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH2] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(46),
    [sym_content] = STATE(3),
    [sym_directive] = STATE(3),
    [sym_output_directive] = STATE(3),
    [sym_comment_directive] = STATE(3),
    [sym_frontmatter] = STATE(2),
    [sym_body] = STATE(45),
    [aux_sym_content_repeat1] = STATE(9),
    [aux_sym_body_repeat1] = STATE(3),
    [aux_sym_content_token1] = ACTIONS(3),
    [anon_sym_LT_PERCENT_PERCENT] = ACTIONS(5),
    [anon_sym_LT_PERCENT] = ACTIONS(7),
    [anon_sym_LT_PERCENT_] = ACTIONS(9),
    [anon_sym_LT_PERCENT_PIPE] = ACTIONS(7),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(11),
    [anon_sym_LT_PERCENT_EQ_EQ] = ACTIONS(13),
    [anon_sym_LT_PERCENT_PIPE_EQ] = ACTIONS(11),
    [anon_sym_LT_PERCENT_PIPE_EQ_EQ] = ACTIONS(13),
    [anon_sym_LT_PERCENT_DASH] = ACTIONS(13),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(15),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      aux_sym_content_token1,
    ACTIONS(5), 1,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(9), 1,
      anon_sym_LT_PERCENT_,
    ACTIONS(15), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym_content_repeat1,
    STATE(44), 1,
      sym_body,
    ACTIONS(7), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(13), 3,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
    STATE(3), 5,
      sym_content,
      sym_directive,
      sym_output_directive,
      sym_comment_directive,
      aux_sym_body_repeat1,
  [42] = 10,
    ACTIONS(3), 1,
      aux_sym_content_token1,
    ACTIONS(5), 1,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(9), 1,
      anon_sym_LT_PERCENT_,
    ACTIONS(15), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym_content_repeat1,
    ACTIONS(7), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(13), 3,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
    STATE(4), 5,
      sym_content,
      sym_directive,
      sym_output_directive,
      sym_comment_directive,
      aux_sym_body_repeat1,
  [81] = 10,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      aux_sym_content_token1,
    ACTIONS(28), 1,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(34), 1,
      anon_sym_LT_PERCENT_,
    ACTIONS(43), 1,
      anon_sym_LT_PERCENT_POUND,
    STATE(9), 1,
      aux_sym_content_repeat1,
    ACTIONS(31), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
    ACTIONS(37), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(40), 3,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
    STATE(4), 5,
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
    ACTIONS(60), 4,
      sym_true,
      sym_false,
      sym_number,
      sym_string_value,
  [151] = 7,
    ACTIONS(65), 1,
      anon_sym_LT_PERCENT_,
    ACTIONS(71), 1,
      aux_sym_frontmatter_token1,
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
    ACTIONS(73), 4,
      sym_true,
      sym_false,
      sym_number,
      sym_string_value,
  [182] = 7,
    ACTIONS(65), 1,
      anon_sym_LT_PERCENT_,
    STATE(41), 1,
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
    ACTIONS(75), 4,
      sym_true,
      sym_false,
      sym_number,
      sym_string_value,
  [213] = 5,
    ACTIONS(79), 1,
      aux_sym_content_token1,
    ACTIONS(82), 1,
      anon_sym_LT_PERCENT_PERCENT,
    STATE(8), 1,
      aux_sym_content_repeat1,
    ACTIONS(85), 4,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(77), 6,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
  [237] = 5,
    ACTIONS(89), 1,
      aux_sym_content_token1,
    ACTIONS(91), 1,
      anon_sym_LT_PERCENT_PERCENT,
    STATE(8), 1,
      aux_sym_content_repeat1,
    ACTIONS(93), 4,
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
  [261] = 2,
    ACTIONS(97), 4,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
    ACTIONS(95), 9,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
      aux_sym_frontmatter_token1,
      sym_true,
      sym_false,
      sym_number,
      sym_string_value,
  [279] = 2,
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
      aux_sym_frontmatter_token1,
      sym_true,
      sym_false,
      sym_number,
      sym_string_value,
  [297] = 2,
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
      aux_sym_frontmatter_token1,
      sym_true,
      sym_false,
      sym_number,
      sym_string_value,
  [315] = 2,
    ACTIONS(109), 4,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
    ACTIONS(107), 9,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
      aux_sym_frontmatter_token1,
      sym_true,
      sym_false,
      sym_number,
      sym_string_value,
  [333] = 2,
    ACTIONS(107), 5,
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
  [350] = 2,
    ACTIONS(113), 5,
      aux_sym_content_token1,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(111), 7,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
  [367] = 2,
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
  [384] = 2,
    ACTIONS(95), 5,
      aux_sym_content_token1,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PIPE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ,
    ACTIONS(97), 7,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_PERCENT,
      anon_sym_LT_PERCENT_,
      anon_sym_LT_PERCENT_EQ_EQ,
      anon_sym_LT_PERCENT_PIPE_EQ_EQ,
      anon_sym_LT_PERCENT_DASH,
      anon_sym_LT_PERCENT_POUND,
  [401] = 2,
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
  [418] = 2,
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
  [435] = 2,
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
  [452] = 2,
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
  [469] = 5,
    ACTIONS(127), 1,
      aux_sym_code_token1,
    ACTIONS(129), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(29), 1,
      aux_sym_code_repeat1,
    STATE(36), 1,
      sym_code,
    ACTIONS(131), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym__PERCENT_GT,
  [487] = 5,
    ACTIONS(133), 1,
      aux_sym_code_token1,
    ACTIONS(135), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(26), 1,
      aux_sym_code_repeat1,
    STATE(37), 1,
      sym_code,
    ACTIONS(137), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
  [505] = 5,
    ACTIONS(127), 1,
      aux_sym_code_token1,
    ACTIONS(129), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(29), 1,
      aux_sym_code_repeat1,
    STATE(38), 1,
      sym_code,
    ACTIONS(139), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym__PERCENT_GT,
  [523] = 5,
    ACTIONS(133), 1,
      aux_sym_code_token1,
    ACTIONS(135), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(26), 1,
      aux_sym_code_repeat1,
    STATE(39), 1,
      sym_code,
    ACTIONS(141), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
  [541] = 4,
    ACTIONS(143), 1,
      aux_sym_code_token1,
    ACTIONS(145), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(28), 1,
      aux_sym_code_repeat1,
    ACTIONS(147), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
  [556] = 4,
    ACTIONS(149), 1,
      aux_sym_code_token1,
    ACTIONS(152), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(27), 1,
      aux_sym_code_repeat1,
    ACTIONS(155), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym__PERCENT_GT,
  [571] = 4,
    ACTIONS(157), 1,
      aux_sym_code_token1,
    ACTIONS(160), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(28), 1,
      aux_sym_code_repeat1,
    ACTIONS(155), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
  [586] = 4,
    ACTIONS(163), 1,
      aux_sym_code_token1,
    ACTIONS(165), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(27), 1,
      aux_sym_code_repeat1,
    ACTIONS(147), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym__PERCENT_GT,
  [601] = 5,
    ACTIONS(167), 1,
      aux_sym_code_token1,
    ACTIONS(169), 1,
      anon_sym_PERCENT_PERCENT_GT,
    ACTIONS(171), 1,
      anon_sym_PERCENT_GT,
    STATE(34), 1,
      aux_sym_code_repeat1,
    STATE(47), 1,
      sym_code,
  [617] = 3,
    ACTIONS(173), 1,
      anon_sym_DASH_DASH_DASH2,
    ACTIONS(175), 1,
      sym_key,
    STATE(31), 2,
      sym_metadata,
      aux_sym_frontmatter_repeat1,
  [628] = 4,
    ACTIONS(155), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(178), 1,
      aux_sym_code_token1,
    ACTIONS(181), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(32), 1,
      aux_sym_code_repeat1,
  [641] = 3,
    ACTIONS(184), 1,
      anon_sym_DASH_DASH_DASH2,
    ACTIONS(186), 1,
      sym_key,
    STATE(35), 2,
      sym_metadata,
      aux_sym_frontmatter_repeat1,
  [652] = 4,
    ACTIONS(147), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(188), 1,
      aux_sym_code_token1,
    ACTIONS(190), 1,
      anon_sym_PERCENT_PERCENT_GT,
    STATE(32), 1,
      aux_sym_code_repeat1,
  [665] = 3,
    ACTIONS(186), 1,
      sym_key,
    ACTIONS(192), 1,
      anon_sym_DASH_DASH_DASH2,
    STATE(31), 2,
      sym_metadata,
      aux_sym_frontmatter_repeat1,
  [676] = 1,
    ACTIONS(194), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym__PERCENT_GT,
  [682] = 1,
    ACTIONS(196), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
  [688] = 1,
    ACTIONS(198), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym__PERCENT_GT,
  [694] = 1,
    ACTIONS(200), 3,
      anon_sym_PERCENT_GT,
      anon_sym_DASH_PERCENT_GT,
      anon_sym_EQ_PERCENT_GT,
  [700] = 1,
    ACTIONS(202), 2,
      anon_sym_DASH_DASH_DASH2,
      sym_key,
  [705] = 1,
    ACTIONS(204), 1,
      aux_sym_frontmatter_token1,
  [709] = 1,
    ACTIONS(206), 1,
      aux_sym_frontmatter_token1,
  [713] = 1,
    ACTIONS(208), 1,
      anon_sym_COLON,
  [717] = 1,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
  [721] = 1,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
  [725] = 1,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
  [729] = 1,
    ACTIONS(214), 1,
      anon_sym_PERCENT_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 81,
  [SMALL_STATE(5)] = 120,
  [SMALL_STATE(6)] = 151,
  [SMALL_STATE(7)] = 182,
  [SMALL_STATE(8)] = 213,
  [SMALL_STATE(9)] = 237,
  [SMALL_STATE(10)] = 261,
  [SMALL_STATE(11)] = 279,
  [SMALL_STATE(12)] = 297,
  [SMALL_STATE(13)] = 315,
  [SMALL_STATE(14)] = 333,
  [SMALL_STATE(15)] = 350,
  [SMALL_STATE(16)] = 367,
  [SMALL_STATE(17)] = 384,
  [SMALL_STATE(18)] = 401,
  [SMALL_STATE(19)] = 418,
  [SMALL_STATE(20)] = 435,
  [SMALL_STATE(21)] = 452,
  [SMALL_STATE(22)] = 469,
  [SMALL_STATE(23)] = 487,
  [SMALL_STATE(24)] = 505,
  [SMALL_STATE(25)] = 523,
  [SMALL_STATE(26)] = 541,
  [SMALL_STATE(27)] = 556,
  [SMALL_STATE(28)] = 571,
  [SMALL_STATE(29)] = 586,
  [SMALL_STATE(30)] = 601,
  [SMALL_STATE(31)] = 617,
  [SMALL_STATE(32)] = 628,
  [SMALL_STATE(33)] = 641,
  [SMALL_STATE(34)] = 652,
  [SMALL_STATE(35)] = 665,
  [SMALL_STATE(36)] = 676,
  [SMALL_STATE(37)] = 682,
  [SMALL_STATE(38)] = 688,
  [SMALL_STATE(39)] = 694,
  [SMALL_STATE(40)] = 700,
  [SMALL_STATE(41)] = 705,
  [SMALL_STATE(42)] = 709,
  [SMALL_STATE(43)] = 713,
  [SMALL_STATE(44)] = 717,
  [SMALL_STATE(45)] = 721,
  [SMALL_STATE(46)] = 725,
  [SMALL_STATE(47)] = 729,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2, 0, 0),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_directive, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_directive, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_directive, 3, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_directive, 3, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_directive, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_directive, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frontmatter, 4, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frontmatter, 4, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_directive, 3, 0, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_directive, 3, 0, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frontmatter, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frontmatter, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 1, 0, 0),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_frontmatter_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 4, 0, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 2, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
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
