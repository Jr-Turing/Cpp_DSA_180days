/**
 * @file Problem011.cpp
 * @brief Alphabet Patterns
 * @author Arvind Kumar
 *
 * Problem Statement:
 * This program prints all lowercase alphabets from 'a' to 'z'
 * using a loop. Each alphabet is printed with a space separator.
 * Example output: a b c d ... x y z
*/

#include <iostream>
using namespace std;

int main()
{
    // Declare variable to store current character
    char name;
    
    // Print alphabets from 'a' to 'z'
    for(name = 'a'; name <= 'z'; name += 1)
        cout << name << " ";
    return 0;
};