/*
    Problem: Inverted Pyramid Pattern
    Description: This program prints an inverted pyramid pattern using asterisks (*).
                 The pattern starts with a wide base of stars at the top and
                 narrows down to a single star at the bottom.
*/
#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    int n, row, col;
    cout << "Enter the input: ";
    cin >> n;

    // Loop for each row of the inverted pyramid
    for(row = n; row >= 1; row--)
    {
        // Print spaces before the stars (left padding)
        for(col = 1; col <= n - row; col++)
        {
            cout << "   ";
        }
        
        // Print stars for this row (2*row-1 stars in each row)
        for(col = 1; col <= 2*row - 1; col++)
        {
            cout << "*" << "  ";
        }
        cout << endl;
    }
    return 0;
};