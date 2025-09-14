#pragma once 
#include <string>
using namespace std ; 

class student {

    private : 
     
    int id , age ; 
    string name ; 

    public : 

     void set_id();
     void set_age();
     void set_name();
     int  get_id();
     int  get_age();
     string get_name();

     
};