/*
    Problem: Finding Factors Using While Loop
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int i = 1; // Initialize counter variable

    while(i<=n) // Break condition - continue until i exceeds n
    {
        if(n%i == 0)  // Check if i is a factor of n (divides n without remainder)
        {
            cout<<i<<"  ";  // Print the factor
        }
        i++; // Update counter for next iteration
    }
    return 0;
};