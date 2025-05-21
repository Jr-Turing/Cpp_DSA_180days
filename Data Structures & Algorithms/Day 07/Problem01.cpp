/*
    Problem: Increasing Number Triangle
    Description: This program prints a triangle pattern of increasing numbers
                 starting from 1. Each row adds one more number in sequence.

    Example output:
        1
        1 2
        1 2 3
        1 2 3 4
        1 2 3 4 5
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
        // Inner loop for columns - print increasing sequence from 1
        for(col = 1; col <= row; col++)
        {
            cout << col << " ";
        }
        // Move to next line after each row
        cout << endl;
    }
    return 0;
}