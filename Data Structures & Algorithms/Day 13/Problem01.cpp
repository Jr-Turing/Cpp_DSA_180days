// Problem: Add Digits

#include<iostream>
using namespace std;

class Solution
{
public:
    int addDigits(int num)
    {
        // Continue until the number is a single digit (1-9)
        while(num > 9)
        {
            int ans = 0, rem;
            
            // Calculate sum of digits in the current number
            while(num != 0)
            {
                rem = num % 10;      // Extract the last digit
                num /= 10;           // Remove the last digit
                ans += rem;          // Add the digit to the sum
            }
            
            // Update the number for the next iteration
            num = ans;
        }
        
        // Return the single-digit result
        return num;
    }
};

// Driver code to test the solution
int main()
{
    Solution s;
    int number;
    
    cout << "Enter a number: ";
    cin >> number;
    
    cout << "Digital root: " << s.addDigits(number) << endl;
    
    return 0;
};