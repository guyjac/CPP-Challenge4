# C++ Assignment 2, ex2

The challenge:

•	There is also a header file for an abstract class called ReadFilteredWords, to be used a base class for developing three derived classes. 
•	This is declared as a subclass of ReadWords and contains a pure virtual function called filter which is intended to be used to select which words should be accepted and which should be rejected using some criterion. 
•	Implementations of this in the derived classes should take a word (as returned by getNextWord) as an argument and return true if the word satisfies the criterion. 


1.	The class declaration contains a function called getNextFilteredWord – this should return the next word from the input (obtained by calling getNextWord) that satisfies the criterion, or an empty string if there are no more words that satisfy it. (It is assumed that an empty string will never satisfy a filter, so it cannot be returned if there are more words that satisfy the filter.) You must implement this function in a new ReadFilteredWords.cpp file. 

2.	Three derived classes should be written, each with a different version of filter to override the virtual function. 

3.	In the first derived class the filter function should return true if its argument is a string that contains at least one upper-case letter and at least one lower-case letter.

4.	In the second class the filter function should return true if its argument is a string containing two or more adjacent digits (i.e. digits that occur in adjacent positions in the word, they may be the same or different digits). 

5.	In the third class the filter function should return true if its argument is a string that contains at least one letter and at least one punctuation character (as defined by the function ispunct declared in the header file <cctype>). 

6.	The three derived classes must be written in separate .cpp files, each with an associated .h file. 

7.	In a main function in a separate file write code that will allow the user to specify a file name and select which derived class should be used, then create an object of that class using the supplied file name as the argument to its constructor. The program should then process the whole file, repeatedly calling getNextFilteredWord until an empty string is returned, keeping track the number of occurrences of each filtered word returned by the function using a map.   

8.	You must not write three separate copies of code for the three derived classes; you must make use of the virtual function so you will have to use a pointer an object of type ReadFilteredWords. 

9.	After the processing of the file is complete the program should the total number of occurrences of filtered words, the number of distinct filtered words output, the number of entries in the map and the three words with the largest occurrence counts (along with their counts).  

10.	If there is more than one equally third-most frequent word you should output all of them, unless there are more than 10 in which case you may, if you wish, output the first ten followed by something like “and 15 more words”. 
