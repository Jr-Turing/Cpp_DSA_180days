/**
 * @file Problem3.cpp
 * @brief Compare Two Numbers
 * @author Arvind Kumar
 * 
 * Problem Statement: 
 * his program takes two numbers as input and checks
 * if the first number is greater than the second number.
 * 
 * Output: 
 *  "Yes" if first number is greater
 *  "No" if first number is not greater
 */

#include <iostream>
using namespace std;

int main()
{
    // Variable declaration
    int a, b;
    
    // Input first number
    cout << "Enter 1st number: ";
    cin >> a;
    
    // Input second number
    cout << "Enter 2nd number: ";
    cin >> b;

    // Compare and output result
    if (a > b) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    
    return 0; 
}