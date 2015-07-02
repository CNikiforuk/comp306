//: TMA2Question4.cpp

/* 
 Title: TMA2Question4.cpp
 Description: Create and load dynamic memory for int, long, char array, and float array.
 Date: June 4, 2015
 Author: Carlos Nikiforuk
 ID: 3201280
 Version: 1.0
 Copyright: 2015 Carlos Nikiforuk
*/

/*
DOCUMENTATION
 
 Program Purpose:
    Demonstrate dynamic memory allocation and removal in C++
    
 Compile: make -f TMA2Question4_Makefile
 Execution: ./TMA2Question4
 
 Notes:

 Classes:

 Variables:
    i - pointer to int
    l - pointer to long
    c - pointer to array of char
    f - pointer to array of float
    ch - tmp char used to fill array
 
*/

/*
 TEST PLAN

 Normal Case:

 
 Discussion:
	
*/

#include "TMA2Question4_text.h"

const int DATASIZE = 100;


int main (int argc, char *argv[]){
    
	Text text1 = Text();
	
	cout << text1.contents() << endl;
    
    
}

