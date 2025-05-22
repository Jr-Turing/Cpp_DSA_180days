/*
    Problem: Pyramid Pattern of Asterisks
    Description: This program prints a right-aligned pyramid pattern of asterisks (*)
                 where each row adds one more asterisk, and spaces are used for alignment.
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
        // Space printing - print spaces before stars
        for(col = 1; col <= n - row; col++)
        {
            cout << "  ";
        }
        
        // Star printing - print asterisks based on row number
        for(col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
};