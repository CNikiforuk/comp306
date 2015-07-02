//: TMA3Question3_DoStuff.cpp

/* 
 Title: TMA3Question3_DoStuff.cpp
 Description: DoStuff class implementation
 Date: June 4, 2015
 Author: Carlos Nikiforuk
 Copyright: 2015 Carlos Nikiforuk
*/

#include "TMA3Question3_DoStuff.h"

DoStuff::DoStuff(){
    #ifdef DEBUG
	cout << "DoStuff is being constructed!\n";
    #endif
	stuff = 8;
}
DoStuff::DoStuff(int n){
    #ifdef DEBUG
    cout << "DoStuff is being constructed using passed int!\n";
    #endif
	stuff = n;
}
DoStuff::~DoStuff(){
    #ifdef DEBUG
    cout << "DoStuff is being destroyed!\n";
    #endif
}
void DoStuff::print(ostream& out){
    if(out.good()){
        out << stuff << "\n";
    }
}
