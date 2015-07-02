//: TMA2Question4_text.cpp

/* 
 Title: TMA2Question4_text.cpp
 Description: text class implementation
 Date: June 4, 2015
 Author: Carlos Nikiforuk
 Copyright: 2015 Carlos Nikiforuk
*/

#include "TMA2Question4_text.h"

Text::Text(){
	cout << "Text is being constructed!\n";
	file = "./TMA2Question4_data.dat";
	str = "";
}
Text::Text(string s){
	cout << "Text is being constructed using passed in file!\n";
	file = s;
	ifstream is;
	is.open(file.c_str());
    if((is.rdstate() & std::ifstream::failbit ) != 0 ){
        fprintf(stderr, "\nCould not open file %s. Using default.\n", file.c_str());
        file = "./TMA2Question4_data.dat";
    }
}
Text::~Text(){
	cout << "Text is being destroyed!\n";
}
string Text::contents(){
	ifstream is;
	is.open(file.c_str());
	char ch;
	while(!is.eof()){
		str += ch;
		is.get(ch);	
	}
	return str;
}
