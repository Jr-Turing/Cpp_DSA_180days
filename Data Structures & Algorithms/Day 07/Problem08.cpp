/*
    Problem: Repeated Character Triangle
    Description: This program prints a triangle pattern of characters
                 where each row uses a different character (a to e)
                 and repeats that character the same number of times as the row number.

    Example output:
        a
        b b
        c c c 
        d d d d 
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
        // Calculate character for current row
        char name = 'a' + row - 1;
        
        // Inner loop for columns - repeat the same character
        for(col = 1; col <= row; col++)
        {
            cout << name << " ";
        }
        // Move to next line after each row
        cout << endl;
   }
   return 0;  
};
