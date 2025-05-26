/*
    Problem: Binary to Decimal Conversion
*/

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the binary number: ";
    cin>>num;
    
    // Variables for calculation
    int mul=1;   // Represents the place value (powers of 2: 2^0, 2^1, 2^2, etc.)
    int ans=0;   // Accumulates the decimal result
    int rem;     // Stores the current binary digit (0 or 1)

    // Process each digit of the binary number from right to left
    while(num>0)
    {
        // Extract the rightmost digit
        rem = num%10;
        
        // Remove the processed digit
        num = num/10;
        
        // Add the contribution of current digit (rem * current power of 2)
        ans = mul*rem + ans;
        
        // Increase place value for next digit (multiply by 2 for next power)
        mul *= 2;
    }
    
    // Display the decimal equivalent
    cout<<"Decimal equivalent: "<<ans<<endl;
    
    return 0;
};