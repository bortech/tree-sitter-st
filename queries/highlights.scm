(comment) @comment 
(pragma) @preproc 

[
  "IF"
  "THEN"
  "ELSE"
  "ELSIF"
  "END_IF"
] @conditional

[
  "FUNCTION_BLOCK"
  "END_FUNCTION_BLOCK"
  "FUNCTION"
  "END_FUNCTION"
] @keyword.function

[
  "VAR_INPUT"
  "VAR_OUTPUT"
  "VAR"
  "END_VAR"
  "ARRAY"
  "FOR"
  "TO"
  "DO"
  "END_FOR"
  "OF"
] @keyword

[
  "NOT"
  "AND"
  "OR"
] @keyword.operator

[
  (integer_literal)
  (real_literal)
  (time_literal)
] @number


(builtin_type) @type.builtin

(bool_literal) @constant.builtin

; Error
(ERROR) @error
