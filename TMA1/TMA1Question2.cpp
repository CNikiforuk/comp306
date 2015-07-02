//: TMA1Question2.cpp

/* 
 Title: TMA1Question2.cpp
 Description: Display input file line by line with C++
 Date: May 20, 2015
 Author: Carlos Nikiforuk
 Version: 1.0
 Copyright: 2015 Carlos Nikiforuk
*/

/*
DOCUMENTATION
 
 Program Purpose:
 	Demonstrate reading a file line by line using C++

 Compile (assuming Cygwin is running): make -f TMA2Question1Makefile
 Execution (assuming Cygwin is running): ./TMA1Question2 <inFile>
 
 Notes: Will not retrieve lines larger than MAXLINESIZE, default set to 2048
 
 Classes: none

 Variables:
 	inFile - file handle for user input file
 	line - char array of MAXLINESIZE used to store the line being read from file.
*/
/*
 TEST PLAN
 
 Normal case:
    >------Line Reader------
    >Press enter for next line

    >Birds and beasts when brought to bay will use their claws and teeth.
    >If your adversary has burned his boats and destroyed his cooking-pots, 
    >and is ready to stake all on the issue of a battle,
    >he must not be pushed to extremities.
    
 Bad input case 1 (wrong number of arguments):
    >Usage: %s <inFile>
    
 Bad input case 2 (input file does not exist):
    >Could not open file.
    >Usage: %s <inFile>
  
 Discussion:
    
 
*/

#include <stdio.h>
#include <iostream>

using namespace std;
using std::string;

#define MAXLINESIZE 2048

int main(int argc, char *argv[]) {
    
    FILE *inFile;
    char line[MAXLINESIZE];
    
    if(argc != 2)
	{
		fprintf(stderr, "\nUsage: %s <inFile>\n", argv[0]);
		return -1;
	}
    if((inFile=fopen(argv[1], "r"))==NULL){
        fprintf(stderr, "\nCould not open file.\nUsage: %s <inFile>\n", argv[0]);
        return -1;
    }
    
    cout << "\n------Line Reader------\nPress enter for next line\n\n\n";
    
    while(fgets(line, MAXLINESIZE, inFile)!=NULL){
        cout << line;
        cin.ignore();
    }
    
    return 0;
    
}
