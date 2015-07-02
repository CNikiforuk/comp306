//: TMA2Question1_hen.h

/* 
 Title: TMA2Question1_hen.h
 Description: Hen class interface
 Date: June 4, 2015
 Author: Carlos Nikiforuk
 Copyright: 2015 Carlos Nikiforuk
*/

#ifndef TMA2Question3_Hen_h
#define TMA2Question3_Hen_h
#endif
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;
using std::string;

class Hen{
public:
	class Nest{
	public:
		class Egg{
		public:
			Egg();
			~Egg();
			void display();
		};
		void display();
		Nest();
		~Nest();
		Egg *egg;
	};
	
	void display();
	Hen();
	~Hen();
	Nest *nest;

};
