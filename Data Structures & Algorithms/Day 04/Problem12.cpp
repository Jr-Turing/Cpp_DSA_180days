/**
 * @file Problem12.cpp
 * @brief Week Day Finder
 * @author Arvind Kumar
 * 
 * Problem Statement: 
 * This program converts a number (1-7) to its corresponding
 * day of the week. It demonstrates the use of else-if ladder for 
 * multiple conditions.
 * 
 * Input: A number between 1 and 7
 * Output: Corresponding day of the week or "Invalid day" for invalid input
*/

#include<iostream>
using namespace std;

int main()
{
    // Variable declaration for day number
    int num;
    
    // Get input from user
    cout << "Enter number: ";
    cin >> num;

    // Convert number to day of week using else-if ladder
    if(num == 1)
        cout << "Monday";       // 1 represents Monday
    else if(num == 2)
        cout << "Tuesday";      // 2 represents Tuesday
    else if(num == 3)
        cout << "Wednesday";    // 3 represents Wednesday
    else if(num == 4)
        cout << "Thursday";     // 4 represents Thursday
    else if(num == 5)
        cout << "Friday";       // 5 represents Friday
    else if(num == 6)
        cout << "Saturday";     // 6 represents Saturday
    else if(num == 7)
        cout << "Sunday";       // 7 represents Sunday
    else
        cout << "Invalid day";  // Number is not between 1 and 7
    
    return 0;
}

/* Alternative implementation using switch statement:

switch(num) 
{
    case 1: cout << "Monday"; break;
    case 2: cout << "Tuesday"; break;
    case 3: cout << "Wednesday"; break;
    case 4: cout << "Thursday"; break;
    case 5: cout << "Friday"; break;
    case 6: cout << "Saturday"; break;
    case 7: cout << "Sunday"; break;
    default: cout << "Invalid day";
}
*/