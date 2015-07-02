//: TMA1Question4.cpp

/* 
 Title: TMA1Question4.cpp
 Description: Finding prime numbers demonstration
 Date: May 20, 2015
 Author: Carlos Nikiforuk
 Version: 1.0
 Copyright: 2015 Carlos Nikiforuk
*/

/*
DOCUMENTATION
 
 Program Purpose:
 	Find and print primes from 1 to 10000.
    
 Compile (assuming Cygwin is running): make -f TMA1Question4Makefile
 Execution (assuming Cygwin is running): ./TMA1Question4
 
 Notes:
 
 Classes:

 Variables:
 
*/

/*
 TEST PLAN
 
  Normal case:
 	>2    3    5    7    11   13   17   19   23   29   31   37   41   43   47   53   
    >59   61   67   71   73   79   83   89   97   101  103  107  109  113  127  131
    >137  139  149  151  157  163  167  173  179  181  191  193  197  199  211  223
    >227  229  233  239  241  251  257  263  269  271  277  281  283  293  307  311
    >313  317  ...
    
 
 Discussion:
 
*/

#include <stdio.h>
#include <math.h>

bool isPrime(int);

int main(int argc, char *argv[]) {
    
    for(int i=0;i<10000;i++){
        if(isPrime(i)) printf("%-5d", i);
    }
    
    return 0;
    
}

bool isPrime(int p) {
    if (p == 2){
        return true;
    }else if (p <= 1 || p % 2 == 0){
        return false;
    }else {
        int to = (int)(sqrt(p));
        for (int i = 3; i <= to; i += 2)
            if (p % i == 0)
                return false;
        return true;
    }
}
