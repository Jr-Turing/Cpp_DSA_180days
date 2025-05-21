/*
    Problem: Star Triangle Pattern
    Description: This program prints a right-angled triangle pattern of stars (*)
                 starting with 1 star in the first row and adding one more star
                 in each subsequent row.

    Example output:
        *
        * *
        * * *
        * * * *
        * * * * *
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
        // Inner loop for columns - print stars based on row number
        for(col = 1; col <= row; col++)
        {
            cout << "*" << " ";
        }
        // Move to next line after each row
        cout << endl;
    }
    return 0;
};