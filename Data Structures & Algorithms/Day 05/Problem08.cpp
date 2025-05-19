/**
 * @file Problem08.cpp
 * @brief Fibonacci Series
 * @author Arvind Kumar
 *
 * Problem Statement:
 * This program finds the Nth number in Fibonacci series
 * Fibonacci Series: Each number is sum of previous two numbers
 * [0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...]
 * Example: For N = 5, result = 3 (5th number in series)
*/

#include <iostream>
using namespace std;
 
int main()
{
    // Declare variables (last = previous to pre, pre = previous number, curr = current number)
    int n, i, last = 0, pre = 1, curr;
    
    // Get input from user
    cout << "Enter the number: ";
    cin >> n;

    // Calculate Nth Fibonacci number
    for(i = 3; i <= n; i++)
    {
        curr = pre + last;  // Current number is sum of previous two
        last = pre;         // Update last to previous value
        pre = curr;         // Update previous to current value
    }
    
    // Display result
    cout << "Fibonacci number at position " << n << " is: " << curr;
    
    return 0;
};