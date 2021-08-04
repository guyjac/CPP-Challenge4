using namespace std;

#include <list>
#include <utility>

#include "UpperLower.h"
#include "PunctWord.h"
#include "DigitCheck.h"
#include "ReadFilteredWords.h"


/*
* Specify a filename to search, this is input using cin
* This input is then used to create an object of the filter, using a pointer to the readfilterwords class.
* Store all found words in variable wordmap of type map
*/
main(){

    string filename;
    int choice;
    map <string, int> wordmap;

    cout << "Please enter a filename to search \n";
    cin >> filename;
    cout << "Please choose a search option \n";
    cout << "[1]Search string containing adjacent digits \n";
    cout << "[2]Search for string containing an upper and lowercase letter \n";
    cout << "[3]Search for string containing punctuation and letter(s) \n";
    cin >> choice;

    //Make a pointer an object of type ReadFilteredWords.
    ReadFilteredWords *n;

    if(choice == 1){
        n = new DigitCheck(filename.c_str());
    }
    if(choice == 2){
        n = new UpperLower(filename.c_str());
    }
    if(choice == 3){
        n = new PunctWord(filename.c_str());
    }

    bool running = true;
    string wp;

    //Prints the values unless wp is equal to blank
    //Keep track of words in variable wordmap
    while(running){
        wp = n -> getNextFilteredWord();
        cout << wp << endl;
        if(wp == ""){
            running = false;
        }
        else
            wordmap[wp]++;
    }

    /*
    * Create a pair object that stores word.first and word.second
    * note we have stored ints first, this is so sort occurs on the int
    */
    list<pair<int,string>> sortedlist;

    /*
    * Code to display map statistics, loops through the word map
    * Increment an int to count total words and also prints found words and occurrence
    */
    int total = 0;
    for(auto words:wordmap){
        cout << "Entry '" << words.first << "' occurred " << words.second << " times." << endl ;
        total += words.second;
        //Make a list of pairs for ordering later..
        sortedlist.push_back(make_pair(words.second, words.first) );
    }
    cout << endl << "There are a total of " << total << " distinct words." << endl << endl;

    cout << "The top three words were:" << endl;

    //Sort the new list and reverse it
    sortedlist.sort();
    sortedlist.reverse();

    //Initialise vars for our sorting of high scores
    int counter = 0;
    int mw = 0;
    bool mwf = false;
    int prev = 0;

    //Print the three biggest scores, end the loop on the third score
    list<pair<int,string>>::iterator it;
    for (it = sortedlist.begin(); it != sortedlist.end(); ++it){
        //Print the top 3 scores
        if (counter <3){
            cout << counter+1 << ": " <<  it -> second << " - " <<it -> first <<  endl;
            prev = it -> first;
        }

        //If the fourth high score is the same third, print it, unless we have printed 10 already
        if(counter >3 && it -> first == prev){
            if(counter < 13)
            cout << counter+1 << ": " <<  it -> second << " - " <<it -> first <<  endl;
        }

        //If there are still MORE WORDS
        if(counter > 13 && it -> first == prev){
            mw++;
            mwf=true;
        }
        counter++;
    }

    //Occurs when there have been 10 extra scores and still more the same
    if (mwf)
        cout << "And " << mw << " more.";

}



