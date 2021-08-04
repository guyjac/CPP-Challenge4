
#include "DigitCheck.h"

/*
* Return true if a string contains two adjacent digits
* Works by looping through the string and checking if n and n-1 is a digit.
* Start the loop on 1 so we can check -1 positions
* Virtual is similar to overriding in Java
*/

bool DigitCheck::filter (string word) {

    int length = word.length();

    for (int i=1; i < length; i++)
    {
        int b = word[i-1];
        int c = word[i];
        if(isdigit(c) && isdigit(b))
            return true;
    }
    return false;
}


