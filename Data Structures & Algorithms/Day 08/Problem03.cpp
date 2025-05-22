/*
    Problem: Right-Aligned Numeric Sequence Triangle
    Description: This program prints a right-aligned triangle pattern of consecutive numbers
                 starting from 1 in each row and going up to the row number.
*/

#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    int n, row, col;
    cout << "Enter the number: ";
    cin >> n;

    // Outer loop for rows
    for(row = 1; row <= n; row++)
    {
        // Space printing - print spaces before numbers
        for(col = 1; col <= n - row; col++)
        {
            cout << "  ";
        }
        
        // Number printing - print sequence from 1 to row number
        for(col = 1; col <= row; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    return 0;
};