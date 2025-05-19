/**
 * @file Problem05.cpp
 * @brief Sum of N Natural Numbers
 * @author Arvind Kumar
 *
 * Problem Statement:
 * This program calculates the sum of first N natural numbers
 * using two different approaches:
 * 1. Using loop (commented out) - Time Complexity: O(n)
 * 2. Using mathematical formula - Time Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main()
{
    int n, i, sum = 0; //logic by guddu bhaiya - using loop approach
    cout << "Enter the number: ";
    cin >> n;

    // Method 1: Using loop 
    // for(i = 1; i <= n; i += 1)
    // {
    //     sum += i;
    // }
    // cout << sum;

    // Method 2: Using mathematical formula
    cout << (n * (n + 1)) / 2;  //logic by bablu bhaiya - using mathematical formula
    
    return 0;
}