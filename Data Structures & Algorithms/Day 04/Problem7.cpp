/**
 * @file Problem7.cpp
 * @brief Pass/Fail Checker
 * @author Arvind Kumar
 * 
 * Problem Statement: 
 * This program determines if a student has passed or failed
 * based on their marks. The passing criteria is marks > 33.
 * 
 * Input: Student's marks (integer)
 * Output: "Pass" if marks > 33, "Fail" otherwise
*/

#include<iostream>
using namespace std;

int main()
{
    // Variable declaration for student's marks
    int marks;
    
    // Get input from user
    cout << "Enter your marks: ";
    cin >> marks;

    // Check if student passed or failed
    if(marks > 33)
        cout << "Pass";  // Student passed
    else
        cout << "Fail";  // Student failed
    
    return 0;
}