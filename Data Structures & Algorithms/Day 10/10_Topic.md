# Day 10 - Operators in C++

## Topics Covered
1. Arithmetic Operators
2. Assignment Operators
3. Comparison Operators
4. Logical Operators
5. Bitwise Operators

## Programs Created

### 1. Arithmetic Operators
- [`Arithmetic/binary.cpp`](Problem01.cpp) - Demonstrates multiplication of floating-point and integer values
- [`Arithmetic/unary.cpp`](Problem02.cpp) - Shows the usage of increment and decrement operators (pre and post)

### 2. Assignment Operators
- [`Assignment_operator.cpp`](Problem03.cpp) - Demonstrates compound assignment operators (+=, -=, etc.) and conditional expressions

### 3. Comparison Operators
- [`comparison_op.cpp`](Problem04.cpp) - Shows the usage of various comparison operators (==, !=, >, <, >=, <=)

### 4. Logical Operators
- [`logical_operator.cpp`](Problem05.cpp) - Demonstrates logical operators (&&, ||, !) for boolean expressions

### 5. Bitwise Operators
- [`Bitwise_operator.cpp`](Problem06.cpp) - Shows bitwise operations (&, |, ^, ~, <<, >>) for bit manipulation

## Key Concepts Learned

1. Arithmetic Operators
   - Basic operations: addition, subtraction, multiplication, division, modulus
   - Unary operators: increment (++), decrement (--)
   - Difference between pre and post increment/decrement operations
   - Floating-point operations and implicit type conversion

2. Assignment Operators
   - Basic assignment (=)
   - Compound assignment (+=, -=, *=, /=, %=, &=, |=, ^=, <<=, >>=)
   - Operator precedence in complex expressions

3. Comparison Operators
   - Relational operators (>, <, >=, <=)
   - Equality operators (==, !=)
   - Boolean result of comparison operations (1 for true, 0 for false)

4. Logical Operators
   - AND (&&): true only if both operands are true
   - OR (||): true if at least one operand is true
   - NOT (!): inverts the boolean value
   - Short-circuit evaluation for && and ||
   - Truth tables and logical equivalences

5. Bitwise Operators
   - AND (&): 1 if both bits are 1
   - OR (|): 1 if at least one bit is 1
   - XOR (^): 1 if bits are different
   - NOT (~): inverts all bits
   - Left shift (<<): multiplies by 2^n
   - Right shift (>>): divides by 2^n
   - Binary representation of numbers
   - Common bit manipulation techniques

## Time Complexity Analysis
- All operator operations: O(1) - constant time
- Bitwise operations are generally more efficient than arithmetic operations for certain tasks

## Applications and Use Cases

1. Arithmetic Operators
   - Mathematical calculations
   - Increment/decrement in loops
   - Counter implementations

2. Assignment Operators
   - Variable initialization and modification
   - Accumulation operations (sum, product)
   - Shorthand for longer expressions

3. Comparison Operators
   - Conditional statements (if, else)
   - Loop termination conditions
   - Sorting algorithms
   - Binary search implementations

4. Logical Operators
   - Complex condition evaluation
   - Input validation
   - Boolean algebra implementations
   - Control flow decisions

5. Bitwise Operators
   - Flag manipulation
   - Fast multiplication/division by powers of 2
   - Memory-efficient data storage
   - Cryptographic operations
   - Low-level hardware interaction

## Operator Precedence and Associativity
- Understanding the order in which operators are evaluated
- Using parentheses to override default precedence
- Left-to-right vs. right-to-left associativity
- Avoiding common precedence mistakes