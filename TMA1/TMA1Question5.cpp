//: TMA1Question5.cpp

/* 
 Title: TMA1Question5.cpp
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

 Compile (assuming Cygwin is running): make -f TMA1Question5Makefile
 Execution (assuming Cygwin is running): ./TMA1Question5 <inFile>
 
 Notes: 
    Will not retrieve lines larger than MAXLINESIZE, default set to 2048
 
 Classes: 
    none

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
    
 Bad exec case 1 (wrong number of arguments):
    >Usage: %s <inFile>
    
 Bad exec case 2 (input file does not exist):
    >Could not open file.
    >Usage: %s <inFile>
  
 Discussion:
    
 
*/

#include <stdio.h>
#include <iostream>

using namespace std;
using std::string;

#define MAXLINESIZE 2048
#define MAXLINES 100

int main(int argc, char *argv[]) {
    
    FILE *inFile;
    char line[MAXLINESIZE];
    string lines[MAXLINES];
    int lineCount = 0;
    
    if(argc < 2)
	{
		fprintf(stderr, "\nUsage: %s <inFile>\n", argv[0]);
		return -1;
	}
    if((inFile=fopen(argv[1], "r"))==NULL){
        fprintf(stderr, "\nCould not open file %s\nUsage: %s <inFile>\n", argv[1], argv[0]);
        return -1;
    }
    
    printf("\n------String Demo------\n\n");
    
    while(fgets(line, MAXLINESIZE, inFile)!=NULL && lineCount < MAXLINES){
        lines[lineCount++] = string(line);
    }
    
    for(int i=0;i<lineCount;i++){
        printf("line #%3d: %s", i, lines[i].c_str());
    }
    cout << endl;
    
    
    return 0;
    
}
