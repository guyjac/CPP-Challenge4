#ifndef _DIGITCHECK_H
#define _DIGITCHECK_H

#include "ReadFilteredWords.h"

/*
* Return true if a string contains two adjacent digits
* Works by looping through the string and checking if n and n-1 is a digit.
* Start the loop on 1 so we can check -1 positions
* Virtual is similar to overriding in Java
*/

class DigitCheck: public ReadFilteredWords
{
public:
    DigitCheck(const char *fname) : ReadFilteredWords(fname){
    }
    virtual bool filter (string word);


private:

};

#endif
