/*
    Problem: Pyramid Pattern with Stars
    Description: This program prints a pyramid pattern using asterisks (*).
                 The pattern starts with a single star at the top and expands
                 outward with each row adding two more stars than the previous row.
*/
#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    int n, row, col;
    cout << "Enter the number: ";
    cin >> n;

    // Loop for each row of the pyramid
    for(row = 1; row <= n; row++)
    {
        // Print spaces before the stars (left padding)
        for(col = 1; col <= n - row; col++)
        {
            cout << "  ";
        }
        
        // Print stars for this row (2*row-1 stars in each row)
        for(col = 1; col <= 2*row - 1; col++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
};