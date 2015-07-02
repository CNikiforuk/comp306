//: TMA1Question3.cpp

/* 
 Title: TMA1Question3.cpp
 Description: Vector Demonstration
 Date: May 20, 2015
 Author: Carlos Nikiforuk
 Version: 1.0
 Copyright: 2015 Carlos Nikiforuk
*/

/*
DOCUMENTATION
 
 Program Purpose:
 	Demonstrate creating and using vectors in C++.
    
 Compile (assuming Cygwin is running): make -f TMA1Question3Makefile
 Execution (assuming Cygwin is running): ./TMA1Question3
 
 Notes:
 
 Classes:

 Variables:
 	vec1, vec2, vec3 - vectors containing floats, initial space allocated for 25.
*/

/*
 TEST PLAN
 
 Normal case:
 	
    >0 : 0  + 0   = 0  
    >1 : 1  + 1   = 2  
    >2 : 2  + 4   = 6  
    >3 : 3  + 9   = 12 
    >4 : 4  + 16  = 20 
    >5 : 5  + 25  = 30 
    >6 : 6  + 36  = 42 
    >...
 
 Discussion:
 
*/

#include <stdio.h>
#include <vector>

using namespace std;


int main(int argc, char *argv[]) {
    
    vector<float> vec1(25,0.0);
    vector<float> vec2(25,0.0);
    vector<float> vec3(25,0.0);
    
    for(int i=0;i<25;i++){
        vec1[i] = float(i);
        vec2[i] = float(i*i);
    }
    
    if(vec1.size() == vec2.size() && vec2.size() == vec3.size()){   //be safe
        printf("\n");
        for (int i = 0; i < vec3.size(); i++){
            vec3[i] = vec1[i]+vec2[i];
            printf("%-2d: %-2.0f + %-3.0f = %-3.0f\n", i, vec1[i], vec2[i], vec3[i]);
        }
    }else{
        fprintf(stderr, "Error: Vectors aren't the same size!");
        return -1;
    }
    
    return 0;
    
}
