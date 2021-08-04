#ifndef _PUNCTWORD_H
#define _PUNCTWORD_H

#include "ReadFilteredWords.h"
/*
* Return true if a string contains at least one least one lower-case letter and one punctuation.
* Works by looping through each char in the word.
* Return false if conditions not met.
* Virtual is similar to overriding in Java
*/
class PunctWord: public ReadFilteredWords
{
public:
    PunctWord(const char *fname) : ReadFilteredWords(fname){
    }
    virtual bool filter (string word);


private:

};

#endif

