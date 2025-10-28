//
//  son.h
//  inher
//
//  Created by  mohammd al-badiah on 24/10/2025.
//
#include "base.h"
class student : public person{
    
    float gpa;
    
    public :
    
      
    void set_gpa(){
        cout << "enter your GPA : " << endl;
        float g ;
        cin >> g ;
        gpa = g ;
    }
    float get_gpa(){return gpa;}
    
    void print(){
        person::print();
        cout << "The GPA : " << gpa << endl;
    }
    
};
