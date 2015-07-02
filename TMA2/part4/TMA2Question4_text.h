//: TMA2Question4_text.h

/* 
 Title: TMA2Question4_text.h
 Description: Hen class interface
 Date: June 4, 2015
 Author: Carlos Nikiforuk
 Copyright: 2015 Carlos Nikiforuk
*/

#ifndef TMA2Question4_text_h
#define TMA2Question4_text_h
#endif
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
using std::string;

class Text{
public:
	
	string file;
	string str;

	Text();
	~Text();
	Text(string);
	string contents();
	
};
