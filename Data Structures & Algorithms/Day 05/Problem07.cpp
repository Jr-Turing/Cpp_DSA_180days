/**
 * @file Problem07.cpp
 * @brief Prime Number Check
 * @author Arvind Kumar
 *
 * Problem Statement:
 * This program checks if a given number N is prime or not
 * A prime number is only divisible by 1 and itself
 * Example: 7 is prime (divisible by 1 and 7 only)
 *          4 is not prime (divisible by 1, 2, and 4)
*/

#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    int i, n;
    
    // Get input from user
    cout << "Enter the number: ";
    cin >> n;

    // Check if number is less than 2
    if(n < 2)
    {
        cout << "Not a prime number";
        return 0;
    }
    else
    {
        // Check for divisibility from 2 to n-1
        for(i = 2; i < n; i += 1)
        {
            if(n % i == 0)
            {
                cout << "Not a prime number";
                return 0;
            }
        }

        cout << "Prime Number";
        return 0;
    }
};