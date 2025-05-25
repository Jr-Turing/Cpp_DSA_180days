# Day 11 - Control Statements and Loop Variations

## Topics Covered
1. While and Do-While Loops
2. Break and Continue Statements
3. Switch Statement
4. Variable Scoping
5. Loop Applications

## Programs Created

### 1. Loop Variations
- [`number_while.cpp`](Problem01.cpp) - Using while loop to print numbers from 1 to 10
- [`number_do_while.cpp`](Problem02.cpp) - Implementing do-while loop for number printing from 1 to n
- [`table_while.cpp`](Problem03.cpp) - Generating multiplication tables using while loop
- [`factor_while.cpp`](Problem04.cpp) - Finding all factors of a number using while loop

### 2. Control Flow Statements
- [`break_statement.cpp`](Problem05.cpp) - Demonstrates the break statement to exit loops early when i equals 4
- [`continue_statement.cpp`](Problem06.cpp) - Shows the continue statement to skip iterations divisible by 4
- [`Switch_statement.cpp`](Problem07.cpp) - Implements switch-case for mapping numbers to days of the week

### 3. Variable and Program Organization
- [`Scope_variable.cpp`](Problem08.cpp) - Demonstrates variable scoping rules and shadowing in different blocks
- [`sum_n_no.cpp`](Problem09.cpp) - Generating multiplication table using do-while loop (despite the filename)

## Key Concepts Learned

1. Loop Control Structures
   - While loop syntax and usage: `while(condition) { statements; }`
   - Do-while loop for operations that must execute at least once: `do { statements; } while(condition);`
   - Differences between for, while, and do-while loops
   - Loop iteration control and termination conditions
   - Loop efficiency and appropriate usage scenarios
   - The three components of loops: initialization, condition checking, and update

2. Control Flow Manipulation
   - Break statement to exit loops prematurely
   - Continue statement to skip specific iterations
   - Switch statement for multi-way branching
   - Fall-through behavior in switch statements (when break is omitted)
   - Default cases and handling exceptions
   - Importance of break statements in switch cases

3. Variable Scoping
   - Block-level scoping with curly braces {}
   - Local vs. global variables
   - Variable shadowing (inner variables hiding outer variables with same name)
   - Scope resolution
   - Memory management considerations
   - Lifetime of variables in different scopes

4. Loop Applications
   - Mathematical operations (factors, tables, summations)
   - Iterative algorithms
   - Input validation
   - Menu-driven programs
   - Pattern matching and searching

## Time Complexity Analysis
- While and do-while loops: O(n) for most implementations
- Break statement: Can reduce time complexity by early termination
- Switch statement: O(1) - constant time for decision making
- Factor finding: O(n) where n is the input number
- Table generation: O(1) - constant time (always 10 iterations)

## Common Use Cases

1. While Loops
   - Used when the number of iterations is not known in advance
   - Input validation until correct input is received
   - File reading until end-of-file
   - Game loops that run until specific condition is met
   - Network connections waiting for data

2. Do-While Loops
   - Menu systems that must display at least once
   - Input validation where prompt must appear at least once
   - Algorithms requiring at least one iteration
   - Game loops that need to update the state at least once
   - User interface interactions

3. Break and Continue
   - Early loop termination when a condition is met (break)
   - Skipping specific iterations that meet certain conditions (continue)
   - Optimizing loop performance by avoiding unnecessary computations
   - Implementing search algorithms that exit upon finding a match
   - Handling special cases within a loop

4. Switch Statement
   - Menu-driven applications
   - State machines
   - Command processors
   - Replacing complex if-else chains
   - Event handling in user interfaces
   - Parsing tokens in compilers/interpreters

## Best Practices
1. Always include a termination condition in while loops to prevent infinite loops
2. Prefer for loops when number of iterations is known, while loops otherwise
3. Use break statements sparingly to maintain code readability
4. Consider using early returns instead of complex nested conditionals
5. Initialize variables properly before using them in loops
6. Use meaningful variable names to enhance code readability
7. Add proper indentation for control structures to improve code clarity
8. Document loop invariants and termination conditions
9. Test edge cases for loops (empty input, minimum/maximum values)
10. Consider performance implications for large iterations

## Code Examples

### While Loop
```cpp
while (condition) 
{
    // Code to be executed
    // Update condition
}
```

### Do-While Loop
```cpp
do 
{
    // Code to be executed at least once
    // Update condition
} while (condition);
```

### Switch Statement
```cpp
switch (expression) 
{
    case value1:
        // Code for value1
        break;
    case value2:
        // Code for value2
        break;
    default:
        // Default code
}
```
