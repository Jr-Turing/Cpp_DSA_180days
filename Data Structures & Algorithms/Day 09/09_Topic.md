# Day 9 - Advanced Pattern Printing

## Topics Covered
1. Complex Geometric Patterns
2. Multi-part Pattern Construction
3. Symmetric Patterns

## Programs Created (Ordered by Complexity)

### 1. Pyramid Patterns
1. [`pyramid_pattern_01.cpp`](Problem01.cpp) - Standard pyramid pattern
   
   Example:
   ```
            *
          * * *
        * * * * *
      * * * * * * *
    * * * * * * * * *
   ```

2. [`Inverted_pyramid_pattern.cpp`](Problem02.cpp) - Inverted pyramid pattern
   
   Example:
   ```
       * * * * * * * * *
         * * * * * * *
           * * * * *
             * * *
               *
   ```

### 2. Number Patterns
3. [`palindrome_triangle.cpp`](Problem03.cpp) - Palindrome number pattern
   
   Example:
   ```
            1
          1 2 1
        1 2 3 2 1
      1 2 3 4 3 2 1
    1 2 3 4 5 4 3 2 1
   ```

### 3. Complex Symmetrical Patterns
4. [`Butterfly_pattern.cpp`](Problem04.cpp) - Butterfly pattern with asterisks
   
   Example:
   ```
        *             *
        * *         * *
        * * *     * * *
        * * * * * * * *
        * * *     * * *
        * *         * *
        *             *
   ```

5. [`Hollow_diamond_pattern.cpp`](Problem05.cpp) - Hollow diamond pattern
   
   Example:
   ```
        * * * * * * * * * *
        * * * *     * * * *
        * * *         * * *
        * *             * *
        *                 *
        *                 *
        * *             * *
        * * *         * * *
        * * * *     * * * *
        * * * * * * * * * *
   ```

## Key Concepts Learned (Sequential Approach)

1. Basic Pattern Construction
   - Controlling row and column using nested loops
   - Adding spaces for alignment and shape formation
   - Creating varied shapes through pattern organization

2. Multi-part Pattern Logic
   - Dividing complex patterns into logical sections
   - Upper and lower half construction
   - Left, middle, and right section formation
   - Variable spacing for creating hollow shapes

3. Pattern Element Progression
   - Creating numeric palindromes
   - Building symmetrical shapes
   - Managing variable width spaces
   - Row-dependent spacing and star counts

4. Advanced Techniques
   - Formula for calculating spaces: 2*n - 2*row
   - Formula for pyramid stars: 2*row - 1
   - Using decreasing and increasing loops together
   - Creating symmetry across vertical and horizontal axes

## Time Complexity Analysis
- All pattern programs have O(n²) time complexity
- Each row requires operations proportional to input size
- Pattern components scale with input dimensions

## Advanced Pattern Observations
- Complex patterns can be broken down into simpler components
- Symmetrical patterns often use mirrored loop constructions
- Hollow patterns require careful space management
- Many patterns can be constructed using combinations of triangles
- The relationship between row number and spacing follows specific formulas
- Butterfly and diamond patterns demonstrate opposite approaches to spacing
