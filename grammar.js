/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'st',

  extras: $ => [/\s/, $.comment, $.pragma],
  word: $ => $.identifier,

  precedences: _ => [
    [
      'par',
      'fcall',
      'expt',
      'un_minus',
      'not',
      'mul', // *,/,MOD
      'add', // +,-  
      'comp', // <,>,<=,>=
      'eq', // =
      'not_eq', // <>
      'logic', // AND, OR, XOR
    ],
  ],

  rules: {
    source_file: $ => repeat1($._definition),

    _definition: $ => choice( 
      $.function_block_def,
      $.function_def,
    ),

    function_block_def: $ => seq(
            'FUNCTION_BLOCK',
            field('name', $.identifier),
            $._var_decl_block,
            $.code_block,
            'END_FUNCTION_BLOCK'
        ),

    function_def: $ => seq(
      'FUNCTION',
      field('name', $.identifier),
      ':',
      field('return_type', $._type),
      $._var_decl_block,
      $.code_block,
      'END_FUNCTION'
    ),

    _var_decl_block: $ => repeat1($._var_group_decl),

    _var_group_decl: $ => choice( $.var_in_class_decl, $.var_out_class_decl, $.var_class_decl),
   
    var_in_class_decl: $ => seq('VAR_INPUT', $._vars_decl, 'END_VAR'),
    var_out_class_decl: $ => seq('VAR_OUTPUT', $._vars_decl, 'END_VAR'),
    var_in_out_class_decl: $ => seq('VAR_IN_OUT', $._vars_decl, 'END_VAR'),
    var_class_decl: $ => seq('VAR', $._vars_decl, 'END_VAR'),

    _vars_decl: $ => seq( $.var_decl, repeat(seq(';', $.var_decl)), optional(';')),

    _var_name: $ => field('name', $.identifier),

    var_decl: $ => seq(
      seq($._var_name, repeat(seq(',', $._var_name))),
      ':', 
      field('type', $._type), 
      optional($.var_init),
      optional($.qualifier)
    ),

    qualifier: _ => choice('R_EDGE', 'F_EDGE'),

    var_init: $ => seq(':=', $._literal),

    _type: $ => choice(
      $.builtin_type,
      $.identifier, 
      $.array_type
    ),

    builtin_type: _ => choice(
      'BOOL',
      'BYTE',
      'WORD',
      'DWORD',
      'LWORD',
      'REAL',
      'LREAL',
      'TIME',
      'SINT',
      'INT',
      'DINT',
      'LINT',
      'USINT',
      'UINT',
      'UDINT',
      'ULINT',
    ),

    array_type: $ => seq( 'ARRAY', $.array_index, 'OF', $._type),
    array_index: $ => seq('[', 
      field('from', $.integer_literal), 
      '..', 
      field('to', $.integer_literal),
      ']',
    ),

    code_block: $ => repeat1($._statement),

    _statement: $ => choice(
      $._assign_statement,
      $.if_statement,
      $.fb_call_statement,
      $.for_statement,
    ),

    assign_op: $=> seq(
      field('lvalue', $._expression), 
      ':=', 
      field('rvalue', $._expression)
    ),
    _assign_statement: $ => seq($.assign_op, ';'),

    if_statement: $ => seq(
      'IF', 
      field('condition', $._expression), 
      'THEN', 
      $.code_block, 
      repeat($.elsif_branch), 
      optional($.else_branch),
      'END_IF', 
      ';'),

    elsif_branch: $ => seq('ELSIF', $._expression, 'THEN', $.code_block),
    else_branch: $ => seq('ELSE', $.code_block),


    for_statement: $ => seq('FOR', 
      field('for_init', $.assign_op), 
      'TO', 
      field('for_range', $._expression), 
      'DO', 
      $.code_block, 
      'END_FOR',
      ';'
    ),

    _expression: $ => choice(
      $.identifier,
      $._literal,
      $.add_op,
      $.mul_op,
      $.comp_op,
      $.not_op,
      $.func_call,
      $.dot_op,
      $.index_op,
      $._par_expr,
      $.eq_op,
      $.not_eq_op,
      $.logic_op,
    ),

    dot_op: $ => seq(
      field('parent', $.identifier), 
      '.', 
      field('member', $.identifier)
    ),

    index_op: $ => seq(
      field('parent', $.identifier), 
      '[',
      field('index', $._expression), 
      ']'
    ),

    _par_expr: $ => prec('par', seq('(', $._expression, ')')),

    add_op: $ => prec.left('add', seq(
      field('lhs', $._expression),
      choice('+', '-'),
      field('rhs', $._expression),
    )),

    mul_op: $ => prec.left('mul', seq(
      field('lhs', $._expression),
      choice('*', '/', 'MOD'),
      field('rhs', $._expression),
    )),

    logic_op: $ => prec.left('logic', seq(
      field('lhs', $._expression),
      choice('AND', 'OR', 'XOR', '&'),
      field('rhs', $._expression),
    )),

    comp_op: $ => prec.left('comp', seq(
      field('lhs', $._expression),
      choice('<', '>', '>=', '<='),
      field('rhs', $._expression),
    )),

    eq_op: $ => prec.left('eq', seq(
      field('lhs', $._expression),
      '=',
      field('rhs', $._expression),
    )),

    not_eq_op: $ => prec.left('not_eq', seq(
      field('lhs', $._expression),
      '<>',
      field('rhs', $._expression),
    )),

    not_op: $ => prec.left('not', seq('NOT', $._expression)),

    fb_call_statement: $ => seq(
      field('name', $.identifier), 
      '(', 
      choice($._arg_list, $._named_arg_list),
      ')', 
      ';'
    ),

    func_call: $ => prec('fcall', seq(
      field('name', $.identifier), 
      '(', 
      choice($._arg_list, $._named_arg_list),
      ')'
    )),

    _argument: $ => field('arg', $._expression),
    _named_argument: $ => field('named_arg', $.assign_op),

    _arg_list: $ => seq($._argument, repeat(seq(',', $._argument))),
    _named_arg_list: $ => seq($._named_argument, repeat(seq(',', $._named_argument))),

    identifier: _ => /[a-zA-Z_]+[0-9]*/,

    _literal: $ => choice(
      $.integer_literal,
      $.real_literal,
      $.time_literal,
      $.bool_literal,
    ),

    integer_literal: _ => token(/[+-]?[0-9]+/),
    real_literal: _ => token(/[+-]?[0-9]*\.[0-9]+/),
    time_literal: _ => token(/[tT]#\d+s/),
    bool_literal: _ => token(choice('TRUE', 'FALSE')),

    comment: _ => token(/\(\*([^*]*[*]+[^)*])*[^*]*[*]+\)/),
    pragma: _ => token(seq('{', /([^$}][^}]*)?/, '}')),
  }
});
