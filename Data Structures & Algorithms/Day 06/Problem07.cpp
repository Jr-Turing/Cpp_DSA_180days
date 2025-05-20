/*
    Problem: Character Pattern (a to e)
    Description: This program prints a pattern of characters from 'a' to 'e'
                 where each row contains the same character repeated 5 times,
                 and rows progress from 'a' to 'e'.
                 Example output:
                 a a a a a 
                 b b b b b 
                 c c c c c
                 d d d d d
                 e e e e e
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
        char name = 'a' + row - 1; // Calculate character for current row (ASCII value of 'a' is 97)
        
        // Inner loop for columns
        for(col = 1; col <= 5; col++)
        {
            cout << name << " ";
        }
        // Move to next line after each row is complete
        cout << endl;
    }
    
    return 0;
}