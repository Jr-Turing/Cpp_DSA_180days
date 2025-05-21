/*
    Problem: Repeated Number Triangle
    Description: This program prints a triangle pattern of repeated numbers
                 where each row repeats the row number the same number of times as the row number.

    Example output:
        1
        2 2
        3 3 3
        4 4 4 4
        5 5 5 5 5
    
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
        // Inner loop for columns - repeat row number 'row' times
        for(col = 1; col <= row; col++)
        {
            cout << row << " ";
        }
        // Move to next line after each row
        cout << endl;
    }
    return 0;
};