#include "UpperLower.h"

/*
* Return true if a string contains at least one upper-case letter and at least one lower-case letter.
* Works by looping through each char in the word.
* A boolean is set for an upper case char, and a boolean is set for a lower case char.
* both have to be true to return the word.
* Return false if conditions not met.
* Virtual is similar to overriding in Java
*/

bool UpperLower::filter (string word) {

    bool lower, upper = false;
    int length = word.length();

    for (int i=0; i < length; i++)
    {
        int c = word[i];
        if(isupper(c)){
            lower = true;
        }
        if(islower(c)){
            upper = true;
        }
    }
    if ((lower==true)&&(upper==true)){
        return true;
    }
    return false;
}

