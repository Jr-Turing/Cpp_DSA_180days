/* Print 1 to 5 numbers in row & col
Description: This program prints a pattern of numbers in a 5x5 grid.
                  Each row contains the same number repeated.
                  Example output:
                  1 1 1 1 1
                  2 2 2 2 2
                  3 3 3 3 3
                  4 4 4 4 4
                  5 5 5 5 5
Time Complexity: O(n²) - where n is the number of rows/columns
*/
#include<iostream>
using namespace std;

int main()
{
    // Declare variables for iteration
    int row,col;
    
    // Outer loop for rows
    for(row=1; row<=5; row++)
    {
        for(col=1; col<=5; col++) // Inner loop for columns
        {
            cout<<row<<" "; // Print the current row number
        }
        cout<<endl;
    }
    return 0; // Return 0 to indicate successful
}