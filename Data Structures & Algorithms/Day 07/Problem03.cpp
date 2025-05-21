/*
    Problem: Inverted Number Triangle
    Description: This program prints an inverted triangle pattern of increasing numbers
                 from 1 to n in each row, with each row having one fewer number.

    Example output:
        1 2 3 4 5
        1 2 3 4
        1 2 3
        1 2 
        1 
*/
#include <iostream>
using namespace std;

int main()
{
    // Declare variables for iteration
    int row, col;
    
    // Method 1: Starting from 5 and decreasing rows
    /*
    for(row = 5; row >= 1; row--)
    {
        for(col = 1; col <= row; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    */

    // Method 2: Starting from 1 and using formula for number of columns
    for(row = 1; row <= 5; row++)
    {
        for(col = 1; col <= 5 - row + 1; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    return 0;
};