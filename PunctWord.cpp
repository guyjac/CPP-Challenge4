#include "PunctWord.h"

/*
* Return true if a string contains at least one least one lower-case letter and one punctuation.
* Works by looping through each char in the word.
* Return false if conditions not met.
* Virtual is similar to overriding in Java
*/

bool PunctWord::filter (string word) {

    bool letter, punct = false;
    int length = word.length();

    for (int i=0; i < length; i++)
    {
        int c = word[i];
        if(islower(c) || isupper(c))
            letter = true;
        if(ispunct(c))
            punct = true;
        if ((letter==true) && (punct==true)){
            return true;
        }
    }
    return false;
}



