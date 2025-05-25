/*
    Problem: Printing Numbers Using Do-While Loop
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int i = 1;  // Initialize counter variable

    // Do-while loop - the body executes at least once before checking the condition
    do
    {
        cout<<i<<" ";  // Print the current value of i
        i++;           // Increment counter for next iteration
    } while(i<=n);     // Continue loop until i exceeds n
    
    return 0;
};