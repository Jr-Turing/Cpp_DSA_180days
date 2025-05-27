
// Problem: Reverse Integer 

#include<iostream>
using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        int ans = 0, rem;
        
        // Process each digit until the number becomes zero
        while(x != 0)
        {
            rem = x % 10;            // Extract the last digit
            x /= 10;                 // Remove the last digit
            
            // Check for integer overflow before updating ans
            // This check is necessary for 32-bit integers
            if (ans > INT_MAX/10 || ans < INT_MIN/10)
                return 0;
                
            ans = ans * 10 + rem;    // Build the reversed number
        }
        
        return ans;
    }
};

// Driver code to test the solution
int main()
{
    Solution s;
    int number;
    
    cout << "Enter an integer: ";
    cin >> number;
    
    cout << "Reversed integer: " << s.reverse(number) << endl;
    
    return 0;
}