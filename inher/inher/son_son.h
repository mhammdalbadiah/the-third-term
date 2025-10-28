//
//  son_son.h
//  inher
//
//  Created by  mohammd al-badiah on 28/10/2025.
//
 #include "son.h"
#include <iostream>
#include "base.h"
using namespace std ;

class doctor : public person{
    
    string type ;
    double salary ;
    
    public :
    
    void set_type() {
        string t ;
        cout << "enter your C : " << endl;
        cin >> t ;
        type = t ;
        
    }
    
    void set_salray(){
        double s ;
        cout << "enter your SALARY : " << endl;
        cin >> s ;
        salary = s ; 
    }
    
    string get_type() {return type ; }
    double get_salary(){return salary ; }
    
};
