/*
    Problem: Reverse Star Triangle Pattern
    Description: This program prints a triangle pattern of stars (*)
                 in a decreasing manner, starting with 5 stars in the first row
                 and decreasing by one star in each subsequent row.

    Example output:
        * * * * * 
        * * * *
        * * *
        * * 
        * 
*/
#include <iostream>
using namespace std;

int main()
{
    // Declare variables for iteration
    int row, col;

    // Method 1: Using formula to calculate column count
    /*
    for(row = 1; row <= 5; row++)
    {
        for(col = 1; col <= 5 - row + 1; col++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    */

    // Method 2: Starting from row 5 and decreasing
    for(row = 5; row >= 1; row--)
    {
        for(col = 1; col <= row; col++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
};