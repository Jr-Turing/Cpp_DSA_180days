/**
 * @file Problem01.cpp
 * @brief Print Numbers in Range
 * @author Arvind Kumar
 *
 * Problem Statement:
 * This program demonstrates the use of a for loop by
 * printing numbers from 101 to 200. It shows how to iterate through
 * a specific range of numbers.
 *
 * Input: None
 * Output: Numbers from 101 to 200, each on a new line
 */

#include <iostream>
using namespace std;

int main()
{
    // Variable declaration for loop counter
    int i;

    // Print numbers from 101 to 200 using for loop
    for (i = 101; i <= 200; i++)
    {
        cout << i << endl; // Print current number and move to next line
    }

    return 0;
}

/* Notes:
- Loop initializes i to 101
- Continues while i is less than or equal to 200
- Increments i by 1 in each iteration
*/
