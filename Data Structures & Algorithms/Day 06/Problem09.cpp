/*
    Problem: Simple Star Pattern
    Description: This program prints a pattern of stars (*) in a 4x5 grid.
                 Example output:
                 * * * * *
                 * * * * *
                 * * * * *
                 * * * * *
*/
#include <iostream>
using namespace std;

int main()
{
    // Declare variables for iteration and size
    int n, row, col;
    // user input section
    // cout << "Enter the number: ";
    // cin >> n;

    // Outer loop for rows
    for(row = 1; row <= 4; row++)
    {
        // Inner loop for columns
        for(col = 1; col <= 5; col++)
        {
            cout << "*" << " ";
        }
        // Move to next line after each row is complete
        cout << endl;
    }
    return 0;
};