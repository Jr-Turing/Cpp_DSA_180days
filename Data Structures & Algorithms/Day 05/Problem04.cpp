/**
 * @file Problem04.cpp
 * @brief Calculate power of a number
 * @author Arvind Kumar
 *
 * Problem Statement:
 * This program takes a number and its power as input from user
 *  and calculates the result using a loop.
*/

#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    int n, pow, num, i;
    
    // Get input from user
    cout << "Enter the number: ";
    cin >> n;
    cout << "Enter the power: ";
    cin >> pow;

    // Calculate power using loop
    num = n;
    for(i = 1; i < pow; i++)
    {
        num *= n;
    }

    // Display result
    cout << n << " raised to power " << pow << " is: " << num << endl;
    
    return 0;
}