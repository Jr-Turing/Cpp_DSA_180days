/**
 * @file Problem6.cpp
 * @brief Loop Concept
 * @author Arvind Kumar
 * 
 *  This program demonstrates the basic concept of loops
 *  by printing "Coder Army" n times, where n is input by the user.
 * 
 * Input: A positive integer n
 * Output: "Coder Army" printed n times, each on a new line
*/

#include<iostream>
using namespace std;

int main()
{
    // Variable declaration for number of iterations
    int n;
    
    // Get input from user
    cout << "Enter number: ";
    cin >> n;

    // Loop to print "Coder Army" n times
    for(int i = 1; i <= n; i++)
    {
        cout << "Coder Army\n";
    }
    
    return 0; 
}