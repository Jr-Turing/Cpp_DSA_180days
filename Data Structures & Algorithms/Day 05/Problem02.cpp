/**
 * @file Problem02.cpp
 * @brief Arithmetic Progression Series
 * @author Arvind Kumar
 *
 * Problem Statement:
 * This program generates an arithmetic progression series
 * starting from a user input number 'n' up to 100, with a common
 * difference of 3. An AP series is a sequence where each number is
 * obtained by adding a constant difference to the previous number.
 *
 * Input: Starting number n
 * Output: AP series from n to 100 with common difference 3
 */

#include <iostream>
using namespace std;

int main()
{
    // Variable declaration for starting number
    int n;

    // Get starting number from user
    cout << "Enter the number: ";
    cin >> n;

    // Generate and print AP series with common difference 3
    for (int i = n; i <= 100; i += 3)
        cout << i << " "; // Print current number with space

    return 0;
}

/* Example:
   If n = 5, output will be: 5 8 11 14 ... 98
   Common difference = 3
   Each term = previous term + 3
*/