//: TMA3Question3.cpp

/* 
 Title: TMA3Question3.cpp
 Description: Timed array initialization
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
    
 Compile: make -f TMA3Question3_Makefile
 Execution: ./TMA3Question3
 
 Notes:

 Classes:

 Variables:
 
*/

/*
 TEST PLAN

 Normal Case:

 Discussion:
	
*/
#include "TMA3Question3_DoStuff.h"
#include <iostream>




int main (int argc, char *argv[]){
    
    #ifdef DEBUG
    printf("DEBUG MODE \n");
    #endif
    
    DoStuff stuff = DoStuff();
    stuff.print(std::cout);
    
}