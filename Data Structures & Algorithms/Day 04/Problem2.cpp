/**
 * @file Problem2.cpp
 * @brief Demonstration of Type Casting in C++
 * @author Arvind Kumar
 * 
 * Problem Statement: 
 * This program demonstrates type casting between char and int data types,
 * showing how data might be lost when converting between different sizes.
 * 
 * Example shows:
 * 1. Converting char to int (implicit casting)
 * 2. Converting int to char (data loss due to size limitation)
 */

#include<iostream>
using namespace std;

int main()
{
    // Case 1: Assigning char to int
    int a = 10;
    char c = 'b';  // 'b' has ASCII value 98
    a = c;         // char to int — implicit casting
    cout<<a<<endl; 
    
    // Case 2: Assigning int to char
    // 8 bit char 255, 0 to 255

    int b = 1238;
    char c1 = 'd';  // Initial value of c2 = 'd' (ASCII 100)
    c1 = b;         // int to char — implicit casting
    cout<<c1;
    
    return 0;
}