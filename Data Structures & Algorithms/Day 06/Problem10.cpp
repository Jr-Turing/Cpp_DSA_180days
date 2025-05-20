/*
    Problem: Star Pattern Generator
    Description: This program prints a pattern of stars (*) in an N×N grid,
                 where N is specified by the user.
                 Example output for N=3:
                 * * *
                 * * *
                 * * *
*/
#include <iostream>
using namespace std;

int main()
{
    // One time star printing (commented out)
    /*
    int n, i;
    cout << "Enter the number: ";
    cin >> n;

    for(i = 1; i <= n; i++)
    {
        cout << "*" << " ";
    }
    */

    // N times star printing (N×N grid)
    int n, i, j;
    cout << "Enter the number: "; // Prompt user for input
    cin >> n; // Read the value of n

    // Outer loop for columns
    for(j = 1; j <= n; j++)
    {
        // Outer loop for rows
        for(i = 1; i <= n; i++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
};