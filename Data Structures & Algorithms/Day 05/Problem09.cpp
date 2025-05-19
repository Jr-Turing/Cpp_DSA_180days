/**
 * @file Problem09.cpp
 * @brief Print Reverse Sequence
 * @author Arvind Kumar
 *
 * Problem Statement:
 * This program prints numbers from N to 1 in reverse order
 * Example: For N = 5, prints: 5 4 3 2 1
*/

#include <iostream>
using namespace std;

int main()
{
    // Declare variable
    int n;
    
    // Get input from user
    cout << "Enter the number: ";
    cin >> n;

    // Print numbers in reverse order
    for(int i = n; i >= 1; i -= 1)
        cout << i << " ";
    return 0;
}

/* Note: Alternative version with hardcoded value
    int n = 10;
    for(int i = n; i >= 1; i -= 1)
        cout << i << " ";
*/