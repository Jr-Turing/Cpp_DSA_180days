
// Problem: Leap Year Check

#include<iostream>
using namespace std;

//Q0) for an input year N, find whether the year is a leap or not.
class Solution
{
public:
    int isleap(int N)
    {
        // A year is a leap year if it's divisible by 400
        if(N % 400 == 0)
            return 1;
        // A year is also a leap year if it's divisible by 4 but not by 100
        else if(N % 4 == 0 && N % 100 != 0)
            return 1;
        // Otherwise, it's not a leap year
        else 
            return 0;
    }
};

// Driver code to test the solution
int main()
{
    Solution s;
    int year;
    
    cout << "Enter a year: ";
    cin >> year;
    
    if(s.isleap(year))
        cout << year << " is a leap year" << endl;
    else
        cout << year << " is not a leap year" << endl;
    
    return 0;
};