/**
 * @file Problem10.cpp
 * @brief Sum of Squares of N Natural Numbers
 * @author Arvind Kumar
 *
 * Problem Statement:
 * This program calculates the sum of squares of first N natural numbers
 * For N = 3, it calculates: 1² + 2² + 3²
 * Example: For N = 3, result = 1 + 4 + 9 = 14
*/

#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    int n, i, sum = 0;
    
    // Get input from user
    cout << "Enter the number: ";
    cin >> n;

    // Calculate sum of squares
    for(i = 1; i <= n; i += 1)
    {
         sum += i * i;
    }
    
    // Display result
    cout << "Sum of squares from 1 to " << n << " is: " << sum;

    return 0;
};