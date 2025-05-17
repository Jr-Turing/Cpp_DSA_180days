/**
 * @file Problem11.cpp
 * @brief Vowel or Consonant Checker
 * @author Arvind Kumar
 * 
 * Problem Statement: 
 * This program determines if a given character is a vowel
 * or consonant. It checks for lowercase vowels (a, e, i, o, u).
 * Note: This is a simple version that only checks lowercase vowels.
 * 
 * Input: A single character
 * Output: "Vowel" if the character is a vowel, "Consonant" otherwise
*/

#include<iostream>
using namespace std;

int main()
{
    // Variable declaration for character input
    char c;
    
    // Get input from user
    cout << "Enter character: ";
    cin >> c;

    // Check if character is a vowel using else-if ladder
    if(c == 'a')
        cout << "Vowel";        // a is a vowel
    else if(c == 'e')
        cout << "Vowel";        // e is a vowel
    else if(c == 'i')
        cout << "Vowel";        // i is a vowel
    else if(c == 'o')
        cout << "Vowel";        // o is a vowel
    else if(c == 'u')
        cout << "Vowel";        // u is a vowel
    else
        cout << "Consonant";    // Any other character is a consonant
    
    return 0;
};

/* Alternative implementation using switch or logical operators:
if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    cout << "Vowel";
else
    cout << "Consonant";
*/