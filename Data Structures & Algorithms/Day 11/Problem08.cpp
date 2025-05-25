/*
    Problem: Variable Scope and Visibility
*/

#include<iostream>
using namespace std;

int main()
{
    int n = 10;  // Variable in the outer scope
    int i = 20;  // Variable used in the for loop

    // Block scope demonstration (currently commented out)
    // Shows how a variable with the same name in an inner scope
    // can shadow a variable in an outer scope
    // if(i==30)
    // {
    //     int n = 20;     // Inner scope variable 'n' shadows outer 'n'
    //     cout<<n<<" ";   // Would print 20 (the inner scope n)
    // }
    // cout<<n;            // Would print 10 (the outer scope n)

    // For loop with only the condition and increment parts
    // (initialization part is omitted since i is already initialized)
    for(; i<=30; i++)
    {
        cout<<i<<" ";  // Prints numbers from 20 to 30
    }
    return 0;
};