# Day 7 - Advanced Pattern Printing

## Topics Covered
1. Triangle Patterns
2. Star Patterns
3. Number Sequences in Patterns
4. Character Patterns

## Programs Created

### 1. Number Triangle Patterns
- [`num_triangle.cpp`](Problem01.cpp) - Increasing number triangle (1, 1-2, 1-2-3, etc.)
- [`decr_num_triangle.cpp`](Problem02.cpp) - Decreasing number triangle (5, 5-4, 5-4-3, etc.)
- [`inverted_num_triangle.cpp`](Problem03.cpp) - Inverted triangle (1-2-3-4-5, 1-2-3-4, etc.)
- [`reverse_num_triangle.cpp`](Problem04.cpp) - Reverse counting triangle (1, 2-1, 3-2-1, etc.)

### 2. Star Patterns
- [`star_triangle.cpp`](Problem05.cpp) - Increasing star triangle (*, **, ***, ****, *****)
- [`reverse_star_triangle.cpp`](Problem06.cpp) - Decreasing star triangle (*****, ****, ***, **, *)

### 3. Factorial/Sequence Patterns
- [`factorial_sequence.cpp`](Problem07.cpp) - Printing numbers in descending order triangle

### 4. Character and Repeated Value Patterns
- [`repeated_char_triangle.cpp`](Problem08.cpp) - Triangle with repeated characters per row (a, bb, ccc, etc.)
- [`repeated_num_triangle.cpp`](Problem09.cpp) - Triangle with repeated row numbers (1, 22, 333, etc.)

## Key Concepts Learned
1. Triangle Pattern Formation
   - Increasing number of elements per row
   - Decreasing number of elements per row
   - Relationship between row number and number of elements

2. Pattern Logic
   - Using row number to determine column count
   - Formula-based pattern generation (n-row+1, etc.)
   - Multiple approaches to achieve the same pattern

3. Character Pattern Techniques
   - ASCII arithmetic for character sequences
   - Repeated character patterns
   - Row-dependent character selection

## Time Complexity Analysis
- All pattern programs have O(n²) time complexity

## Observations About Triangle Patterns
- Triangle patterns can be ascending (increasing elements per row)
- Triangle patterns can be descending (decreasing elements per row)
- The relationship between row and column count follows specific formulas
  - For standard triangle: columns = row number
  - For inverted triangle: columns = total rows - current row + 1

## Advanced Pattern Techniques
- Character progression (a, b, c, d, e) can be achieved with 'a'+row-1
- Repeating the same character multiple times uses nested loops
- Formulas like (n-row+1) help create interesting number patterns
