/**
 * @file Problem06.cpp
 * @brief Factorial Calculator
 * @author Arvind Kumar
 *
 * Problem Statement:
 * This program calculates the factorial of a given number N
 * Factorial of N = N! = N × (N-1) × (N-2) × ... × 2 × 1
 * Example: 5! = 5 × 4 × 3 × 2 × 1 = 120
*/

#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    int n, i, fact = 1;
    
    // Get input from user
    cout << "Enter the number: ";
    cin >> n;

    // Calculate factorial
    for(i = 2; i <= n; i += 1)
    {
        fact *= i;
    }
    
    // Display result
    cout << "Factorial of " << n << " is: " << fact;

    return 0;
};