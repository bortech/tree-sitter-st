#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 133
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 111
#define ALIAS_COUNT 0
#define TOKEN_COUNT 64
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 24

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_FUNCTION_BLOCK = 2,
  anon_sym_END_FUNCTION_BLOCK = 3,
  anon_sym_VAR_INPUT = 4,
  anon_sym_END_VAR = 5,
  anon_sym_VAR_OUTPUT = 6,
  anon_sym_VAR_IN_OUT = 7,
  anon_sym_VAR = 8,
  anon_sym_SEMI = 9,
  anon_sym_COMMA = 10,
  anon_sym_COLON = 11,
  anon_sym_R_EDGE = 12,
  anon_sym_F_EDGE = 13,
  anon_sym_COLON_EQ = 14,
  anon_sym_BOOL = 15,
  anon_sym_BYTE = 16,
  anon_sym_WORD = 17,
  anon_sym_DWORD = 18,
  anon_sym_LWORD = 19,
  anon_sym_REAL = 20,
  anon_sym_LREAL = 21,
  anon_sym_TIME = 22,
  anon_sym_SINT = 23,
  anon_sym_INT = 24,
  anon_sym_DINT = 25,
  anon_sym_LINT = 26,
  anon_sym_USINT = 27,
  anon_sym_UINT = 28,
  anon_sym_UDINT = 29,
  anon_sym_ULINT = 30,
  anon_sym_ARRAY = 31,
  anon_sym_OF = 32,
  anon_sym_LBRACK = 33,
  anon_sym_DOT_DOT = 34,
  anon_sym_RBRACK = 35,
  anon_sym_IF = 36,
  anon_sym_THEN = 37,
  anon_sym_END_IF = 38,
  anon_sym_ELSIF = 39,
  anon_sym_ELSE = 40,
  anon_sym_FOR = 41,
  anon_sym_TO = 42,
  anon_sym_DO = 43,
  anon_sym_END_FOR = 44,
  anon_sym_LPAREN = 45,
  anon_sym_RPAREN = 46,
  anon_sym_DOT = 47,
  anon_sym_PLUS = 48,
  anon_sym_DASH = 49,
  anon_sym_OR = 50,
  anon_sym_STAR = 51,
  anon_sym_SLASH = 52,
  anon_sym_AMP = 53,
  anon_sym_LT = 54,
  anon_sym_GT = 55,
  anon_sym_GT_EQ = 56,
  anon_sym_EQ = 57,
  anon_sym_NOT = 58,
  sym_integer_literal = 59,
  sym_real_literal = 60,
  sym_time_literal = 61,
  sym_comment = 62,
  sym_pragma = 63,
  sym_source_file = 64,
  sym__definition = 65,
  sym_function_block_def = 66,
  aux_sym__var_decl_block = 67,
  sym__var_group_decl = 68,
  sym_var_in_class_decl = 69,
  sym_var_out_class_decl = 70,
  sym_var_class_decl = 71,
  sym__vars_decl = 72,
  sym__var_name = 73,
  sym_var_decl = 74,
  sym_qualifier = 75,
  sym_var_init = 76,
  sym__type = 77,
  sym_builtin_type = 78,
  sym_array_type = 79,
  sym_array_index = 80,
  sym_code_block = 81,
  sym__statement = 82,
  sym_assign_op = 83,
  sym__assign_statement = 84,
  sym_if_statement = 85,
  sym_elsif_branch = 86,
  sym_else_branch = 87,
  sym_for_statement = 88,
  sym__expression = 89,
  sym__par_expr = 90,
  sym_dot_op = 91,
  sym_index_op = 92,
  sym_add_op = 93,
  sym_mul_op = 94,
  sym_comp_op = 95,
  sym_un_op = 96,
  sym_fb_call_statement = 97,
  sym_func_call = 98,
  sym__argument = 99,
  sym__named_argument = 100,
  sym__arg_list = 101,
  sym__named_arg_list = 102,
  sym__literal = 103,
  aux_sym_source_file_repeat1 = 104,
  aux_sym__vars_decl_repeat1 = 105,
  aux_sym_var_decl_repeat1 = 106,
  aux_sym_code_block_repeat1 = 107,
  aux_sym_if_statement_repeat1 = 108,
  aux_sym__arg_list_repeat1 = 109,
  aux_sym__named_arg_list_repeat1 = 110,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_FUNCTION_BLOCK] = "FUNCTION_BLOCK",
  [anon_sym_END_FUNCTION_BLOCK] = "END_FUNCTION_BLOCK",
  [anon_sym_VAR_INPUT] = "VAR_INPUT",
  [anon_sym_END_VAR] = "END_VAR",
  [anon_sym_VAR_OUTPUT] = "VAR_OUTPUT",
  [anon_sym_VAR_IN_OUT] = "VAR_IN_OUT",
  [anon_sym_VAR] = "VAR",
  [anon_sym_SEMI] = ";",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [anon_sym_R_EDGE] = "R_EDGE",
  [anon_sym_F_EDGE] = "F_EDGE",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_BOOL] = "BOOL",
  [anon_sym_BYTE] = "BYTE",
  [anon_sym_WORD] = "WORD",
  [anon_sym_DWORD] = "DWORD",
  [anon_sym_LWORD] = "LWORD",
  [anon_sym_REAL] = "REAL",
  [anon_sym_LREAL] = "LREAL",
  [anon_sym_TIME] = "TIME",
  [anon_sym_SINT] = "SINT",
  [anon_sym_INT] = "INT",
  [anon_sym_DINT] = "DINT",
  [anon_sym_LINT] = "LINT",
  [anon_sym_USINT] = "USINT",
  [anon_sym_UINT] = "UINT",
  [anon_sym_UDINT] = "UDINT",
  [anon_sym_ULINT] = "ULINT",
  [anon_sym_ARRAY] = "ARRAY",
  [anon_sym_OF] = "OF",
  [anon_sym_LBRACK] = "[",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_RBRACK] = "]",
  [anon_sym_IF] = "IF",
  [anon_sym_THEN] = "THEN",
  [anon_sym_END_IF] = "END_IF",
  [anon_sym_ELSIF] = "ELSIF",
  [anon_sym_ELSE] = "ELSE",
  [anon_sym_FOR] = "FOR",
  [anon_sym_TO] = "TO",
  [anon_sym_DO] = "DO",
  [anon_sym_END_FOR] = "END_FOR",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOT] = ".",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_OR] = "OR",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_AMP] = "&",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_EQ] = "=",
  [anon_sym_NOT] = "NOT",
  [sym_integer_literal] = "integer_literal",
  [sym_real_literal] = "real_literal",
  [sym_time_literal] = "time_literal",
  [sym_comment] = "comment",
  [sym_pragma] = "pragma",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_function_block_def] = "function_block_def",
  [aux_sym__var_decl_block] = "_var_decl_block",
  [sym__var_group_decl] = "_var_group_decl",
  [sym_var_in_class_decl] = "var_in_class_decl",
  [sym_var_out_class_decl] = "var_out_class_decl",
  [sym_var_class_decl] = "var_class_decl",
  [sym__vars_decl] = "_vars_decl",
  [sym__var_name] = "_var_name",
  [sym_var_decl] = "var_decl",
  [sym_qualifier] = "qualifier",
  [sym_var_init] = "var_init",
  [sym__type] = "_type",
  [sym_builtin_type] = "builtin_type",
  [sym_array_type] = "array_type",
  [sym_array_index] = "array_index",
  [sym_code_block] = "code_block",
  [sym__statement] = "_statement",
  [sym_assign_op] = "assign_op",
  [sym__assign_statement] = "_assign_statement",
  [sym_if_statement] = "if_statement",
  [sym_elsif_branch] = "elsif_branch",
  [sym_else_branch] = "else_branch",
  [sym_for_statement] = "for_statement",
  [sym__expression] = "_expression",
  [sym__par_expr] = "_par_expr",
  [sym_dot_op] = "dot_op",
  [sym_index_op] = "index_op",
  [sym_add_op] = "add_op",
  [sym_mul_op] = "mul_op",
  [sym_comp_op] = "comp_op",
  [sym_un_op] = "un_op",
  [sym_fb_call_statement] = "fb_call_statement",
  [sym_func_call] = "func_call",
  [sym__argument] = "_argument",
  [sym__named_argument] = "_named_argument",
  [sym__arg_list] = "_arg_list",
  [sym__named_arg_list] = "_named_arg_list",
  [sym__literal] = "_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__vars_decl_repeat1] = "_vars_decl_repeat1",
  [aux_sym_var_decl_repeat1] = "var_decl_repeat1",
  [aux_sym_code_block_repeat1] = "code_block_repeat1",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
  [aux_sym__arg_list_repeat1] = "_arg_list_repeat1",
  [aux_sym__named_arg_list_repeat1] = "_named_arg_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_FUNCTION_BLOCK] = anon_sym_FUNCTION_BLOCK,
  [anon_sym_END_FUNCTION_BLOCK] = anon_sym_END_FUNCTION_BLOCK,
  [anon_sym_VAR_INPUT] = anon_sym_VAR_INPUT,
  [anon_sym_END_VAR] = anon_sym_END_VAR,
  [anon_sym_VAR_OUTPUT] = anon_sym_VAR_OUTPUT,
  [anon_sym_VAR_IN_OUT] = anon_sym_VAR_IN_OUT,
  [anon_sym_VAR] = anon_sym_VAR,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_R_EDGE] = anon_sym_R_EDGE,
  [anon_sym_F_EDGE] = anon_sym_F_EDGE,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_BOOL] = anon_sym_BOOL,
  [anon_sym_BYTE] = anon_sym_BYTE,
  [anon_sym_WORD] = anon_sym_WORD,
  [anon_sym_DWORD] = anon_sym_DWORD,
  [anon_sym_LWORD] = anon_sym_LWORD,
  [anon_sym_REAL] = anon_sym_REAL,
  [anon_sym_LREAL] = anon_sym_LREAL,
  [anon_sym_TIME] = anon_sym_TIME,
  [anon_sym_SINT] = anon_sym_SINT,
  [anon_sym_INT] = anon_sym_INT,
  [anon_sym_DINT] = anon_sym_DINT,
  [anon_sym_LINT] = anon_sym_LINT,
  [anon_sym_USINT] = anon_sym_USINT,
  [anon_sym_UINT] = anon_sym_UINT,
  [anon_sym_UDINT] = anon_sym_UDINT,
  [anon_sym_ULINT] = anon_sym_ULINT,
  [anon_sym_ARRAY] = anon_sym_ARRAY,
  [anon_sym_OF] = anon_sym_OF,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_IF] = anon_sym_IF,
  [anon_sym_THEN] = anon_sym_THEN,
  [anon_sym_END_IF] = anon_sym_END_IF,
  [anon_sym_ELSIF] = anon_sym_ELSIF,
  [anon_sym_ELSE] = anon_sym_ELSE,
  [anon_sym_FOR] = anon_sym_FOR,
  [anon_sym_TO] = anon_sym_TO,
  [anon_sym_DO] = anon_sym_DO,
  [anon_sym_END_FOR] = anon_sym_END_FOR,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_OR] = anon_sym_OR,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_NOT] = anon_sym_NOT,
  [sym_integer_literal] = sym_integer_literal,
  [sym_real_literal] = sym_real_literal,
  [sym_time_literal] = sym_time_literal,
  [sym_comment] = sym_comment,
  [sym_pragma] = sym_pragma,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_function_block_def] = sym_function_block_def,
  [aux_sym__var_decl_block] = aux_sym__var_decl_block,
  [sym__var_group_decl] = sym__var_group_decl,
  [sym_var_in_class_decl] = sym_var_in_class_decl,
  [sym_var_out_class_decl] = sym_var_out_class_decl,
  [sym_var_class_decl] = sym_var_class_decl,
  [sym__vars_decl] = sym__vars_decl,
  [sym__var_name] = sym__var_name,
  [sym_var_decl] = sym_var_decl,
  [sym_qualifier] = sym_qualifier,
  [sym_var_init] = sym_var_init,
  [sym__type] = sym__type,
  [sym_builtin_type] = sym_builtin_type,
  [sym_array_type] = sym_array_type,
  [sym_array_index] = sym_array_index,
  [sym_code_block] = sym_code_block,
  [sym__statement] = sym__statement,
  [sym_assign_op] = sym_assign_op,
  [sym__assign_statement] = sym__assign_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_elsif_branch] = sym_elsif_branch,
  [sym_else_branch] = sym_else_branch,
  [sym_for_statement] = sym_for_statement,
  [sym__expression] = sym__expression,
  [sym__par_expr] = sym__par_expr,
  [sym_dot_op] = sym_dot_op,
  [sym_index_op] = sym_index_op,
  [sym_add_op] = sym_add_op,
  [sym_mul_op] = sym_mul_op,
  [sym_comp_op] = sym_comp_op,
  [sym_un_op] = sym_un_op,
  [sym_fb_call_statement] = sym_fb_call_statement,
  [sym_func_call] = sym_func_call,
  [sym__argument] = sym__argument,
  [sym__named_argument] = sym__named_argument,
  [sym__arg_list] = sym__arg_list,
  [sym__named_arg_list] = sym__named_arg_list,
  [sym__literal] = sym__literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__vars_decl_repeat1] = aux_sym__vars_decl_repeat1,
  [aux_sym_var_decl_repeat1] = aux_sym_var_decl_repeat1,
  [aux_sym_code_block_repeat1] = aux_sym_code_block_repeat1,
  [aux_sym_if_statement_repeat1] = aux_sym_if_statement_repeat1,
  [aux_sym__arg_list_repeat1] = aux_sym__arg_list_repeat1,
  [aux_sym__named_arg_list_repeat1] = aux_sym__named_arg_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_FUNCTION_BLOCK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END_FUNCTION_BLOCK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VAR_INPUT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END_VAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VAR_OUTPUT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VAR_IN_OUT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_R_EDGE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_F_EDGE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BOOL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BYTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WORD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DWORD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LWORD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REAL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LREAL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TIME] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SINT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DINT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LINT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_USINT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UINT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UDINT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ULINT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ARRAY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_THEN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END_IF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ELSIF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ELSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END_FOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOT] = {
    .visible = true,
    .named = false,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_real_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_time_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_pragma] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_function_block_def] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__var_decl_block] = {
    .visible = false,
    .named = false,
  },
  [sym__var_group_decl] = {
    .visible = false,
    .named = true,
  },
  [sym_var_in_class_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_var_out_class_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_var_class_decl] = {
    .visible = true,
    .named = true,
  },
  [sym__vars_decl] = {
    .visible = false,
    .named = true,
  },
  [sym__var_name] = {
    .visible = false,
    .named = true,
  },
  [sym_var_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_qualifier] = {
    .visible = true,
    .named = true,
  },
  [sym_var_init] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_builtin_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_index] = {
    .visible = true,
    .named = true,
  },
  [sym_code_block] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_assign_op] = {
    .visible = true,
    .named = true,
  },
  [sym__assign_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_elsif_branch] = {
    .visible = true,
    .named = true,
  },
  [sym_else_branch] = {
    .visible = true,
    .named = true,
  },
  [sym_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__par_expr] = {
    .visible = false,
    .named = true,
  },
  [sym_dot_op] = {
    .visible = true,
    .named = true,
  },
  [sym_index_op] = {
    .visible = true,
    .named = true,
  },
  [sym_add_op] = {
    .visible = true,
    .named = true,
  },
  [sym_mul_op] = {
    .visible = true,
    .named = true,
  },
  [sym_comp_op] = {
    .visible = true,
    .named = true,
  },
  [sym_un_op] = {
    .visible = true,
    .named = true,
  },
  [sym_fb_call_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_func_call] = {
    .visible = true,
    .named = true,
  },
  [sym__argument] = {
    .visible = false,
    .named = true,
  },
  [sym__named_argument] = {
    .visible = false,
    .named = true,
  },
  [sym__arg_list] = {
    .visible = false,
    .named = true,
  },
  [sym__named_arg_list] = {
    .visible = false,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__vars_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_var_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__arg_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__named_arg_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_arg = 1,
  field_condition = 2,
  field_for_init = 3,
  field_for_range = 4,
  field_from = 5,
  field_index = 6,
  field_lhs = 7,
  field_lvalue = 8,
  field_member = 9,
  field_name = 10,
  field_named_arg = 11,
  field_parent = 12,
  field_rhs = 13,
  field_rvalue = 14,
  field_to = 15,
  field_type = 16,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arg] = "arg",
  [field_condition] = "condition",
  [field_for_init] = "for_init",
  [field_for_range] = "for_range",
  [field_from] = "from",
  [field_index] = "index",
  [field_lhs] = "lhs",
  [field_lvalue] = "lvalue",
  [field_member] = "member",
  [field_name] = "name",
  [field_named_arg] = "named_arg",
  [field_parent] = "parent",
  [field_rhs] = "rhs",
  [field_rvalue] = "rvalue",
  [field_to] = "to",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 1},
  [8] = {.index = 9, .length = 1},
  [9] = {.index = 10, .length = 1},
  [10] = {.index = 11, .length = 2},
  [11] = {.index = 13, .length = 2},
  [12] = {.index = 15, .length = 2},
  [13] = {.index = 17, .length = 3},
  [14] = {.index = 20, .length = 2},
  [15] = {.index = 22, .length = 2},
  [16] = {.index = 24, .length = 2},
  [17] = {.index = 26, .length = 2},
  [18] = {.index = 28, .length = 2},
  [19] = {.index = 30, .length = 1},
  [20] = {.index = 31, .length = 1},
  [21] = {.index = 32, .length = 1},
  [22] = {.index = 33, .length = 2},
  [23] = {.index = 35, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 1},
  [2] =
    {field_name, 1, .inherited = true},
  [3] =
    {field_name, 0, .inherited = true},
    {field_type, 2},
  [5] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [7] =
    {field_named_arg, 0},
  [8] =
    {field_arg, 0},
  [9] =
    {field_arg, 0, .inherited = true},
  [10] =
    {field_named_arg, 0, .inherited = true},
  [11] =
    {field_member, 2},
    {field_parent, 0},
  [13] =
    {field_lvalue, 0},
    {field_rvalue, 2},
  [15] =
    {field_lhs, 0},
    {field_rhs, 2},
  [17] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_type, 3},
  [20] =
    {field_index, 2},
    {field_parent, 0},
  [22] =
    {field_arg, 0, .inherited = true},
    {field_arg, 1, .inherited = true},
  [24] =
    {field_named_arg, 0, .inherited = true},
    {field_named_arg, 1, .inherited = true},
  [26] =
    {field_arg, 2, .inherited = true},
    {field_name, 0},
  [28] =
    {field_name, 0},
    {field_named_arg, 2, .inherited = true},
  [30] =
    {field_arg, 1, .inherited = true},
  [31] =
    {field_named_arg, 1, .inherited = true},
  [32] =
    {field_condition, 1},
  [33] =
    {field_from, 1},
    {field_to, 3},
  [35] =
    {field_for_init, 1},
    {field_for_range, 3},
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
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      ADVANCE_MAP(
        '&', 33,
        '(', 25,
        ')', 26,
        '*', 31,
        '+', 29,
        ',', 18,
        '-', 30,
        '.', 28,
        '/', 32,
        ':', 20,
        ';', 17,
        '<', 34,
        '=', 37,
        '>', 35,
        '[', 22,
        ']', 24,
        '{', 11,
        'T', 38,
        't', 38,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '&', 33,
        '(', 25,
        ')', 26,
        '*', 31,
        '+', 29,
        ',', 18,
        '-', 30,
        '.', 27,
        '/', 32,
        ':', 9,
        ';', 17,
        '<', 34,
        '=', 37,
        '>', 35,
        '[', 22,
        ']', 24,
        '{', 11,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '(', 25,
        ')', 26,
        '.', 7,
        ':', 9,
        ';', 17,
        '{', 11,
        '+', 8,
        '-', 8,
        'T', 38,
        't', 38,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(5);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == '{') ADVANCE(11);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(45);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(21);
      END_STATE();
    case 10:
      if (lookahead == 's') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '}') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '}') ADVANCE(46);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '*') ADVANCE(6);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(23);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_real_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_time_literal);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_pragma);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ADVANCE_MAP(
        'A', 1,
        'B', 2,
        'D', 3,
        'E', 4,
        'F', 5,
        'I', 6,
        'L', 7,
        'N', 8,
        'O', 9,
        'R', 10,
        'S', 11,
        'T', 12,
        'U', 13,
        'V', 14,
        'W', 15,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'R') ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == 'O') ADVANCE(17);
      if (lookahead == 'Y') ADVANCE(18);
      END_STATE();
    case 3:
      if (lookahead == 'I') ADVANCE(19);
      if (lookahead == 'O') ADVANCE(20);
      if (lookahead == 'W') ADVANCE(21);
      END_STATE();
    case 4:
      if (lookahead == 'L') ADVANCE(22);
      if (lookahead == 'N') ADVANCE(23);
      END_STATE();
    case 5:
      if (lookahead == 'O') ADVANCE(24);
      if (lookahead == 'U') ADVANCE(25);
      if (lookahead == '_') ADVANCE(26);
      END_STATE();
    case 6:
      if (lookahead == 'F') ADVANCE(27);
      if (lookahead == 'N') ADVANCE(28);
      END_STATE();
    case 7:
      if (lookahead == 'I') ADVANCE(29);
      if (lookahead == 'R') ADVANCE(30);
      if (lookahead == 'W') ADVANCE(31);
      END_STATE();
    case 8:
      if (lookahead == 'O') ADVANCE(32);
      END_STATE();
    case 9:
      if (lookahead == 'F') ADVANCE(33);
      if (lookahead == 'R') ADVANCE(34);
      END_STATE();
    case 10:
      if (lookahead == 'E') ADVANCE(35);
      if (lookahead == '_') ADVANCE(36);
      END_STATE();
    case 11:
      if (lookahead == 'I') ADVANCE(37);
      END_STATE();
    case 12:
      if (lookahead == 'H') ADVANCE(38);
      if (lookahead == 'I') ADVANCE(39);
      if (lookahead == 'O') ADVANCE(40);
      END_STATE();
    case 13:
      if (lookahead == 'D') ADVANCE(41);
      if (lookahead == 'I') ADVANCE(42);
      if (lookahead == 'L') ADVANCE(43);
      if (lookahead == 'S') ADVANCE(44);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(45);
      END_STATE();
    case 15:
      if (lookahead == 'O') ADVANCE(46);
      END_STATE();
    case 16:
      if (lookahead == 'R') ADVANCE(47);
      END_STATE();
    case 17:
      if (lookahead == 'O') ADVANCE(48);
      END_STATE();
    case 18:
      if (lookahead == 'T') ADVANCE(49);
      END_STATE();
    case 19:
      if (lookahead == 'N') ADVANCE(50);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DO);
      END_STATE();
    case 21:
      if (lookahead == 'O') ADVANCE(51);
      END_STATE();
    case 22:
      if (lookahead == 'S') ADVANCE(52);
      END_STATE();
    case 23:
      if (lookahead == 'D') ADVANCE(53);
      END_STATE();
    case 24:
      if (lookahead == 'R') ADVANCE(54);
      END_STATE();
    case 25:
      if (lookahead == 'N') ADVANCE(55);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(56);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 28:
      if (lookahead == 'T') ADVANCE(57);
      END_STATE();
    case 29:
      if (lookahead == 'N') ADVANCE(58);
      END_STATE();
    case 30:
      if (lookahead == 'E') ADVANCE(59);
      END_STATE();
    case 31:
      if (lookahead == 'O') ADVANCE(60);
      END_STATE();
    case 32:
      if (lookahead == 'T') ADVANCE(61);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_OF);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 35:
      if (lookahead == 'A') ADVANCE(62);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(63);
      END_STATE();
    case 37:
      if (lookahead == 'N') ADVANCE(64);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(65);
      END_STATE();
    case 39:
      if (lookahead == 'M') ADVANCE(66);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_TO);
      END_STATE();
    case 41:
      if (lookahead == 'I') ADVANCE(67);
      END_STATE();
    case 42:
      if (lookahead == 'N') ADVANCE(68);
      END_STATE();
    case 43:
      if (lookahead == 'I') ADVANCE(69);
      END_STATE();
    case 44:
      if (lookahead == 'I') ADVANCE(70);
      END_STATE();
    case 45:
      if (lookahead == 'R') ADVANCE(71);
      END_STATE();
    case 46:
      if (lookahead == 'R') ADVANCE(72);
      END_STATE();
    case 47:
      if (lookahead == 'A') ADVANCE(73);
      END_STATE();
    case 48:
      if (lookahead == 'L') ADVANCE(74);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(75);
      END_STATE();
    case 50:
      if (lookahead == 'T') ADVANCE(76);
      END_STATE();
    case 51:
      if (lookahead == 'R') ADVANCE(77);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(78);
      if (lookahead == 'I') ADVANCE(79);
      END_STATE();
    case 53:
      if (lookahead == '_') ADVANCE(80);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_FOR);
      END_STATE();
    case 55:
      if (lookahead == 'C') ADVANCE(81);
      END_STATE();
    case 56:
      if (lookahead == 'D') ADVANCE(82);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_INT);
      END_STATE();
    case 58:
      if (lookahead == 'T') ADVANCE(83);
      END_STATE();
    case 59:
      if (lookahead == 'A') ADVANCE(84);
      END_STATE();
    case 60:
      if (lookahead == 'R') ADVANCE(85);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_NOT);
      END_STATE();
    case 62:
      if (lookahead == 'L') ADVANCE(86);
      END_STATE();
    case 63:
      if (lookahead == 'D') ADVANCE(87);
      END_STATE();
    case 64:
      if (lookahead == 'T') ADVANCE(88);
      END_STATE();
    case 65:
      if (lookahead == 'N') ADVANCE(89);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(90);
      END_STATE();
    case 67:
      if (lookahead == 'N') ADVANCE(91);
      END_STATE();
    case 68:
      if (lookahead == 'T') ADVANCE(92);
      END_STATE();
    case 69:
      if (lookahead == 'N') ADVANCE(93);
      END_STATE();
    case 70:
      if (lookahead == 'N') ADVANCE(94);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_VAR);
      if (lookahead == '_') ADVANCE(95);
      END_STATE();
    case 72:
      if (lookahead == 'D') ADVANCE(96);
      END_STATE();
    case 73:
      if (lookahead == 'Y') ADVANCE(97);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_BOOL);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_BYTE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_DINT);
      END_STATE();
    case 77:
      if (lookahead == 'D') ADVANCE(98);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_ELSE);
      END_STATE();
    case 79:
      if (lookahead == 'F') ADVANCE(99);
      END_STATE();
    case 80:
      if (lookahead == 'F') ADVANCE(100);
      if (lookahead == 'I') ADVANCE(101);
      if (lookahead == 'V') ADVANCE(102);
      END_STATE();
    case 81:
      if (lookahead == 'T') ADVANCE(103);
      END_STATE();
    case 82:
      if (lookahead == 'G') ADVANCE(104);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LINT);
      END_STATE();
    case 84:
      if (lookahead == 'L') ADVANCE(105);
      END_STATE();
    case 85:
      if (lookahead == 'D') ADVANCE(106);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_REAL);
      END_STATE();
    case 87:
      if (lookahead == 'G') ADVANCE(107);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_SINT);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_THEN);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_TIME);
      END_STATE();
    case 91:
      if (lookahead == 'T') ADVANCE(108);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_UINT);
      END_STATE();
    case 93:
      if (lookahead == 'T') ADVANCE(109);
      END_STATE();
    case 94:
      if (lookahead == 'T') ADVANCE(110);
      END_STATE();
    case 95:
      if (lookahead == 'I') ADVANCE(111);
      if (lookahead == 'O') ADVANCE(112);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_WORD);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_ARRAY);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_DWORD);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_ELSIF);
      END_STATE();
    case 100:
      if (lookahead == 'O') ADVANCE(113);
      if (lookahead == 'U') ADVANCE(114);
      END_STATE();
    case 101:
      if (lookahead == 'F') ADVANCE(115);
      END_STATE();
    case 102:
      if (lookahead == 'A') ADVANCE(116);
      END_STATE();
    case 103:
      if (lookahead == 'I') ADVANCE(117);
      END_STATE();
    case 104:
      if (lookahead == 'E') ADVANCE(118);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LREAL);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LWORD);
      END_STATE();
    case 107:
      if (lookahead == 'E') ADVANCE(119);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_UDINT);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_ULINT);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_USINT);
      END_STATE();
    case 111:
      if (lookahead == 'N') ADVANCE(120);
      END_STATE();
    case 112:
      if (lookahead == 'U') ADVANCE(121);
      END_STATE();
    case 113:
      if (lookahead == 'R') ADVANCE(122);
      END_STATE();
    case 114:
      if (lookahead == 'N') ADVANCE(123);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_END_IF);
      END_STATE();
    case 116:
      if (lookahead == 'R') ADVANCE(124);
      END_STATE();
    case 117:
      if (lookahead == 'O') ADVANCE(125);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_F_EDGE);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_R_EDGE);
      END_STATE();
    case 120:
      if (lookahead == 'P') ADVANCE(126);
      if (lookahead == '_') ADVANCE(127);
      END_STATE();
    case 121:
      if (lookahead == 'T') ADVANCE(128);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_END_FOR);
      END_STATE();
    case 123:
      if (lookahead == 'C') ADVANCE(129);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_END_VAR);
      END_STATE();
    case 125:
      if (lookahead == 'N') ADVANCE(130);
      END_STATE();
    case 126:
      if (lookahead == 'U') ADVANCE(131);
      END_STATE();
    case 127:
      if (lookahead == 'O') ADVANCE(132);
      END_STATE();
    case 128:
      if (lookahead == 'P') ADVANCE(133);
      END_STATE();
    case 129:
      if (lookahead == 'T') ADVANCE(134);
      END_STATE();
    case 130:
      if (lookahead == '_') ADVANCE(135);
      END_STATE();
    case 131:
      if (lookahead == 'T') ADVANCE(136);
      END_STATE();
    case 132:
      if (lookahead == 'U') ADVANCE(137);
      END_STATE();
    case 133:
      if (lookahead == 'U') ADVANCE(138);
      END_STATE();
    case 134:
      if (lookahead == 'I') ADVANCE(139);
      END_STATE();
    case 135:
      if (lookahead == 'B') ADVANCE(140);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_VAR_INPUT);
      END_STATE();
    case 137:
      if (lookahead == 'T') ADVANCE(141);
      END_STATE();
    case 138:
      if (lookahead == 'T') ADVANCE(142);
      END_STATE();
    case 139:
      if (lookahead == 'O') ADVANCE(143);
      END_STATE();
    case 140:
      if (lookahead == 'L') ADVANCE(144);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_VAR_IN_OUT);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_VAR_OUTPUT);
      END_STATE();
    case 143:
      if (lookahead == 'N') ADVANCE(145);
      END_STATE();
    case 144:
      if (lookahead == 'O') ADVANCE(146);
      END_STATE();
    case 145:
      if (lookahead == '_') ADVANCE(147);
      END_STATE();
    case 146:
      if (lookahead == 'C') ADVANCE(148);
      END_STATE();
    case 147:
      if (lookahead == 'B') ADVANCE(149);
      END_STATE();
    case 148:
      if (lookahead == 'K') ADVANCE(150);
      END_STATE();
    case 149:
      if (lookahead == 'L') ADVANCE(151);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_FUNCTION_BLOCK);
      END_STATE();
    case 151:
      if (lookahead == 'O') ADVANCE(152);
      END_STATE();
    case 152:
      if (lookahead == 'C') ADVANCE(153);
      END_STATE();
    case 153:
      if (lookahead == 'K') ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_END_FUNCTION_BLOCK);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_FUNCTION_BLOCK] = ACTIONS(1),
    [anon_sym_END_FUNCTION_BLOCK] = ACTIONS(1),
    [anon_sym_VAR_INPUT] = ACTIONS(1),
    [anon_sym_END_VAR] = ACTIONS(1),
    [anon_sym_VAR_OUTPUT] = ACTIONS(1),
    [anon_sym_VAR_IN_OUT] = ACTIONS(1),
    [anon_sym_VAR] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_R_EDGE] = ACTIONS(1),
    [anon_sym_F_EDGE] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_BOOL] = ACTIONS(1),
    [anon_sym_BYTE] = ACTIONS(1),
    [anon_sym_WORD] = ACTIONS(1),
    [anon_sym_DWORD] = ACTIONS(1),
    [anon_sym_LWORD] = ACTIONS(1),
    [anon_sym_REAL] = ACTIONS(1),
    [anon_sym_LREAL] = ACTIONS(1),
    [anon_sym_TIME] = ACTIONS(1),
    [anon_sym_SINT] = ACTIONS(1),
    [anon_sym_INT] = ACTIONS(1),
    [anon_sym_DINT] = ACTIONS(1),
    [anon_sym_LINT] = ACTIONS(1),
    [anon_sym_USINT] = ACTIONS(1),
    [anon_sym_UINT] = ACTIONS(1),
    [anon_sym_UDINT] = ACTIONS(1),
    [anon_sym_ULINT] = ACTIONS(1),
    [anon_sym_ARRAY] = ACTIONS(1),
    [anon_sym_OF] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_IF] = ACTIONS(1),
    [anon_sym_THEN] = ACTIONS(1),
    [anon_sym_END_IF] = ACTIONS(1),
    [anon_sym_ELSIF] = ACTIONS(1),
    [anon_sym_ELSE] = ACTIONS(1),
    [anon_sym_FOR] = ACTIONS(1),
    [anon_sym_TO] = ACTIONS(1),
    [anon_sym_DO] = ACTIONS(1),
    [anon_sym_END_FOR] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_OR] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_NOT] = ACTIONS(1),
    [sym_time_literal] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(132),
    [sym__definition] = STATE(68),
    [sym_function_block_def] = STATE(68),
    [aux_sym_source_file_repeat1] = STATE(68),
    [anon_sym_FUNCTION_BLOCK] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_pragma] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_VAR_INPUT,
    ACTIONS(11), 1,
      anon_sym_VAR_OUTPUT,
    ACTIONS(13), 1,
      anon_sym_VAR,
    ACTIONS(15), 1,
      anon_sym_IF,
    ACTIONS(17), 1,
      anon_sym_FOR,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_NOT,
    ACTIONS(23), 1,
      sym_integer_literal,
    STATE(113), 1,
      sym_assign_op,
    STATE(115), 1,
      sym_code_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(25), 2,
      sym_real_literal,
      sym_time_literal,
    STATE(28), 5,
      aux_sym__var_decl_block,
      sym__var_group_decl,
      sym_var_in_class_decl,
      sym_var_out_class_decl,
      sym_var_class_decl,
    STATE(3), 6,
      sym__statement,
      sym__assign_statement,
      sym_if_statement,
      sym_for_statement,
      sym_fb_call_statement,
      aux_sym_code_block_repeat1,
    STATE(52), 10,
      sym__expression,
      sym__par_expr,
      sym_dot_op,
      sym_index_op,
      sym_add_op,
      sym_mul_op,
      sym_comp_op,
      sym_un_op,
      sym_func_call,
      sym__literal,
  [69] = 12,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_IF,
    ACTIONS(17), 1,
      anon_sym_FOR,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_NOT,
    ACTIONS(23), 1,
      sym_integer_literal,
    STATE(113), 1,
      sym_assign_op,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(25), 2,
      sym_real_literal,
      sym_time_literal,
    ACTIONS(27), 5,
      anon_sym_END_FUNCTION_BLOCK,
      anon_sym_END_IF,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      anon_sym_END_FOR,
    STATE(4), 6,
      sym__statement,
      sym__assign_statement,
      sym_if_statement,
      sym_for_statement,
      sym_fb_call_statement,
      aux_sym_code_block_repeat1,
    STATE(52), 10,
      sym__expression,
      sym__par_expr,
      sym_dot_op,
      sym_index_op,
      sym_add_op,
      sym_mul_op,
      sym_comp_op,
      sym_un_op,
      sym_func_call,
      sym__literal,
  [126] = 12,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(34), 1,
      anon_sym_IF,
    ACTIONS(37), 1,
      anon_sym_FOR,
    ACTIONS(40), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_NOT,
    ACTIONS(46), 1,
      sym_integer_literal,
    STATE(113), 1,
      sym_assign_op,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(49), 2,
      sym_real_literal,
      sym_time_literal,
    ACTIONS(32), 5,
      anon_sym_END_FUNCTION_BLOCK,
      anon_sym_END_IF,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      anon_sym_END_FOR,
    STATE(4), 6,
      sym__statement,
      sym__assign_statement,
      sym_if_statement,
      sym_for_statement,
      sym_fb_call_statement,
      aux_sym_code_block_repeat1,
    STATE(52), 10,
      sym__expression,
      sym__par_expr,
      sym_dot_op,
      sym_index_op,
      sym_add_op,
      sym_mul_op,
      sym_comp_op,
      sym_un_op,
      sym_func_call,
      sym__literal,
  [183] = 12,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_IF,
    ACTIONS(17), 1,
      anon_sym_FOR,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_NOT,
    ACTIONS(23), 1,
      sym_integer_literal,
    STATE(84), 1,
      sym_code_block,
    STATE(113), 1,
      sym_assign_op,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(25), 2,
      sym_real_literal,
      sym_time_literal,
    STATE(3), 6,
      sym__statement,
      sym__assign_statement,
      sym_if_statement,
      sym_for_statement,
      sym_fb_call_statement,
      aux_sym_code_block_repeat1,
    STATE(52), 10,
      sym__expression,
      sym__par_expr,
      sym_dot_op,
      sym_index_op,
      sym_add_op,
      sym_mul_op,
      sym_comp_op,
      sym_un_op,
      sym_func_call,
      sym__literal,
  [236] = 12,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_IF,
    ACTIONS(17), 1,
      anon_sym_FOR,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_NOT,
    ACTIONS(23), 1,
      sym_integer_literal,
    STATE(63), 1,
      sym_code_block,
    STATE(113), 1,
      sym_assign_op,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(25), 2,
      sym_real_literal,
      sym_time_literal,
    STATE(3), 6,
      sym__statement,
      sym__assign_statement,
      sym_if_statement,
      sym_for_statement,
      sym_fb_call_statement,
      aux_sym_code_block_repeat1,
    STATE(52), 10,
      sym__expression,
      sym__par_expr,
      sym_dot_op,
      sym_index_op,
      sym_add_op,
      sym_mul_op,
      sym_comp_op,
      sym_un_op,
      sym_func_call,
      sym__literal,
  [289] = 12,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_IF,
    ACTIONS(17), 1,
      anon_sym_FOR,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_NOT,
    ACTIONS(23), 1,
      sym_integer_literal,
    STATE(113), 1,
      sym_assign_op,
    STATE(119), 1,
      sym_code_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(25), 2,
      sym_real_literal,
      sym_time_literal,
    STATE(3), 6,
      sym__statement,
      sym__assign_statement,
      sym_if_statement,
      sym_for_statement,
      sym_fb_call_statement,
      aux_sym_code_block_repeat1,
    STATE(52), 10,
      sym__expression,
      sym__par_expr,
      sym_dot_op,
      sym_index_op,
      sym_add_op,
      sym_mul_op,
      sym_comp_op,
      sym_un_op,
      sym_func_call,
      sym__literal,
  [342] = 12,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_IF,
    ACTIONS(17), 1,
      anon_sym_FOR,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_NOT,
    ACTIONS(23), 1,
      sym_integer_literal,
    STATE(113), 1,
      sym_assign_op,
    STATE(123), 1,
      sym_code_block,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(25), 2,
      sym_real_literal,
      sym_time_literal,
    STATE(3), 6,
      sym__statement,
      sym__assign_statement,
      sym_if_statement,
      sym_for_statement,
      sym_fb_call_statement,
      aux_sym_code_block_repeat1,
    STATE(52), 10,
      sym__expression,
      sym__par_expr,
      sym_dot_op,
      sym_index_op,
      sym_add_op,
      sym_mul_op,
      sym_comp_op,
      sym_un_op,
      sym_func_call,
      sym__literal,
  [395] = 13,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_NOT,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(54), 1,
      anon_sym_RPAREN,
    ACTIONS(56), 1,
      sym_integer_literal,
    STATE(78), 1,
      sym__argument,
    STATE(81), 1,
      sym__named_argument,
    STATE(92), 1,
      sym_assign_op,
    STATE(107), 1,
      sym__arg_list,
    STATE(109), 1,
      sym__named_arg_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(58), 2,
      sym_real_literal,
      sym_time_literal,
    STATE(46), 10,
      sym__expression,
      sym__par_expr,
      sym_dot_op,
      sym_index_op,
      sym_add_op,
      sym_mul_op,
      sym_comp_op,
      sym_un_op,
      sym_func_call,
      sym__literal,
  [446] = 12,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_NOT,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(56), 1,
      sym_integer_literal,
    STATE(78), 1,
      sym__argument,
    STATE(81), 1,
      sym__named_argument,
    STATE(92), 1,
      sym_assign_op,
    STATE(107), 1,
      sym__arg_list,
    STATE(131), 1,
      sym__named_arg_list,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(58), 2,
      sym_real_literal,
      sym_time_literal,
    STATE(46), 10,
      sym__expression,
      sym__par_expr,
      sym_dot_op,
      sym_index_op,
      sym_add_op,
      sym_mul_op,
      sym_comp_op,
      sym_un_op,
      sym_func_call,
      sym__literal,
  [494] = 6,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      anon_sym_DOT,
    ACTIONS(68), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(60), 17,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_RBRACK,
      anon_sym_THEN,
      anon_sym_TO,
      anon_sym_DO,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_OR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [530] = 5,
    ACTIONS(70), 1,
      sym_identifier,
    ACTIONS(74), 1,
      anon_sym_ARRAY,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    STATE(61), 3,
      sym__type,
      sym_builtin_type,
      sym_array_type,
    ACTIONS(72), 16,
      anon_sym_BOOL,
      anon_sym_BYTE,
      anon_sym_WORD,
      anon_sym_DWORD,
      anon_sym_LWORD,
      anon_sym_REAL,
      anon_sym_LREAL,
      anon_sym_TIME,
      anon_sym_SINT,
      anon_sym_INT,
      anon_sym_DINT,
      anon_sym_LINT,
      anon_sym_USINT,
      anon_sym_UINT,
      anon_sym_UDINT,
      anon_sym_ULINT,
  [564] = 5,
    ACTIONS(74), 1,
      anon_sym_ARRAY,
    ACTIONS(76), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    STATE(67), 3,
      sym__type,
      sym_builtin_type,
      sym_array_type,
    ACTIONS(72), 16,
      anon_sym_BOOL,
      anon_sym_BYTE,
      anon_sym_WORD,
      anon_sym_DWORD,
      anon_sym_LWORD,
      anon_sym_REAL,
      anon_sym_LREAL,
      anon_sym_TIME,
      anon_sym_SINT,
      anon_sym_INT,
      anon_sym_DINT,
      anon_sym_LINT,
      anon_sym_USINT,
      anon_sym_UINT,
      anon_sym_UDINT,
      anon_sym_ULINT,
  [598] = 5,
    ACTIONS(74), 1,
      anon_sym_ARRAY,
    ACTIONS(78), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    STATE(60), 3,
      sym__type,
      sym_builtin_type,
      sym_array_type,
    ACTIONS(72), 16,
      anon_sym_BOOL,
      anon_sym_BYTE,
      anon_sym_WORD,
      anon_sym_DWORD,
      anon_sym_LWORD,
      anon_sym_REAL,
      anon_sym_LREAL,
      anon_sym_TIME,
      anon_sym_SINT,
      anon_sym_INT,
      anon_sym_DINT,
      anon_sym_LINT,
      anon_sym_USINT,
      anon_sym_UINT,
      anon_sym_UDINT,
      anon_sym_ULINT,
  [632] = 5,
    ACTIONS(86), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(82), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
    ACTIONS(84), 3,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_EQ,
    ACTIONS(80), 11,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_RBRACK,
      anon_sym_THEN,
      anon_sym_TO,
      anon_sym_DO,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_OR,
  [663] = 9,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_NOT,
    ACTIONS(23), 1,
      sym_integer_literal,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(92), 1,
      sym_assign_op,
    STATE(95), 1,
      sym__named_argument,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(25), 2,
      sym_real_literal,
      sym_time_literal,
    STATE(52), 10,
      sym__expression,
      sym__par_expr,
      sym_dot_op,
      sym_index_op,
      sym_add_op,
      sym_mul_op,
      sym_comp_op,
      sym_un_op,
      sym_func_call,
      sym__literal,
  [702] = 3,
    ACTIONS(90), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(88), 17,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_RBRACK,
      anon_sym_THEN,
      anon_sym_TO,
      anon_sym_DO,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_OR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [729] = 3,
    ACTIONS(94), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(92), 17,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_RBRACK,
      anon_sym_THEN,
      anon_sym_TO,
      anon_sym_DO,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_OR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [756] = 3,
    ACTIONS(98), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(96), 17,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_RBRACK,
      anon_sym_THEN,
      anon_sym_TO,
      anon_sym_DO,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_OR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [783] = 3,
    ACTIONS(102), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(100), 17,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_RBRACK,
      anon_sym_THEN,
      anon_sym_TO,
      anon_sym_DO,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_OR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [810] = 3,
    ACTIONS(106), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(104), 17,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_RBRACK,
      anon_sym_THEN,
      anon_sym_TO,
      anon_sym_DO,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_OR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [837] = 3,
    ACTIONS(110), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(108), 17,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_RBRACK,
      anon_sym_THEN,
      anon_sym_TO,
      anon_sym_DO,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_OR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [864] = 3,
    ACTIONS(114), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(112), 17,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_RBRACK,
      anon_sym_THEN,
      anon_sym_TO,
      anon_sym_DO,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_OR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [891] = 4,
    ACTIONS(86), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(84), 3,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_EQ,
    ACTIONS(116), 14,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_RBRACK,
      anon_sym_THEN,
      anon_sym_TO,
      anon_sym_DO,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_OR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
  [920] = 8,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_NOT,
    ACTIONS(23), 1,
      sym_integer_literal,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(106), 1,
      sym_assign_op,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(25), 2,
      sym_real_literal,
      sym_time_literal,
    STATE(52), 10,
      sym__expression,
      sym__par_expr,
      sym_dot_op,
      sym_index_op,
      sym_add_op,
      sym_mul_op,
      sym_comp_op,
      sym_un_op,
      sym_func_call,
      sym__literal,
  [956] = 8,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_NOT,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(118), 1,
      sym_integer_literal,
    STATE(103), 1,
      sym__argument,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(120), 2,
      sym_real_literal,
      sym_time_literal,
    STATE(48), 10,
      sym__expression,
      sym__par_expr,
      sym_dot_op,
      sym_index_op,
      sym_add_op,
      sym_mul_op,
      sym_comp_op,
      sym_un_op,
      sym_func_call,
      sym__literal,
  [992] = 7,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_NOT,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(122), 1,
      sym_integer_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(124), 2,
      sym_real_literal,
      sym_time_literal,
    STATE(57), 10,
      sym__expression,
      sym__par_expr,
      sym_dot_op,
      sym_index_op,
      sym_add_op,
      sym_mul_op,
      sym_comp_op,
      sym_un_op,
      sym_func_call,
      sym__literal,
  [1025] = 7,
    ACTIONS(128), 1,
      anon_sym_VAR_INPUT,
    ACTIONS(131), 1,
      anon_sym_VAR_OUTPUT,
    ACTIONS(134), 1,
      anon_sym_VAR,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(137), 2,
      sym_real_literal,
      sym_time_literal,
    STATE(28), 5,
      aux_sym__var_decl_block,
      sym__var_group_decl,
      sym_var_in_class_decl,
      sym_var_out_class_decl,
      sym_var_class_decl,
    ACTIONS(126), 6,
      anon_sym_IF,
      anon_sym_FOR,
      anon_sym_LPAREN,
      anon_sym_NOT,
      sym_identifier,
      sym_integer_literal,
  [1058] = 7,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_NOT,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(139), 1,
      sym_integer_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(141), 2,
      sym_real_literal,
      sym_time_literal,
    STATE(22), 10,
      sym__expression,
      sym__par_expr,
      sym_dot_op,
      sym_index_op,
      sym_add_op,
      sym_mul_op,
      sym_comp_op,
      sym_un_op,
      sym_func_call,
      sym__literal,
  [1091] = 7,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_NOT,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(143), 1,
      sym_integer_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(145), 2,
      sym_real_literal,
      sym_time_literal,
    STATE(18), 10,
      sym__expression,
      sym__par_expr,
      sym_dot_op,
      sym_index_op,
      sym_add_op,
      sym_mul_op,
      sym_comp_op,
      sym_un_op,
      sym_func_call,
      sym__literal,
  [1124] = 7,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_NOT,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(147), 1,
      sym_integer_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(149), 2,
      sym_real_literal,
      sym_time_literal,
    STATE(24), 10,
      sym__expression,
      sym__par_expr,
      sym_dot_op,
      sym_index_op,
      sym_add_op,
      sym_mul_op,
      sym_comp_op,
      sym_un_op,
      sym_func_call,
      sym__literal,
  [1157] = 7,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_NOT,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(151), 1,
      sym_integer_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(153), 2,
      sym_real_literal,
      sym_time_literal,
    STATE(15), 10,
      sym__expression,
      sym__par_expr,
      sym_dot_op,
      sym_index_op,
      sym_add_op,
      sym_mul_op,
      sym_comp_op,
      sym_un_op,
      sym_func_call,
      sym__literal,
  [1190] = 7,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_NOT,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym_integer_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(157), 2,
      sym_real_literal,
      sym_time_literal,
    STATE(38), 10,
      sym__expression,
      sym__par_expr,
      sym_dot_op,
      sym_index_op,
      sym_add_op,
      sym_mul_op,
      sym_comp_op,
      sym_un_op,
      sym_func_call,
      sym__literal,
  [1223] = 7,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_NOT,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(159), 1,
      sym_integer_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(161), 2,
      sym_real_literal,
      sym_time_literal,
    STATE(53), 10,
      sym__expression,
      sym__par_expr,
      sym_dot_op,
      sym_index_op,
      sym_add_op,
      sym_mul_op,
      sym_comp_op,
      sym_un_op,
      sym_func_call,
      sym__literal,
  [1256] = 7,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_NOT,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(163), 1,
      sym_integer_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(165), 2,
      sym_real_literal,
      sym_time_literal,
    STATE(55), 10,
      sym__expression,
      sym__par_expr,
      sym_dot_op,
      sym_index_op,
      sym_add_op,
      sym_mul_op,
      sym_comp_op,
      sym_un_op,
      sym_func_call,
      sym__literal,
  [1289] = 7,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_NOT,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(167), 1,
      sym_integer_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(169), 2,
      sym_real_literal,
      sym_time_literal,
    STATE(58), 10,
      sym__expression,
      sym__par_expr,
      sym_dot_op,
      sym_index_op,
      sym_add_op,
      sym_mul_op,
      sym_comp_op,
      sym_un_op,
      sym_func_call,
      sym__literal,
  [1322] = 7,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_NOT,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_integer_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(173), 2,
      sym_real_literal,
      sym_time_literal,
    STATE(50), 10,
      sym__expression,
      sym__par_expr,
      sym_dot_op,
      sym_index_op,
      sym_add_op,
      sym_mul_op,
      sym_comp_op,
      sym_un_op,
      sym_func_call,
      sym__literal,
  [1355] = 6,
    ACTIONS(86), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(82), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
    ACTIONS(84), 3,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_EQ,
    ACTIONS(177), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_OR,
    ACTIONS(175), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_TO,
      anon_sym_RPAREN,
  [1384] = 6,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 1,
      anon_sym_DOT,
    ACTIONS(68), 1,
      anon_sym_GT,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(60), 10,
      anon_sym_COLON_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_OR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [1413] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(183), 2,
      sym_real_literal,
      sym_time_literal,
    ACTIONS(181), 11,
      anon_sym_END_FUNCTION_BLOCK,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      anon_sym_FOR,
      anon_sym_END_FOR,
      anon_sym_LPAREN,
      anon_sym_NOT,
      sym_identifier,
      sym_integer_literal,
  [1435] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(187), 2,
      sym_real_literal,
      sym_time_literal,
    ACTIONS(185), 11,
      anon_sym_END_FUNCTION_BLOCK,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      anon_sym_FOR,
      anon_sym_END_FOR,
      anon_sym_LPAREN,
      anon_sym_NOT,
      sym_identifier,
      sym_integer_literal,
  [1457] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(191), 2,
      sym_real_literal,
      sym_time_literal,
    ACTIONS(189), 11,
      anon_sym_END_FUNCTION_BLOCK,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      anon_sym_FOR,
      anon_sym_END_FOR,
      anon_sym_LPAREN,
      anon_sym_NOT,
      sym_identifier,
      sym_integer_literal,
  [1479] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(195), 2,
      sym_real_literal,
      sym_time_literal,
    ACTIONS(193), 11,
      anon_sym_END_FUNCTION_BLOCK,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      anon_sym_FOR,
      anon_sym_END_FOR,
      anon_sym_LPAREN,
      anon_sym_NOT,
      sym_identifier,
      sym_integer_literal,
  [1501] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(199), 2,
      sym_real_literal,
      sym_time_literal,
    ACTIONS(197), 11,
      anon_sym_END_FUNCTION_BLOCK,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      anon_sym_FOR,
      anon_sym_END_FOR,
      anon_sym_LPAREN,
      anon_sym_NOT,
      sym_identifier,
      sym_integer_literal,
  [1523] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(203), 2,
      sym_real_literal,
      sym_time_literal,
    ACTIONS(201), 11,
      anon_sym_END_FUNCTION_BLOCK,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      anon_sym_FOR,
      anon_sym_END_FOR,
      anon_sym_LPAREN,
      anon_sym_NOT,
      sym_identifier,
      sym_integer_literal,
  [1545] = 7,
    ACTIONS(86), 1,
      anon_sym_GT,
    ACTIONS(207), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(205), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(82), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
    ACTIONS(84), 3,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_EQ,
    ACTIONS(177), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_OR,
  [1575] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(211), 2,
      sym_real_literal,
      sym_time_literal,
    ACTIONS(209), 11,
      anon_sym_END_FUNCTION_BLOCK,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      anon_sym_FOR,
      anon_sym_END_FOR,
      anon_sym_LPAREN,
      anon_sym_NOT,
      sym_identifier,
      sym_integer_literal,
  [1597] = 6,
    ACTIONS(86), 1,
      anon_sym_GT,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(205), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(82), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
    ACTIONS(84), 3,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_EQ,
    ACTIONS(177), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_OR,
  [1624] = 4,
    ACTIONS(102), 1,
      anon_sym_GT,
    ACTIONS(213), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(100), 10,
      anon_sym_COLON_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_OR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_EQ,
  [1647] = 6,
    ACTIONS(86), 1,
      anon_sym_GT,
    ACTIONS(215), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(82), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
    ACTIONS(84), 3,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_EQ,
    ACTIONS(177), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_OR,
  [1673] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(219), 2,
      sym_real_literal,
      sym_time_literal,
    ACTIONS(217), 9,
      anon_sym_VAR_INPUT,
      anon_sym_VAR_OUTPUT,
      anon_sym_VAR,
      anon_sym_IF,
      anon_sym_FOR,
      anon_sym_LPAREN,
      anon_sym_NOT,
      sym_identifier,
      sym_integer_literal,
  [1693] = 6,
    ACTIONS(86), 1,
      anon_sym_GT,
    ACTIONS(207), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(82), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
    ACTIONS(84), 3,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_EQ,
    ACTIONS(177), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_OR,
  [1719] = 6,
    ACTIONS(86), 1,
      anon_sym_GT,
    ACTIONS(221), 1,
      anon_sym_DO,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(82), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
    ACTIONS(84), 3,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_EQ,
    ACTIONS(177), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_OR,
  [1745] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(225), 2,
      sym_real_literal,
      sym_time_literal,
    ACTIONS(223), 9,
      anon_sym_VAR_INPUT,
      anon_sym_VAR_OUTPUT,
      anon_sym_VAR,
      anon_sym_IF,
      anon_sym_FOR,
      anon_sym_LPAREN,
      anon_sym_NOT,
      sym_identifier,
      sym_integer_literal,
  [1765] = 6,
    ACTIONS(86), 1,
      anon_sym_GT,
    ACTIONS(227), 1,
      anon_sym_THEN,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(82), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
    ACTIONS(84), 3,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_EQ,
    ACTIONS(177), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_OR,
  [1791] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(231), 2,
      sym_real_literal,
      sym_time_literal,
    ACTIONS(229), 9,
      anon_sym_VAR_INPUT,
      anon_sym_VAR_OUTPUT,
      anon_sym_VAR,
      anon_sym_IF,
      anon_sym_FOR,
      anon_sym_LPAREN,
      anon_sym_NOT,
      sym_identifier,
      sym_integer_literal,
  [1811] = 6,
    ACTIONS(86), 1,
      anon_sym_GT,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(82), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
    ACTIONS(84), 3,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_EQ,
    ACTIONS(177), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_OR,
  [1837] = 6,
    ACTIONS(86), 1,
      anon_sym_GT,
    ACTIONS(235), 1,
      anon_sym_THEN,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(82), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_AMP,
    ACTIONS(84), 3,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_EQ,
    ACTIONS(177), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_OR,
  [1863] = 5,
    ACTIONS(13), 1,
      anon_sym_VAR,
    ACTIONS(237), 1,
      anon_sym_VAR_INPUT,
    ACTIONS(239), 1,
      anon_sym_VAR_OUTPUT,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    STATE(2), 5,
      aux_sym__var_decl_block,
      sym__var_group_decl,
      sym_var_in_class_decl,
      sym_var_out_class_decl,
      sym_var_class_decl,
  [1884] = 6,
    ACTIONS(245), 1,
      anon_sym_COLON_EQ,
    STATE(69), 1,
      sym_var_init,
    STATE(105), 1,
      sym_qualifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(241), 2,
      anon_sym_END_VAR,
      anon_sym_SEMI,
    ACTIONS(243), 2,
      anon_sym_R_EDGE,
      anon_sym_F_EDGE,
  [1906] = 6,
    ACTIONS(245), 1,
      anon_sym_COLON_EQ,
    STATE(70), 1,
      sym_var_init,
    STATE(99), 1,
      sym_qualifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(243), 2,
      anon_sym_R_EDGE,
      anon_sym_F_EDGE,
    ACTIONS(247), 2,
      anon_sym_END_VAR,
      anon_sym_SEMI,
  [1928] = 6,
    ACTIONS(249), 1,
      anon_sym_END_IF,
    ACTIONS(251), 1,
      anon_sym_ELSIF,
    ACTIONS(253), 1,
      anon_sym_ELSE,
    STATE(121), 1,
      sym_else_branch,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    STATE(64), 2,
      sym_elsif_branch,
      aux_sym_if_statement_repeat1,
  [1949] = 6,
    ACTIONS(251), 1,
      anon_sym_ELSIF,
    ACTIONS(253), 1,
      anon_sym_ELSE,
    ACTIONS(255), 1,
      anon_sym_END_IF,
    STATE(108), 1,
      sym_else_branch,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    STATE(62), 2,
      sym_elsif_branch,
      aux_sym_if_statement_repeat1,
  [1970] = 4,
    ACTIONS(259), 1,
      anon_sym_ELSIF,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(257), 2,
      anon_sym_END_IF,
      anon_sym_ELSE,
    STATE(64), 2,
      sym_elsif_branch,
      aux_sym_if_statement_repeat1,
  [1986] = 4,
    ACTIONS(262), 1,
      ts_builtin_sym_end,
    ACTIONS(264), 1,
      anon_sym_FUNCTION_BLOCK,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    STATE(65), 3,
      sym__definition,
      sym_function_block_def,
      aux_sym_source_file_repeat1,
  [2002] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(267), 5,
      anon_sym_END_VAR,
      anon_sym_SEMI,
      anon_sym_R_EDGE,
      anon_sym_F_EDGE,
      anon_sym_COLON_EQ,
  [2014] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(269), 5,
      anon_sym_END_VAR,
      anon_sym_SEMI,
      anon_sym_R_EDGE,
      anon_sym_F_EDGE,
      anon_sym_COLON_EQ,
  [2026] = 4,
    ACTIONS(5), 1,
      anon_sym_FUNCTION_BLOCK,
    ACTIONS(271), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    STATE(65), 3,
      sym__definition,
      sym_function_block_def,
      aux_sym_source_file_repeat1,
  [2042] = 4,
    STATE(98), 1,
      sym_qualifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(243), 2,
      anon_sym_R_EDGE,
      anon_sym_F_EDGE,
    ACTIONS(273), 2,
      anon_sym_END_VAR,
      anon_sym_SEMI,
  [2058] = 4,
    STATE(93), 1,
      sym_qualifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(243), 2,
      anon_sym_R_EDGE,
      anon_sym_F_EDGE,
    ACTIONS(275), 2,
      anon_sym_END_VAR,
      anon_sym_SEMI,
  [2074] = 5,
    ACTIONS(277), 1,
      sym_identifier,
    STATE(85), 1,
      sym__var_name,
    STATE(86), 1,
      sym_var_decl,
    STATE(117), 1,
      sym__vars_decl,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
  [2091] = 5,
    ACTIONS(277), 1,
      sym_identifier,
    STATE(85), 1,
      sym__var_name,
    STATE(86), 1,
      sym_var_decl,
    STATE(118), 1,
      sym__vars_decl,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
  [2108] = 5,
    ACTIONS(279), 1,
      sym_identifier,
    ACTIONS(281), 1,
      anon_sym_END_VAR,
    STATE(85), 1,
      sym__var_name,
    STATE(94), 1,
      sym_var_decl,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
  [2125] = 5,
    ACTIONS(277), 1,
      sym_identifier,
    STATE(85), 1,
      sym__var_name,
    STATE(86), 1,
      sym_var_decl,
    STATE(126), 1,
      sym__vars_decl,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
  [2142] = 5,
    ACTIONS(279), 1,
      sym_identifier,
    ACTIONS(283), 1,
      anon_sym_END_VAR,
    STATE(85), 1,
      sym__var_name,
    STATE(94), 1,
      sym_var_decl,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
  [2159] = 4,
    ACTIONS(285), 1,
      sym_integer_literal,
    STATE(77), 1,
      sym__literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(287), 2,
      sym_real_literal,
      sym_time_literal,
  [2174] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(289), 4,
      anon_sym_END_VAR,
      anon_sym_SEMI,
      anon_sym_R_EDGE,
      anon_sym_F_EDGE,
  [2185] = 4,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      aux_sym__arg_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
  [2199] = 4,
    ACTIONS(295), 1,
      anon_sym_COMMA,
    ACTIONS(298), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      aux_sym__named_arg_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
  [2213] = 4,
    ACTIONS(300), 1,
      anon_sym_COMMA,
    ACTIONS(302), 1,
      anon_sym_COLON,
    STATE(87), 1,
      aux_sym_var_decl_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
  [2227] = 4,
    ACTIONS(304), 1,
      anon_sym_COMMA,
    ACTIONS(306), 1,
      anon_sym_RPAREN,
    STATE(89), 1,
      aux_sym__named_arg_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
  [2241] = 4,
    ACTIONS(308), 1,
      anon_sym_COMMA,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      aux_sym__arg_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
  [2255] = 4,
    ACTIONS(277), 1,
      sym_identifier,
    STATE(85), 1,
      sym__var_name,
    STATE(94), 1,
      sym_var_decl,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
  [2269] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(313), 3,
      anon_sym_END_IF,
      anon_sym_ELSIF,
      anon_sym_ELSE,
  [2279] = 4,
    ACTIONS(300), 1,
      anon_sym_COMMA,
    ACTIONS(315), 1,
      anon_sym_COLON,
    STATE(80), 1,
      aux_sym_var_decl_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
  [2293] = 4,
    ACTIONS(317), 1,
      anon_sym_END_VAR,
    ACTIONS(319), 1,
      anon_sym_SEMI,
    STATE(91), 1,
      aux_sym__vars_decl_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
  [2307] = 4,
    ACTIONS(321), 1,
      anon_sym_COMMA,
    ACTIONS(324), 1,
      anon_sym_COLON,
    STATE(87), 1,
      aux_sym_var_decl_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
  [2321] = 4,
    ACTIONS(326), 1,
      anon_sym_END_VAR,
    ACTIONS(328), 1,
      anon_sym_SEMI,
    STATE(88), 1,
      aux_sym__vars_decl_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
  [2335] = 4,
    ACTIONS(304), 1,
      anon_sym_COMMA,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      aux_sym__named_arg_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
  [2349] = 4,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      aux_sym__arg_list_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
  [2363] = 4,
    ACTIONS(335), 1,
      anon_sym_END_VAR,
    ACTIONS(337), 1,
      anon_sym_SEMI,
    STATE(88), 1,
      aux_sym__vars_decl_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
  [2377] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(339), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2386] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(341), 2,
      anon_sym_END_VAR,
      anon_sym_SEMI,
  [2395] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(326), 2,
      anon_sym_END_VAR,
      anon_sym_SEMI,
  [2404] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(343), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2413] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(345), 2,
      anon_sym_END_VAR,
      anon_sym_SEMI,
  [2422] = 3,
    ACTIONS(347), 1,
      anon_sym_LBRACK,
    STATE(125), 1,
      sym_array_index,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
  [2433] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(349), 2,
      anon_sym_END_VAR,
      anon_sym_SEMI,
  [2442] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(275), 2,
      anon_sym_END_VAR,
      anon_sym_SEMI,
  [2451] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(351), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [2460] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(353), 2,
      ts_builtin_sym_end,
      anon_sym_FUNCTION_BLOCK,
  [2469] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(355), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [2478] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(357), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2487] = 3,
    ACTIONS(277), 1,
      sym_identifier,
    STATE(100), 1,
      sym__var_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
  [2498] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
    ACTIONS(273), 2,
      anon_sym_END_VAR,
      anon_sym_SEMI,
  [2507] = 2,
    ACTIONS(359), 1,
      anon_sym_TO,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
  [2515] = 2,
    ACTIONS(361), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
  [2523] = 2,
    ACTIONS(249), 1,
      anon_sym_END_IF,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
  [2531] = 2,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
  [2539] = 2,
    ACTIONS(365), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
  [2547] = 2,
    ACTIONS(367), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
  [2555] = 2,
    ACTIONS(369), 1,
      anon_sym_DOT_DOT,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
  [2563] = 2,
    ACTIONS(371), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
  [2571] = 2,
    ACTIONS(373), 1,
      sym_integer_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
  [2579] = 2,
    ACTIONS(375), 1,
      anon_sym_END_FUNCTION_BLOCK,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
  [2587] = 2,
    ACTIONS(377), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
  [2595] = 2,
    ACTIONS(379), 1,
      anon_sym_END_VAR,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
  [2603] = 2,
    ACTIONS(381), 1,
      anon_sym_END_VAR,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
  [2611] = 2,
    ACTIONS(383), 1,
      anon_sym_END_IF,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
  [2619] = 2,
    ACTIONS(385), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
  [2627] = 2,
    ACTIONS(387), 1,
      anon_sym_END_IF,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
  [2635] = 2,
    ACTIONS(389), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
  [2643] = 2,
    ACTIONS(391), 1,
      anon_sym_END_FOR,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
  [2651] = 2,
    ACTIONS(393), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
  [2659] = 2,
    ACTIONS(395), 1,
      anon_sym_OF,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
  [2667] = 2,
    ACTIONS(397), 1,
      anon_sym_END_VAR,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
  [2675] = 2,
    ACTIONS(399), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
  [2683] = 2,
    ACTIONS(401), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
  [2691] = 2,
    ACTIONS(403), 1,
      anon_sym_OF,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
  [2699] = 2,
    ACTIONS(405), 1,
      sym_integer_literal,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
  [2707] = 2,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
  [2715] = 2,
    ACTIONS(409), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_pragma,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 69,
  [SMALL_STATE(4)] = 126,
  [SMALL_STATE(5)] = 183,
  [SMALL_STATE(6)] = 236,
  [SMALL_STATE(7)] = 289,
  [SMALL_STATE(8)] = 342,
  [SMALL_STATE(9)] = 395,
  [SMALL_STATE(10)] = 446,
  [SMALL_STATE(11)] = 494,
  [SMALL_STATE(12)] = 530,
  [SMALL_STATE(13)] = 564,
  [SMALL_STATE(14)] = 598,
  [SMALL_STATE(15)] = 632,
  [SMALL_STATE(16)] = 663,
  [SMALL_STATE(17)] = 702,
  [SMALL_STATE(18)] = 729,
  [SMALL_STATE(19)] = 756,
  [SMALL_STATE(20)] = 783,
  [SMALL_STATE(21)] = 810,
  [SMALL_STATE(22)] = 837,
  [SMALL_STATE(23)] = 864,
  [SMALL_STATE(24)] = 891,
  [SMALL_STATE(25)] = 920,
  [SMALL_STATE(26)] = 956,
  [SMALL_STATE(27)] = 992,
  [SMALL_STATE(28)] = 1025,
  [SMALL_STATE(29)] = 1058,
  [SMALL_STATE(30)] = 1091,
  [SMALL_STATE(31)] = 1124,
  [SMALL_STATE(32)] = 1157,
  [SMALL_STATE(33)] = 1190,
  [SMALL_STATE(34)] = 1223,
  [SMALL_STATE(35)] = 1256,
  [SMALL_STATE(36)] = 1289,
  [SMALL_STATE(37)] = 1322,
  [SMALL_STATE(38)] = 1355,
  [SMALL_STATE(39)] = 1384,
  [SMALL_STATE(40)] = 1413,
  [SMALL_STATE(41)] = 1435,
  [SMALL_STATE(42)] = 1457,
  [SMALL_STATE(43)] = 1479,
  [SMALL_STATE(44)] = 1501,
  [SMALL_STATE(45)] = 1523,
  [SMALL_STATE(46)] = 1545,
  [SMALL_STATE(47)] = 1575,
  [SMALL_STATE(48)] = 1597,
  [SMALL_STATE(49)] = 1624,
  [SMALL_STATE(50)] = 1647,
  [SMALL_STATE(51)] = 1673,
  [SMALL_STATE(52)] = 1693,
  [SMALL_STATE(53)] = 1719,
  [SMALL_STATE(54)] = 1745,
  [SMALL_STATE(55)] = 1765,
  [SMALL_STATE(56)] = 1791,
  [SMALL_STATE(57)] = 1811,
  [SMALL_STATE(58)] = 1837,
  [SMALL_STATE(59)] = 1863,
  [SMALL_STATE(60)] = 1884,
  [SMALL_STATE(61)] = 1906,
  [SMALL_STATE(62)] = 1928,
  [SMALL_STATE(63)] = 1949,
  [SMALL_STATE(64)] = 1970,
  [SMALL_STATE(65)] = 1986,
  [SMALL_STATE(66)] = 2002,
  [SMALL_STATE(67)] = 2014,
  [SMALL_STATE(68)] = 2026,
  [SMALL_STATE(69)] = 2042,
  [SMALL_STATE(70)] = 2058,
  [SMALL_STATE(71)] = 2074,
  [SMALL_STATE(72)] = 2091,
  [SMALL_STATE(73)] = 2108,
  [SMALL_STATE(74)] = 2125,
  [SMALL_STATE(75)] = 2142,
  [SMALL_STATE(76)] = 2159,
  [SMALL_STATE(77)] = 2174,
  [SMALL_STATE(78)] = 2185,
  [SMALL_STATE(79)] = 2199,
  [SMALL_STATE(80)] = 2213,
  [SMALL_STATE(81)] = 2227,
  [SMALL_STATE(82)] = 2241,
  [SMALL_STATE(83)] = 2255,
  [SMALL_STATE(84)] = 2269,
  [SMALL_STATE(85)] = 2279,
  [SMALL_STATE(86)] = 2293,
  [SMALL_STATE(87)] = 2307,
  [SMALL_STATE(88)] = 2321,
  [SMALL_STATE(89)] = 2335,
  [SMALL_STATE(90)] = 2349,
  [SMALL_STATE(91)] = 2363,
  [SMALL_STATE(92)] = 2377,
  [SMALL_STATE(93)] = 2386,
  [SMALL_STATE(94)] = 2395,
  [SMALL_STATE(95)] = 2404,
  [SMALL_STATE(96)] = 2413,
  [SMALL_STATE(97)] = 2422,
  [SMALL_STATE(98)] = 2433,
  [SMALL_STATE(99)] = 2442,
  [SMALL_STATE(100)] = 2451,
  [SMALL_STATE(101)] = 2460,
  [SMALL_STATE(102)] = 2469,
  [SMALL_STATE(103)] = 2478,
  [SMALL_STATE(104)] = 2487,
  [SMALL_STATE(105)] = 2498,
  [SMALL_STATE(106)] = 2507,
  [SMALL_STATE(107)] = 2515,
  [SMALL_STATE(108)] = 2523,
  [SMALL_STATE(109)] = 2531,
  [SMALL_STATE(110)] = 2539,
  [SMALL_STATE(111)] = 2547,
  [SMALL_STATE(112)] = 2555,
  [SMALL_STATE(113)] = 2563,
  [SMALL_STATE(114)] = 2571,
  [SMALL_STATE(115)] = 2579,
  [SMALL_STATE(116)] = 2587,
  [SMALL_STATE(117)] = 2595,
  [SMALL_STATE(118)] = 2603,
  [SMALL_STATE(119)] = 2611,
  [SMALL_STATE(120)] = 2619,
  [SMALL_STATE(121)] = 2627,
  [SMALL_STATE(122)] = 2635,
  [SMALL_STATE(123)] = 2643,
  [SMALL_STATE(124)] = 2651,
  [SMALL_STATE(125)] = 2659,
  [SMALL_STATE(126)] = 2667,
  [SMALL_STATE(127)] = 2675,
  [SMALL_STATE(128)] = 2683,
  [SMALL_STATE(129)] = 2691,
  [SMALL_STATE(130)] = 2699,
  [SMALL_STATE(131)] = 2707,
  [SMALL_STATE(132)] = 2715,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 1, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_block_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_op, 3, 0, 12),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call, 4, 0, 17),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call, 4, 0, 17),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comp_op, 3, 0, 12),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comp_op, 3, 0, 12),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_op, 4, 0, 14),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_op, 4, 0, 14),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call, 4, 0, 18),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call, 4, 0, 18),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_op, 3, 0, 10),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_op, 3, 0, 10),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_un_op, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_un_op, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__par_expr, 3, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__par_expr, 3, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mul_op, 3, 0, 12),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__var_decl_block, 2, 0, 0),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__var_decl_block, 2, 0, 0), SHIFT_REPEAT(74),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__var_decl_block, 2, 0, 0), SHIFT_REPEAT(72),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__var_decl_block, 2, 0, 0), SHIFT_REPEAT(71),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__var_decl_block, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_op, 3, 0, 11),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, 0, 21),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, 0, 21),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 8, 0, 23),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 8, 0, 23),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__assign_statement, 2, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assign_statement, 2, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, 0, 21),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, 0, 21),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fb_call_statement, 5, 0, 18),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fb_call_statement, 5, 0, 18),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fb_call_statement, 4, 0, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fb_call_statement, 4, 0, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 1, 0, 7),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 8, 0, 21),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, 0, 21),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_out_class_decl, 3, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_out_class_decl, 3, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_in_class_decl, 3, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_in_class_decl, 3, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_class_decl, 3, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_class_decl, 3, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_decl, 3, 0, 4),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_decl, 4, 0, 13),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 0),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 4, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_decl, 4, 0, 4),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_decl, 5, 0, 13),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__vars_decl, 2, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__vars_decl, 3, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_init, 2, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arg_list, 1, 0, 8),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__named_arg_list_repeat1, 2, 0, 16), SHIFT_REPEAT(16),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__named_arg_list_repeat1, 2, 0, 16),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_arg_list, 1, 0, 9),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__arg_list_repeat1, 2, 0, 15), SHIFT_REPEAT(26),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__arg_list_repeat1, 2, 0, 15),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elsif_branch, 4, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__vars_decl, 1, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_decl_repeat1, 2, 0, 5), SHIFT_REPEAT(104),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_var_decl_repeat1, 2, 0, 5),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__vars_decl_repeat1, 2, 0, 0),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__vars_decl_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_arg_list, 2, 0, 16),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arg_list, 2, 0, 15),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__vars_decl, 2, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_argument, 1, 0, 6),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_decl, 6, 0, 13),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__named_arg_list_repeat1, 2, 0, 20),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualifier, 1, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_decl, 5, 0, 4),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_var_decl_repeat1, 2, 0, 3),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block_def, 5, 0, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__var_name, 1, 0, 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__arg_list_repeat1, 2, 0, 19),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_branch, 2, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_index, 5, 0, 22),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [409] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

TS_PUBLIC const TSLanguage *tree_sitter_st(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
