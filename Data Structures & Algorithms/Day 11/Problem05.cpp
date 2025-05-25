/*
    Problem: Break Statement in Loops
*/

#include<iostream>
using namespace std;

int main()
{
    int i;
    // Break statement demonstration
    // This loop is set to print numbers from 1 to 10, but will exit early
    for(i=1; i<=10; i++)
    {
        if(i==4)
            break;  // The break statement exits the loop completely when i equals 4

        cout<<i<<" ";  // Prints only 1 2 3 (loop terminates before 4 is printed)
    }
    return 0;
};