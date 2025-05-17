/**
 * @file Problem10.cpp
 * @brief Squares of Natural Numbers
 * @author Arvind Kumar
 * 
 * Problem Statement: 
 * This program prints the squares of first n natural numbers.
 * For each number from 1 to n, it displays the number and its square.
 * 
 * Input: A positive integer n
 * Output: For each number i from 1 to n, prints "i square is: i*i"
*/

#include<iostream>
using namespace std;

int main()
{
    // Variable declaration for upper limit
    int n;
    
    // Get input from user
    cout << "Enter the number: ";
    cin >> n;

    // Calculate and print squares of numbers from 1 to n
    for(int i = 1; i <= n; i++)
    {
        cout << i << " square is: ";  // Print current number
        cout << i*i << endl;          // Print its square
    }
    
    return 0;
};