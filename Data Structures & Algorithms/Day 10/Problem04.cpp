/*
    Problem: Comparison Operators
*/

/* 
== -> equal to equal (checks if two values are equal)
> -> greater than (checks if left operand is greater than right operand)
< -> less than (checks if left operand is less than right operand)
>= -> greater than or equal to (checks if left operand is greater than or equal to right operand)
<= -> less than or equal to (checks if left operand is less than or equal to right operand)
!= -> not equal to (checks if two values are not equal)
*/

#include<iostream>
using namespace std;

int main()
{
    // Comparison operator demonstration
    // All comparison operations return either 1 (true) or 0 (false)

    int a, b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;

    // Equal to (==) operator
    // if(a==b)
    // cout<<"yes";
    // else
    // cout<<"no";

    // Greater than (>), Less than (<), Greater than or equal to (>=), Less than or equal to (<=)
    // if(a>b)   // Checks if a is greater than b
    // if(a<b)   // Checks if a is less than b
    // if(a>=b)  // Checks if a is greater than or equal to b
    // if(a<=b)  // Checks if a is less than or equal to b
    // cout<<"yes";
    // else
    // cout<<"no";

    // Not equal to (!=) operator
    if(a!=b)   // Checks if a is not equal to b
        cout<<"yes";
    else
        cout<<"no";

    return 0;
}