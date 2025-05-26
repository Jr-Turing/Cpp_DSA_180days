# Day 12 - Binary and Decimal Number System Conversions

## Topics Covered
1. Binary Number System
2. Decimal Number System
3. Number System Conversions

## Programs Created
- [`binary_decimal.cpp`](Problem01.cpp) - Converts binary to decimal
- [`Decimal_Binary.cpp`](Problem02.cpp) - Converts decimal to binary

## Key Concepts Learned

1. **Binary to Decimal Conversion**
   - Process digits from right to left
   - Multiply each digit by corresponding power of 2
   - Example: 1101₂ = 1×2³ + 1×2² + 0×2¹ + 1×2⁰ = 13₁₀

2. **Decimal to Binary Conversion**
   - Repeatedly divide by 2 and collect remainders
   - Read remainders from bottom to top
   - Example: 13₁₀ → 1101₂

3. **Implementation Techniques**
   - Use modulo (%) to extract digits
   - Use integer division (/) to remove processed digits
   - Use multiplication to track place values

4. **Bitwise Operations**
   - `&1` to check least significant bit
   - `>>1` for division by 2
   - `<<1` for multiplication by 2

## Time Complexity
- Both conversions: O(log n) where n is the input number