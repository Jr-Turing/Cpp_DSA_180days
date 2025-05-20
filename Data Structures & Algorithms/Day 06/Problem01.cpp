/*
    Problem: Number Pattern 1 to 5
    Description: This program prints a pattern of numbers from 1 to 5 in each row
                 resulting in a 5x5 grid of numbers.
                 Example output:
                 1 2 3 4 5
                 1 2 3 4 5
                 1 2 3 4 5
                 1 2 3 4 5 
                 1 2 3 4 5 
    Time Complexity: O(n²) - where n is the number of rows/columns
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
        // Inner loop for columns
        for(col = 1; col <= 5; col++)
        {
            cout << col << " ";
        }
        // Move to next line after each row is complete
        cout << endl;
    }
    return 0;
};