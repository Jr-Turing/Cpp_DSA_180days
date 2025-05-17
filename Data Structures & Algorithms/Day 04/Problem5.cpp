/**
 * @file Problem5.cpp
 * @brief If-Else Demo
 * @author Arvind Kumar
 * 
 * Problem Statement: 
 * his program checks if a package meets the minimum
 * acceptance criteria based on its value. If the package value
 * is greater than 10, it is accepted; otherwise, it is rejected.
 */

#include<iostream>
using namespace std;

int main()
{
    // Variable declaration for package value
    int package;
    
    // Get package value from user
    cout << "Enter your choice Package: ";
    cin >> package;

    // Check if package meets acceptance criteria
    if(package > 10)
    {
        cout << "Accepted"; // Package value is greater than 10
    }
    else
    {
        cout << "Rejected"; // Package value is less than or equal to 10
    }
    
    return 0; 
};