/*
    Problem: Printing Numbers Using While Loop
*/

#include<iostream>
using namespace std;

int main()
{
    int n; 
    cout<<"Enter the number: ";
    cin>>n;
    int i = 1; // Initialize counter variable

    while(i<=10) // Break condition - loop continues until i exceeds 10
    {
        cout<<i<<endl;  // Print the current value of i
        i++;           // Update - increment counter for next iteration
    }
    return 0;
};