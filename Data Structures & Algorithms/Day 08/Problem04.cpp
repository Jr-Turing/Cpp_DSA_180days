/*
    Problem: Right-Aligned Decreasing Number Triangle
    Description: This program prints a right-aligned triangle pattern of decreasing numbers
                 where each row starts with the row number and counts down to 1.
*/
#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    int n, row, col;
    cout << "Enter the number: ";
    cin >> n;

    // Outer loop for rows
    for(row = 1; row <= n; row++)
    {
        // Print spaces for right alignment
        for(col = 1; col <= n - row; col++)
        {
            cout << "  ";
        }
        
        // Print decreasing numbers from row to 1
        for(col = row; col >= 1; col--)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    return 0;
};