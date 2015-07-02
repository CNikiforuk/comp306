//: hen.h

/* 
 Title: hen.cpp
 Description: hen class implementation
 Date: June 4, 2015
 Author: Carlos Nikiforuk
 Copyright: 2015 Carlos Nikiforuk
*/

#include "TMA2Question3_hen.h"

Hen::Hen(){
	cout << "Hen is being constructed!\n";
	nest = new Nest();
}
Hen::~Hen(){
	cout << "Hen is being destroyed!\n";
	delete nest;
}
void Hen::display(){
	cout << "Displaying hen:\n      \\\\\n      (o>\n  \\\\_// )\n   \\_/_/\n    _|_ \n\n";
}
Hen::Nest::Nest(){
	cout << "Nest is being constructed!\n";
	egg = new Egg();
}
Hen::Nest::~Nest(){
	cout << "Nest is being destroyed!\n";
	delete egg;
}
void Hen::Nest::display(){
	cout << "Displaying nest:\n .;.,.,.,;.  \n '##-+-+##'   \n  `,';,. `  \n\n";
}
Hen::Nest::Egg::Egg(){
	cout << "Egg is being constructed!\n";
}
Hen::Nest::Egg::~Egg(){
	cout << "Egg is being destroyed!\n";
}
void Hen::Nest::Egg::display(){
	cout << "Displaying egg:\n  .-'` `'-,\n /         \\\n \\         /\n  '-,__,.-'\n\n";
}
/*
                         
    .;.,.,.,;.  
    '##-+-+##'   
     `,';,. `          
                  

      .-'` `'-,
     /         \
     \         /
      '-,__,.-'
*/
