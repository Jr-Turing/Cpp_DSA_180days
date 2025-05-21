/*
    Problem: Decreasing Number Triangle Pattern
    Description: This program prints a triangle pattern of decreasing numbers
                 starting from 5. Each row adds one more number in decreasing sequence.

    Example output:
        5
        5 4
        5 4 3
        5 4 3 2 
        5 4 3 2 1
*/

#include <iostream>
using namespace std;

int main()
{    // Declare variables
    int i, j, n;
    cout << "Enter the number: ";
    cin >> n;  // Input the number of rows

    // Outer loop for rows
    for(i = 1; i <= n; i++)
    {
        // Inner loop for columns - print decreasing sequence from 5
        for(j = n; j >= (n - i + 1); j--)
        {
            cout << j << " ";
        }
        // Move to next line after each row
        cout << endl;
    }
    return 0;
};