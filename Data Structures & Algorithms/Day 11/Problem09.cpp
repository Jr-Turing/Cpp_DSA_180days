/*
    Problem: Multiplication Table Using Do-While Loop
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int i=1; // Initialize counter
    
    // Do-while loop to generate multiplication table
    do{
        // cout<<i<<endl;       // Would print the multiplier
        cout<<n*i<<endl;        // Prints n × i for each iteration
        i++;                    // Update counter for next iteration
    }while(i<=10);              // Break condition - continue until multiplier reaches 10
    //while(i<=n);              // Alternative break condition (commented out)
    
    return 0;
};