/*
    Problem: Bitwise Operators in C++
*/

/*
    & -> bitwise AND (1 if both bits are 1, otherwise 0)
    | -> bitwise OR (1 if at least one bit is 1, otherwise 0)
    ^ -> XOR (1 if bits are different, 0 if same)
    ~ -> complement (inverts all bits: 0 becomes 1, 1 becomes 0)
    << -> left shift (shifts bits left, multiplies by 2^n)
    >> -> right shift (shifts bits right, divides by 2^n)
*/

#include<iostream>
using namespace std;

int main()
{
    // Bitwise Operator Examples
    
    // Bitwise AND (&): 2(10) & 3(11) = 2(10)
    // int ans = 2&3;    // Output: 2
    
    // Bitwise OR (|): 2(10) | 3(11) = 3(11)
    // int ans = 2|3;    // Output: 3
    
    // Bitwise XOR (^): 2(10) ^ 3(11) = 1(01)
    // int ans = 2^3;    // Output: 1
    
    // Left Shift (<<): 2(10) << 3 = 16(10000)
    // int ans = 2<<3;   // Output: 16 (2 * 2^3)
    
    // Right Shift (>>): 18(10010) >> 3 = 2(10)
    // int ans = 18>>3;  // Output: 2 (18 / 2^3)
    
    // Bitwise NOT (~): ~9(1001) = -10 in decimal (due to two's complement)
    int ans = ~9;      // Output: -10
    
    cout<<"My answer is: "<<ans;
    
    return 0;
};