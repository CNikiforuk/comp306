//: TMA1Question1.cpp

/* 
 Title: TMA1Question1.cpp
 Description: Counting words from input file with C++
 Date: May 20, 2015
 Author: Carlos Nikiforuk
 ID: 3201280
 Version: 1.0
 Copyright: 2015 Carlos Nikiforuk
*/

/*
DOCUMENTATION
 
 Program Purpose:
 	Counts the number of words from standard input, and then displays the count.

 Compile (assuming Cygwin is running): make -f TMA1Question1Makefile
 Execution (assuming Cygwin is running): ./TMA1Question1 < <inFile>
 
 Notes: MAXWORDS number of words are stored in an array.
        I imagine I will be adding to this code for future assignments
 
 Classes: none

 Functions:
    getNextWord(void) - returns string containing next word from standard input.                     
 
 Variables:
 	words - array of strings containing all words retrieved
 	wordCount - int - counts how many words retrieved have been
    newWord - string used to store current word retrieved
    
*/
/*
 TEST PLAN
 
 Normal case  (input file):
    
    >211 words found.
    
 Normal case  (no input file, typing):
 
    >you can enter words manually
    >and choose to end the input
    >by pressing control D.
    
    >15 words found.
    
 Discussion:
    The file data.dat was used as test input and for these examples
 
*/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
using std::string;

#define MAXWORDS 512    //max number of words to store
string getNextWord(void);   //getNextWord forward declaration

int main(void) {
    
    #ifdef DEBUG
    printf("DEBUG MODE \n");
    #endif

    string words[MAXWORDS];
    string newWord;
    int wordCount = 0; 

    while(cin.good() && !cin.eof()){
        newWord = getNextWord();
        #ifdef DEBUG
        cout << newWord << endl;
        #endif 
        if(!newWord.empty()){
            words[wordCount++%MAXWORDS] = newWord;   
        }
    }
                                  
    cout << endl << wordCount << " words found. " << endl;
    return 0;

}
//###############################
string getNextWord(void){
//returns string containing next words between whitespace
//###############################

    string word;
	char ch;
    
    while (cin.good() && !isalpha(ch = cin.get()) );
	if (cin.good()) do{ 
            ch = tolower(ch);
            word += ch;
            ch=cin.get();
        } while ( ch != ' ' && !cin.eof());

	if(!word.empty()){ 
			word+='\0';
			return word; 
			} 
	return "";
    
}
