//: TMA3Question2.cpp

/* 
 Title: TMA3Question2.cpp
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
    
 Compile: make -f TMA3Question2_Makefile
 Execution: ./TMA3Question2
 
 Notes:

 Classes:

 Variables:
 
*/

/*
 TEST PLAN

 Normal Case:

 
 Discussion:
	
*/
#include <iostream>
#include <ctime>

//start time;
const time_t start = time(NULL);
const int ARRAYSIZE = 10000;

int a1[ARRAYSIZE];
int a2[ARRAYSIZE];
int a3[ARRAYSIZE];

inline void initArrays(){
    
    for(int i=0; i<ARRAYSIZE; i++){
        
        a1[i] = 100 + i;
        a2[i] = ARRAYSIZE + 100 - i;
        a3[i] = a1[i] * a2[i];
        
        std::cout << a1[i] << "*" << a2[i] << "=" << a3[i] << "\n";
    }
}

int main (int argc, char *argv[]){
    //do array tasks
    initArrays();
    
    //clock finish
    clock_t timer = clock();
    time_t end = time(NULL);
    
    //output
    std::cout << "\n\nProcessor time taken: " << ((float)(timer))/CLOCKS_PER_SEC << "s\n";
    std::cout << "Real time taken:      " << difftime(end,start) << "s";
    
}