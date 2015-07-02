//: TMA3Question3_DoStuff.h

/* 
 Title: TMA3Question3_DoStuff.h
 Description: dostuff class interface
 Date: June 4, 2015
 Author: Carlos Nikiforuk
 Copyright: 2015 Carlos Nikiforuk
*/

#ifndef TMA3Question3_DoStuff_h
#define TMA3Question3_DoStuff_h
#endif
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
using std::string;

class DoStuff{
public:
	int stuff;

	DoStuff();
	~DoStuff();
	DoStuff(int);
    void print(ostream&);
};
