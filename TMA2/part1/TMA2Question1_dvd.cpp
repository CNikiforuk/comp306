//: dvd.h

/* 
 Title: dvd.cpp
 Description: dvd class implementation
 Date: June 4, 2015
 Author: Carlos Nikiforuk
 Copyright: 2015 Carlos Nikiforuk
*/

#include "TMA2Question1_dvd.h"

dvd::dvd(){
    id = -1;
    name = "New DVD";
    cost = 0.00f;
    rented = false;
}

int dvd::getid(){
    return id;
}

string dvd::getName(){
    return name;
}

float dvd::getCost(){
    return cost;
}

void dvd::setCost(float r){
    cost = r;
}

bool dvd::getRented(){
    return rented;
}

void dvd::setRented(bool r){
    rented = r;
}

void dvd::print(){
        printf("%-2d: %-25s %-6s   $%-2.2f\n", getid(), getName().c_str(), getRented()?"true":"false", getCost());
    }
    
