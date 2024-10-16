# Experiment-3
**Theory: - **
### Understanding and Implementing Operators in C++

Operators in C++ are special symbols used to perform operations on variables and values. They are fundamental to the language and are used to build expressions and statements. Here's a comprehensive overview of the different types of operators in C++:

### 1. **Arithmetic Operators**
Arithmetic operators are used to perform basic mathematical operations.

- **Addition (`+`)**: Adds two operands.
- **Subtraction (`-`)**: Subtracts the second operand from the first.
- **Multiplication (`*`)**: Multiplies two operands.
- **Division (`/`)**: Divides the first operand by the second.
- **Modulus (`%`)**: Returns the remainder of a division operation.

**Example**:
- `a + b` (adds `a` and `b`)
- `a - b` (subtracts `b` from `a`)
- `a * b` (multiplies `a` and `b`)
- `a / b` (divides `a` by `b`)
- `a % b` (remainder of `a` divided by `b`)

### 2. **Relational Operators**
Relational operators are used to compare two values or expressions.

- **Equal to (`==`)**: Checks if two operands are equal.
- **Not equal to (`!=`)**: Checks if two operands are not equal.
- **Greater than (`>`)**: Checks if the first operand is greater than the second.
- **Less than (`<`)**: Checks if the first operand is less than the second.
- **Greater than or equal to (`>=`)**: Checks if the first operand is greater than or equal to the second.
- **Less than or equal to (`<=`)**: Checks if the first operand is less than or equal to the second.

**Example**:
- `a == b` (true if `a` is equal to `b`)
- `a != b` (true if `a` is not equal to `b`)
- `a > b` (true if `a` is greater than `b`)
- `a < b` (true if `a` is less than `b`)
- `a >= b` (true if `a` is greater than or equal to `b`)
- `a <= b` (true if `a` is less than or equal to `b`)

### 3. **Logical Operators**
Logical operators are used to perform logical operations on boolean values.

- **Logical AND (`&&`)**: Returns `true` if both operands are `true`.
- **Logical OR (`||`)**: Returns `true` if at least one of the operands is `true`.
- **Logical NOT (`!`)**: Returns `true` if the operand is `false`, and `false` if the operand is `true`.

**Example**:
- `a && b` (true if both `a` and `b` are true)
- `a || b` (true if either `a` or `b` is true)
- `!a` (true if `a` is false)

### 4. **Assignment Operators**
Assignment operators are used to assign values to variables.

- **Simple Assignment (`=`)**: Assigns the right operand to the left operand.
- **Addition Assignment (`+=`)**: Adds the right operand to the left operand and assigns the result to the left operand.
- **Subtraction Assignment (`-=`)**: Subtracts the right operand from the left operand and assigns the result to the left operand.
- **Multiplication Assignment (`*=`)**: Multiplies the left operand by the right operand and assigns the result to the left operand.
- **Division Assignment (`/=`)**: Divides the left operand by the right operand and assigns the result to the left operand.
- **Modulus Assignment (`%=`)**: Computes the modulus of the left operand by the right operand and assigns the result to the left operand.

**Example**:
- `a = b` (assigns `b` to `a`)
- `a += b` (adds `b` to `a` and assigns the result to `a`)
- `a -= b` (subtracts `b` from `a` and assigns the result to `a`)

### 5. **Increment and Decrement Operators**
These operators are used to increase or decrease the value of an operand by one.

- **Increment (`++`)**: Increases the value of the operand by one. It can be used as a prefix (`++a`) or suffix (`a++`).
- **Decrement (`--`)**: Decreases the value of the operand by one. It can be used as a prefix (`--a`) or suffix (`a--`).

**Example**:
- `++a` (increases `a` by 1 before using its value)
- `a++` (increases `a` by 1 after using its value)
- `--a` (decreases `a` by 1 before using its value)
- `a--` (decreases `a` by 1 after using its value)

### 6. **Bitwise Operators**
Bitwise operators perform operations on the binary representation of integers.

- **AND (`&`)**: Performs a bitwise AND operation.
- **OR (`|`)**: Performs a bitwise OR operation.
- **XOR (`^`)**: Performs a bitwise XOR operation.
- **NOT (`~`)**: Performs a bitwise NOT operation.
- **Left Shift (`<<`)**: Shifts the bits of the left operand to the left.
- **Right Shift (`>>`)**: Shifts the bits of the left operand to the right.

**Example**:
- `a & b` (bitwise AND of `a` and `b`)
- `a | b` (bitwise OR of `a` and `b`)
- `a ^ b` (bitwise XOR of `a` and `b`)
- `~a` (bitwise NOT of `a`)
- `a << 2` (left shifts the bits of `a` by 2 positions)
- `a >> 2` (right shifts the bits of `a` by 2 positions)

### 7. **Conditional (Ternary) Operator**
The conditional operator is a shorthand for an `if-else` statement.

- **Conditional (`? :`)**: Evaluates a condition and returns one of two values based on whether the condition is true or false.

**Example**:
- `condition ? expression1 : expression2`
  - If `condition` is true, `expression1` is evaluated and returned.
  - If `condition` is false, `expression2` is evaluated and returned.

### 8. **Comma Operator**
The comma operator allows two expressions to be evaluated in sequence.

**Example**:
- `a = (b = 5, b + 1);`
  - First `b` is assigned `5`, then `b + 1` is assigned to `a`.

### 9. **Pointer Operators**
Pointer operators are used with pointers to perform operations related to memory addresses.

- **Address-of (`&`)**: Returns the address of a variable.
- **Dereference (`*`)**: Accesses the value at the address stored in a pointer.

**Example**:
- `&a` (address of `a`)
- `*ptr` (value pointed to by `ptr`)

### Summary

- **Arithmetic Operators**: Perform mathematical operations.
- **Relational Operators**: Compare values.
- **Logical Operators**: Perform logical operations.
- **Assignment Operators**: Assign values to variables.
- **Increment and Decrement Operators**: Adjust variable values by one.
- **Bitwise Operators**: Perform operations on binary representations.
- **Conditional Operator**: Provides a shorthand for `if-else` statements.
- **Comma Operator**: Allows multiple expressions to be evaluated.
- **Pointer Operators**: Handle memory addresses and pointer dereferencing.

Understanding and implementing these operators is crucial for effective programming in C++, as they form the basis for constructing and evaluating expressions, managing control flow, and manipulating data.

**Output: -**

**Experiment 3.1**    ![image](https://github.com/user-attachments/assets/08125f5c-a031-433c-a4f7-b192639365ef)



**Experiment 3.2**   ![image](https://github.com/user-attachments/assets/fcc498e8-c283-46a1-90f3-e1faebaa8071)


**Experiment 3.3**   ![image](https://github.com/user-attachments/assets/dc4ff37e-fe21-453f-8884-d193db9b1e19)







