 
#pragma once
#include <iostream>
using namespace std ;

class sh {
    
    static int counter;
    int idd;
    int phone;

public:
    sh() {
        idd =  counter++;
     }

    ~sh() {
        idd--;
    }

     int git_id() { return idd; }
};

int sh::counter = 1;
