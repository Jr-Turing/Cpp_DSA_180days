/*
    Problem: Day of the Week Using Switch Statement
*/

#include<iostream>
using namespace std;

int main()
{
    int i;
    cout<<"Enter the number: ";
    cin>>i;

    // Switch statement to map numbers to days of the week
    switch (i)
    {
        case 1:
        cout<<"Mon";   // Monday for input 1
        break;         // Break to exit the switch statement

        case 2:
        cout<<"Tue";   // Tuesday for input 2
        break;

        case 3:
        cout<<"Wed";   // Wednesday for input 3
        break;

        case 4:
        cout<<"Thu";   // Thursday for input 4
        break;

        case 5:
        cout<<"Fri";   // Friday for input 5
        break;

        case 6:
        cout<<"Sat";   // Saturday for input 6
        break;

        case 7:
        cout<<"Sun";   // Sunday for input 7
        break;

        default:       // Executed if i doesn't match any case
        cout<<"Enter the valid day.";
    }
    return 0;
};