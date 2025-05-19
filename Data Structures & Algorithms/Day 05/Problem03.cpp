/**
 * @file Problem03.cpp
 * @brief Multiplication Table Generator
 * @author Arvind Kumar
 *
 * Problem Statement:
 * This program generates a multiplication table for a given number
 * using two different methods:
 * Method 1: Using multiplication operator
 * Method 2: Using addition (increments by the number)
 *
 * Input: A positive integer n
 * Output: Multiplication table of n up to 10
*/

#include <iostream>
using namespace std;

int main()
{
    // Variable declarations
    int n, i;

    // Get input from user
    cout << "Enter the table: ";
    cin >> n;

    // Method 1: Using multiplication operator
    cout << "Method 1 (Traditional):" << endl;
    for (i = 1; i <= 10; i++)
        cout << n << " * " << i << " = " << n * i << endl;

    cout << "\nMethod 2 (Using Addition):" << endl;
    // Method 2: Using increments of n
    for (i = n; i <= 10 * n; i += n)
        cout << i << endl;

    return 0;
}

/* Example Output for n = 5:
Method 1 (Traditional):
5 * 1 = 5
5 * 2 = 10
...
5 * 10 = 50

Method 2 (Using Addition):
5
10
15
...
50
*/