/*
    Problem: Cube Pattern
    Description: This program prints a pattern of cubes (n³) of numbers from 1 to 5
                 in each row, resulting in a 5x5 grid of cubes.
                 Example output:
                 1 8 27 64 125
                 1 8 27 64 125
                 1 8 27 64 125
                 1 8 27 64 125
                 1 8 27 64 125
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
        // Inner loop for columns - calculate and display cube of each number
        for(col = 1; col <= 5; col++)
        {
            cout << col * col * col << " ";
        }
        // Move to next line after each row is complete
        cout << endl;
    }
    return 0;
}