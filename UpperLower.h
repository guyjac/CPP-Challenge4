#ifndef _UPPERLOWER_H
#define _UPPERLOWER_H

#include "ReadFilteredWords.h"
/*
* Return true if a string contains at least one upper-case letter and at least one lower-case letter.
* Works by looping through each char in the word.
* A boolean is set for an upper case char, and a boolean is set for a lower case char.
* both have to be true to return the word.
* Return false if conditions not met.
* Virtual is similar to overriding in Java
*/

class UpperLower: public ReadFilteredWords
{
public:
    UpperLower(const char *fname) : ReadFilteredWords(fname){
    }
    virtual bool filter (string word);


private:
    //int length;
};

#endif
