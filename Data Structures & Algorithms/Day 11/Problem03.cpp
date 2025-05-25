/*
    Problem: Multiplication Table Using While Loop
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int i = 1; // Initialize counter variable

    while (i<=10) // Break condition - continue until i exceeds 10
    {
        cout<<i*n<<endl;  // Print n × i for the current value of i
        i++;              // Update counter for next iteration
    }
    return 0;
};

