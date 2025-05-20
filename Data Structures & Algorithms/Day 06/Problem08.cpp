/*
    Problem: Character Pattern (a to e in columns)
    Description: This program prints a pattern of characters from 'a' to 'e'
                 in each row. Each column displays a specific character
                 from 'a' to 'e' in sequence.
                 Example output:
                 a b c d e
                 a b c d e
                 a b c d e
                 a b c d e
                 a b c d e
*/
#include <iostream>
using namespace std;

int main()
{
    // Method 1: Using character variable directly
    /*
    int row;
    char col;

    for(row = 1; row <= 5; row++)
    {
        for(col = 'a'; col <= 'e'; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    */

    // Method 2: Using calculation for characters
    int row, col;

    for(row = 1; row <= 5; row++)
    {
        // char name = 'a'; initialization
        for(col = 1; col <= 5; col++)
        {
            char name = 'a' + col - 1;  // Calculate character based on column
            // cout << name+col-1 << " ";  // Incorrect calculation
            cout << name << " ";
        }
        cout << endl;
    }
    return 0;
};