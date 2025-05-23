/*
    Problem: Hollow Diamond Pattern
    Description: This program prints a hollow diamond pattern using asterisks (*).
                 The pattern consists of two triangular patterns on both sides
                 with spaces in between, creating a diamond shape with empty center.
*/
#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    int n, row, col;
    cout << "Enter the input: ";
    cin >> n;

    // Upper half of the diamond (inverted)
    for(row = n; row >= 1; row--)
    {
        // Print left asterisks
        for(col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        // Print spaces in the middle
        for(col = 1; col <= 2*n - 2*row; col++)
        {
            cout << "  ";
        }
        // Print right asterisks
        for(col = 1; col <= row; col++)
        {
            cout << "* "; 
        }
        cout << endl;
    }

    // Lower half of the diamond
    for(row = 1; row <= n; row++)
    {
        // Print left asterisks
        for(col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        // Print spaces in the middle
        for(col = 1; col <= 2*n - 2*row; col++)
        {
            cout << "  ";
        }
        // Print right asterisks
        for(col = 1; col <= row; col++)
        {
            cout << "* "; 
        }
        cout << endl;
    }
    return 0;
};