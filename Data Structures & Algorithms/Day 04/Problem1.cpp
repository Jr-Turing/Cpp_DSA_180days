/**
 * @file Problem1.cpp
 * @brief Program to Sum of two numbers input by user
 * @author Arvind Kumar
 * 
 * Problem Statement: 
 * Write a program that takes two numbers as input from the user
 * and displays their sum.
 */

#include <iostream>
using namespace std;

int main() {
    // Variable declaration
    int a, b;
    
    // Input first number
    cout << "Enter your First number: ";
    cin >> a;
    
    // Input second number
    cout << "Enter your Second number: ";
    cin >> b;
    
    // Calculate and display sum
    cout << "Sum of numbers is: " << a + b << endl;
    
    return 0;  // Return 0 to indicate successful execution
}