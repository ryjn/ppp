# 3.3 Expressions
**Expressions** - the most basic unit in a program. Computes value from operands.

## 3.3.1 Constant Expressions
Named objects whose values cannot be changed after they have been initialized.

It is recommended to use constant expressions whenever possible instead of literals (aka magic constants). This helps with readability and when modifying code - you don't have to change every instance of the literal.

`constexpr` - symbolic constant that must be given a value at compile time
`const` - used to handle cases where value is not known at compile time but does not change after initialization

# 3.4 Statements
An **expression** computes a value from a set of operands using operators.
A **statement** is a line of code that does something and ends with a semicolon.
