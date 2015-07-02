//: TMA2Question1.cpp

/* 
 Title: TMA2Question1.cpp
 Description: Example DVD rental class and demo.
 Date: June 4, 2015
 Author: Carlos Nikiforuk
 ID: 3201280
 Version: 1.0
 Copyright: 2015 Carlos Nikiforuk
*/

/*
DOCUMENTATION
 
 Program Purpose:
 	Load DVD info from input file and store in dvd class, then print it out.
    
 Compile: make -f TMA2Question1_Makefile
 Execution: ./TMA2Question1 TMA2Question1.dat
 
 Notes:
    Data format from file is as follows:  <ID>,<TITLE>,<COST>.
	Will only read MAXLINESIZE chars from each line, and MAXLINES from input file
    If format is bad, data will still be parsed but not very useful.

 Classes:
    dvd - contains all necessary info for DVD.
		- int id, string name, float cost, bool rented
        - dvd.h contains interface, dvd.cpp contains implentation
		

 Variables:
    inFile - file handle for user input file
 	line - char array of MAXLINESIZE used to store the line being read from file
    lines - array containing strings
    lineCount - number of lines entered, acts as index
    dvdList - array of dvd objects
    dvdCount - number of dvdObjects, acts as index
    tokens - static function variable containing split tokens for split function
 
*/

/*
 TEST PLAN
 
  Normal case:
 	>ID  Title                     Rented    Cost
	>-------------------------------------------
	>0 : The Prestige              false    $2.95
	>1 : Princess Mononoke         true     $3.50
	>2 : The Shawshank Redemption  true     $3.95
	>3 : The Godfather             false    $3.95
	>4 : The Dark Knight           true     $2.95
	>5 : Schindler's List          true     $4.95
	>6 : Interstellar              false    $7.95
	>7 : Spirited Away             true     $2.95
	>8 : Pan's Labyrinth           true     $2.25
	>9 : Fight Club                false    $4.95

 Bad exec case 1 (wrong number of arguments):
    >Usage: %s <inFile>
    
 Bad exec case 2 (input file does not exist):
    >Could not open file.
    >Usage: %s <inFile>
    
 
 Discussion:
	Built with the idea that each physical DVD would have an unique ID for individual tracking.
    This could cause data inconsistency between physical dvd's of same title.
    (not a particularily good database design)

	TMA2Question1.dat is the test input file.
	
*/

#include "TMA2Question1_dvd.h"
#include <stdlib.h>
#include <fstream>

const int MAXLINESIZE = 1000;
const int MAXLINES = 100;

string *split(string, string);

int main (int argc, char *argv[]){
    
    ifstream is;
    char line[MAXLINESIZE];
    string lines[MAXLINES];
    int lineCount = 0;
    dvd dvdList[MAXLINES];
    int dvdCount = 0;
    

	//Check usage and attempt to open file
    if(argc < 2)
	{
		fprintf(stderr, "\nUsage: %s <inFile>\n", argv[0]);
		return -1;
	}
	is.open(argv[1]);
    if((is.rdstate() & std::ifstream::failbit ) != 0 ){
        fprintf(stderr, "\nCould not open file %s\nUsage: %s <inFile>\n", argv[1], argv[0]);
        return -1;
    }

	#ifdef DEBUG
    cout << "DEBUG MODE\n";
    #endif

	//retrieve lines from file
    while(is.getline(line, MAXLINESIZE) && lineCount < MAXLINES){
        lines[lineCount++] = string(line);

		#ifdef DEBUG
    	cout << lineCount << " ";
    	#endif
    }

	#ifdef DEBUG
	cout << "\n";
	#endif
     
	//parse input, create DVD objects
    for(int i=0; i<lineCount; i++){
        string *tokens;    
        tokens = split(lines[i], ",");

        int id = atoi(tokens[0].c_str());

		#ifdef DEBUG
    	cout << id <<" "<<" "<<tokens[1]<<" "<< tokens[2]<< "\n";
    	#endif

        dvdList[dvdCount++] = dvd(id, tokens[1], strtof(tokens[2].c_str(), NULL), (i%3));
    }

	//format header for output
    printf("\nID  Title                     Rented    Cost\n");
    printf("-------------------------------------------\n");

	//print all DVD's
    for(int i=0; i<dvdCount; i++){
        dvdList[i].print();
    }
	
	return 0;
}

//###############################
string *split(string str, string s){
//str is string to split, s is string to split on
//returns pointer to tokens
//###############################
    int pos = str.find(s);
    static string tokens[3];
    string tmp;

    tokens[0] = str.substr(0,pos);
    tmp = str.substr(pos+s.size());
    pos = tmp.find(s);
    tokens[1] = tmp.substr(0,pos);
    tokens[2] = tmp.substr(pos+s.size());

    //cout << tokens[0] << "\n" << tokens[1] << "\n" << tokens[2];

    return tokens;

}

