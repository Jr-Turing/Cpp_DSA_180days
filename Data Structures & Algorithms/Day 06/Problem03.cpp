/*
    Problem: Number Pattern 1 to 25
    Description: This program prints a pattern of numbers from 1 to 25 in a 5x5 grid.
                 Numbers are printed sequentially from left to right, top to bottom.
                 Example output:
                 1  2  3  4  5
                 6  7  8  9  10
                 11 12 13 14 15
                 16 17 18 19 20
                 21 22 23 24 25
    Time Complexity: O(n²) - where n is the number of rows/columns
*/
#include <iostream>
using namespace std;

int main()
{
    // Method 1: Using a counter variable
    /*
    int row, col, count = 1;
    for(row = 1; row <= 5; row++)
    {
        for(col = 1; col <= 5; col++)
        {
            cout << count << " ";
            count = count + 1;
        }
        cout << endl;
    }
    */

    // Method 2: Using formula (row-1)*5+col to calculate position
    int row, col;

    // Outer loop for rows
    for(row = 1; row <= 5; row = row + 1)
    {
        // Inner loop for columns
        for(col = 1; col <= 5; col = col + 1)
        {
            cout << (row - 1) * 5 + col << " "; 
        }
        cout << endl;
    }
    
    return 0;
}