/*
    Problem: Reverse Number Triangle Pattern
    Description: This program prints a triangle pattern where each row
                 starts with the row number and counts down to 1.

    Example output:
        1
        2 1
        3 2 1
        4 3 2 1
        5 4 3 2 1
*/
#include <iostream>
using namespace std;

int main()
{
    // Declare variables for iteration
    int row, col;
    
    // Outer loop for rows
    for(row = 1; row <= 5; row++)
    {
        // Inner loop for columns - count down from row number to 1
        for(col = row; col >= 1; col--)
        {
            cout << col << " ";
        }
        // Move to next line after each row
        cout << endl;
    }
    return 0;
};