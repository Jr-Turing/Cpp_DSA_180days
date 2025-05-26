/*
    Problem: Decimal to Binary Conversion
*/

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the decimal number: ";
    cin>>num;
    
    // Variables for calculation
    int rem;     // Stores the remainder (0 or 1) when dividing by 2
    int ans=0;   // Accumulates the binary result
    int mul=1;   // Place value multiplier (powers of 10: 1, 10, 100, etc.)

    // Process the decimal number until it becomes zero
    while(num>0)
    {
        // Calculate remainder when divided by 2 (this is the binary digit)
        rem = num%2;  // Alternative: we can use bitwise operator num & 1
        
        // Integer division by 2 for next iteration
        num /= 2;     // Alternative: num >>= 1 (right shift by 1 bit)
        
        // Build the binary number from right to left
        ans += rem*mul;
        
        // Increase place value for next digit (multiply by 10 for next position)
        mul *= 10;
    }
    
    // Display the binary equivalent
    cout<<"Binary equivalent: "<<ans<<endl;
    
    return 0;
};