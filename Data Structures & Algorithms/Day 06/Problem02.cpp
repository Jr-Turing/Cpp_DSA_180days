/*
    Problem: Number Pattern 5 to 1
    Description: This program prints a pattern of numbers from 5 to 1 in each row
                 resulting in a 5x5 grid of descending numbers.
                 Example output:
                 5 4 3 2 1
                 5 4 3 2 1
                 5 4 3 2 1 
                 5 4 3 2 1
                 5 4 3 2 1 
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
        // Inner loop for columns (decreasing order)
        for(col = 5; col >= 1; col--)
        {
           cout << col << " ";
        }
        // Move to next line after each row is complete
        cout << endl;
    }
    
    return 0;
}