/*
    Problem: Logical Operators
*/

/*
&& -> Logical AND (true only if both operands are true)
|| -> Logical OR (true if at least one operand is true)
!  -> Logical NOT (inverts the boolean value: true becomes false, false becomes true)
*/

#include<iostream>
using namespace std;

int main()
{
    // Logical operator demonstrations
    
    // Example 1: Logical AND (&&) 
    // Checks if a variable is greater than both other variables
    int a, b, c;
    cout<<"Enter the value a, b, c: ";
    cin>>a>>b>>c;
    if (a>b && a>c)  // true only if both (a>b) AND (a>c) are true
        cout<<"yes";
    else
        cout<<"no";

    // Example 2: Logical OR (||) 
    // Checks if a character is a vowel
    char name = 'b';
    if(name=='a' || name=='e' || name=='i' || name=='o' || name=='u')  // true if ANY condition is true
        cout<<"vowel";
    else
        cout<<"consonant";

    // Example 3: Logical NOT (!)
    // Converts any non-zero value to 0 (false) and 0 to 1 (true)
    cout<<!23<<endl;  // 23 is non-zero (true), !23 is false (0)
    
    return 0;
};
