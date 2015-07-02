//: TMA2Question1_dvd.h

/* 
 Title: TMA2Question1_dvd.h
 Description: dvd class interface
 Date: June 4, 2015
 Author: Carlos Nikiforuk
 Copyright: 2015 Carlos Nikiforuk
*/

#ifndef TMA2Question1_dvd_h
#define TMA2Question1_dvd_h
#endif
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;
using std::string;

class dvd{
    
private:
    int id;
    string name;
    float cost;
    bool rented;
    
public:
    dvd();    
    dvd(int i, string n, float c, bool r=false) : id(i), name(n), cost(c), rented(r) {};
    
    int getid();
    string getName();
    float getCost();
	void setCost(float);
    bool getRented();
	void setRented(bool);
    void print();
};
