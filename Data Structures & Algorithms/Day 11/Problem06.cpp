/*
    Problem: Continue Statement in Loops
*/

#include<iostream>
using namespace std;

int main()
{
    // continue statement demonstration
    // This loop prints numbers from 1 to 100, except those divisible by 4
    int i;
    for(i=1; i<=100; i++)
    {
        if(i%4==0)
            continue; // continue statement skips the rest of the current iteration and jumps to the next iteration

        cout<<i<<" ";  // This line is skipped when i is divisible by 4
    }
    return 0;
};