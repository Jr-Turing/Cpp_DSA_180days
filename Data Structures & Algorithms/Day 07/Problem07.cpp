/*
    Problem: Factorial Sequence in Descending Order
    Description: This program prints a triangle pattern of decreasing numbers
                 starting from 5. Each row adds one more number in decreasing sequence.

    Example output:
        5
        5 4
        5 4 3
        5 4 3 2 
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
        // Inner loop for columns - print decreasing sequence from 5
        for(col = 5; col >= 5 - row + 1; col--)
        {
            cout << col << " ";
        }
        // Move to next line after each row
        cout << endl;
    }
    return 0;
};