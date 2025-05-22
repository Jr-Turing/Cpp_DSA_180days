/*
    Problem: Alphabet Triangle with Spaces
    Description: This program prints a right-aligned triangle pattern of alphabets
                 where each row starts with 'A' and includes consecutive alphabets
                 up to the current row position. Leading spaces create the right-alignment.
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
        // Space printing - print spaces before characters
        for(col = 1; col <= n - row; col++)
        {
            cout << "  ";
        }
        
        // Character printing - Method 1: using column counter
        for(col = 1; col <= row; col++)
        {
            char name = 'A' + col - 1;
            cout << name << " ";
        }
        
        // Alternative Method 2: using char directly (commented out)
        // for(char name = 'A'; name <= 'A' + row - 1; name++)
        // {
        //     cout << name << " ";
        // }
        
        cout << endl;
    }
    return 0;
};