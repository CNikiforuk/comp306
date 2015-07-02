//: TMA2Question3.cpp

/* 
 Title: TMA2Question3.cpp
 Description: Creating classes in C++
 Date: June 4, 2015
 Author: Carlos Nikiforuk
 ID: 3201280
 Version: 1.0
 Copyright: 2015 Carlos Nikiforuk
*/

/*
DOCUMENTATION
 
 Program Purpose:
    Demonstrate usage of classes and inner classes in C++
    
 Compile: make -f TMA2Question3_Makefile
 Execution: ./TMA2Question3
 
 Notes:

 Classes:

 Variables:
 
*/

/*
 TEST PLAN

 Normal Case:

 
 Discussion:
	
*/

#include "TMA2Question3_hen.h"

#define DATASIZE 100


int main (int argc, char *argv[]){
    
	Hen *hen1 = new Hen();
	hen1->display();
	hen1->nest->display();
	hen1->nest->egg->display();
	delete hen1;

	return 0;
		    
}

