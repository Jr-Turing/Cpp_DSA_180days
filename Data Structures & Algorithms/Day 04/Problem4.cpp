/**
 * @file Problem4.cpp
 * @brief Print Even Numbers
 * @author Arvind Kumar
 * 
 * Problem Statement: 
 * This program takes a number 'n' as input and prints
 * all even numbers between 1 and n.
 */

#include<iostream>
using namespace std;

int main()
{
    // Variable declaration
    int num;
    
    // Get input from user
    cout << "Enter the number: ";
    cin >> num;

    // Method 1: Using modulus operator to check even numbers
    for(int i = 1; i <= num; i++) 
    {
        // Check if number is even using modulus
        if(i % 2 == 0)
        {
            cout << i << " ";
        }
    }

    /* Alternative Method (commented out):
    // Method 2: Using step of 2 starting from 2

    // for(int i = 2; i <= num; i = i+2)
    // {
    //     cout << i << endl;
    // }
    */
    
    return 0; 
}