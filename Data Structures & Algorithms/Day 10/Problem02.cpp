/*
    Problem: Unary Increment and Decrement Operators
*/

#include<iostream>
using namespace std;

int main()
{
    /* Post-increment example 
       In post-increment, the original value is first used in the expression,
       then the variable is incremented */
    
    // int a = 10; 
    // int b = a++;    // b gets the current value of a (10), then a is incremented to 11
    // cout<<b<<" "<<a;    // Output: 10 11

    /* Pre-decrement example
       In pre-decrement, the variable is first decremented,
       then the new value is used in the expression */
    
    int a = 10;
    int b = a--;    // a is decremented to 9, but b gets the original value of a (10)
    cout<<b<<" "<<a;    // Output: 10 9
    
    return 0;
};