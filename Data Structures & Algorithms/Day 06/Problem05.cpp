/*
Print the square of numbers from 1 to 5 in a pattern.
Description: This program prints the square of numbers from 1 to 5 in a 5x5 grid pattern.
             Each row contains the squares of numbers 1 through 5 (1, 4, 9, 16, 25).
             The pattern repeats for 5 rows, creating a square grid.
    
                Example output:
                    1 4 9 16 25 
                    1 4 9 16 25 
                    1 4 9 16 25 
                    1 4 9 16 25 
                    1 4 9 16 25 
*/

#include <iostream>
using namespace std;

int main() 
{
    // Declare variables for row and column
    int row,col;

    // Outer loop for rows
    for(row=1; row<=5; row++)
    {
        // Inner loop for columns
        for(col=1; col<=5; col++)
        {
            cout<<col*col<<" "; // Print the square of the column number
        }
        cout<<endl;
    }
    return 0;
};

 