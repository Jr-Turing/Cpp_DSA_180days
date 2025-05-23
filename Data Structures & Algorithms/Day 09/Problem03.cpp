/*
    Problem: Palindrome Triangle Pattern
    Description: This program prints a triangle pattern of numbers that form palindromes.
                 Each row starts with 1 and increases to the row number, then decreases
                 back to 1, creating a palindromic sequence in each row.
*/
#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    int n, row, col;
    cout << "Enter the input: ";
    cin >> n;

    // Loop for each row of the palindrome triangle
    for(row = 1; row <= n; row++)
    {
        // Print spaces before the numbers (left padding)
        for(col = 1; col <= n - row; col++)
        {
            cout << "   ";
        }
        
        // Print increasing sequence (1 to row)
        for(col = 1; col <= row; col++)
        {
            cout << col << "  ";
        }
        
        // Print decreasing sequence (row-1 down to 1)
        for(col = row - 1; col >= 1; col--)
        {
            cout << col << "  ";
        }
        cout << endl;  
    }
    return 0;
};