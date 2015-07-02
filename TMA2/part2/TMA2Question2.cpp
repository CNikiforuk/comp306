//: TMA2Question2.cpp

/* 
 Title: TMA2Question2.cpp
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
    
 Compile: make -f TMA2Question2_Makefile
 Execution: ./TMA2Question2
 
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
    >i@0x600010470=64
    >l@0x600010490=1024
    >c@0x6000104b0=a
    >c@0x6000104b1=b
    >c@0x6000104b2=c
    >c@0x6000104b3=d
    >c@0x6000104b4=e
    >c@0x6000104b5=f
    >c@0x6000104b6=g
    >c@0x6000104b7=h
    >c@0x6000104b8=i
    >c@0x6000104b9=j
    >c@0x6000104ba=k
    >c@0x6000104bb=l
 
 Discussion:
	
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <typeinfo>

#define DATASIZE 100


int main (int argc, char *argv[]){
    
    int *i;
    long *l;
    char *c;
    float *f;
    
    i = new int(64);
    l = new long(1024);
    c = new char[DATASIZE];
    f = new float[DATASIZE];
    
    char ch = 'a';
    for(int i=0;i<DATASIZE;i++){
        if(ch == 'z')       {c[i] = ch++; ch = 'A';}
        else if(ch == 'Z')  {c[i] = ch++; ch = 'a';}
        else                {c[i] = ch++;}
        f[i] = 101.00+i;
    }
    
    printf("%s@%p=%d\n",typeid(*i).name(), static_cast<void*>(&*i), *i);
    printf("%s@%p=%lu\n",typeid(*l).name(), static_cast<void*>(&*l), *l);
    for(int i=0;i<DATASIZE;i++) printf("%s@%p=%c\n",typeid(c[i]).name(), &c[i], c[i]);
    for(int i=0;i<DATASIZE;i++) printf("%s@%p=%3.2f\n",typeid(f[i]).name(), &f[i], f[i]);
    
    delete[] i;
    delete[] l;
    delete[] c;
    delete[] f;
    
    return 0;
    
    
}

