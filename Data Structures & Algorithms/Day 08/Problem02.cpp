/*
    Problem: Right-Aligned Number Triangle
    Description: This program prints a right-aligned triangle pattern of repeated numbers
                 where each row contains the row number repeated row times.
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
        // Space printing - print spaces before numbers
        for(col = 1; col <= n - row; col++)
        {
            cout << "  ";
        }
        
        // Number printing - print row number 'row' times
        for(col = 1; col <= row; col++)
        {
            cout << row << " ";
        }
        cout << endl; 
    }
    return 0;
};