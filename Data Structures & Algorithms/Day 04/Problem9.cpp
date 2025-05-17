/**
 * @file Problem9.cpp
 * @brief Number Sign Checker
 * @author Arvind Kumar
 * 
 * Problem Statement: 
 * This program determines if a given number is positive,
 * negative, or zero using if-else statements. It demonstrates two ways
 * to solve the problem (nested if-else and else-if ladder).
 * 
 * Input: An integer number
 * Output: "Positive", "Negative", or "Zero" based on the input
*/

#include<iostream>
using namespace std;

/* Method 1: Using nested if-else (Alternative implementation)
int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    if(num > 0)
    {
        cout << "Positive";
    }
    else
    {
        if(num == 0)
        {
            cout << "Zero";
        }
        else
        {
            cout << "Negative";
        }
    }
    return 0;
}
*/

// Method 2: Using else-if ladder (Current implementation)
int main()
{
    // Variable declaration
    int num;
    
    // Get input from user
    cout << "Enter number: ";
    cin >> num;

    // Check if number is positive, zero, or negative
    if(num > 0)
        cout << "Positive";     // Number is greater than 0
    else if(num == 0)
        cout << "Zero";         // Number equals 0
    else 
        cout << "Negative";     // Number is less than 0
    
    return 0; 
};
