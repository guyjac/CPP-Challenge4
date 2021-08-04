#include "ReadFilteredWords.h"

/*
* Return the next word from the input (obtained by calling getNextWord from ReadWords.cpp)
* Loop runs whilst there is a "NextWord". Returns the string if it matches the filter
* Otherwise, return an empty string (end of file perhaps).
*/
string ReadFilteredWords::getNextFilteredWord(){

    while(isNextWord()){
        string foo = getNextWord();
        if(filter(foo))
            return foo;
    }
    return "";

}


