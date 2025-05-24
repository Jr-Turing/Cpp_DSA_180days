/*
    Problem: Assignment Operators and Conditional Expressions
*/

#include<iostream>
using namespace std;

int main()
{
    // Assignment operator demonstration
    // int a = 10;
    // a += 15;    // Equivalent to a = a + 15, so a becomes 25
    // cout<<a;    // Would output: 25

    // Conditional expression with operator precedence
    // This demonstrates how comparison operators are evaluated from left to right
    if(5>4>3<2*4)    
        cout<<"Yes";
    else
        cout<<"No";
        
    return 0;
}