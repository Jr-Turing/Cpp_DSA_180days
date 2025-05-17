/**
 * @file Problem8.cpp
 * @brief Odd/Even Number Checker
 * @author Arvind Kumar
 * 
 * Problem Statement: 
 * This program determines if a given number is odd or even
 * using the modulus operator (%). A number is even if it's divisible 
 * by 2
 * 
 * Input: An integer number
 * Output: "Even" if the number is even, "Odd" if the number is odd
*/

#include<iostream>
using namespace std;

int main()
{
    // Variable declaration
    int num;
    
    // Get input from user
    cout << "Enter 1st number: ";
    cin >> num;

    // Check if number is even using modulus operator
    if(num % 2 == 0)
        cout << "Even";  // Number is divisible by 2
    else
        cout << "Odd";   // Number is not divisible by 2
    
    return 0; 
};