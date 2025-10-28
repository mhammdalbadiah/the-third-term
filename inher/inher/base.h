//
//  base.h
//  inher
//
//  Created by  mohammd al-badiah on 24/10/2025.
//
#pragma once
#include <iostream>
using namespace std ;


class person {
    

    int  age ;
    string name , major ;
    unsigned long long id ;
    unsigned short dob ;
    
  
        
   
    
public:
    
    void set_age(){
        cout<< "enter your AGE : " ;
        int a;
        cin >> a ;
        age = a ;
    }
    void set_name(){
        string n ;
        cout <<" enter your name :  " << endl;
        cin >> n ;
        name = n ;
    }
    
    void set_major(){
        string m ;
        cout << "enter your major : " << endl;
        cin >> m;
        major = m ;
        
    }
    
    void set_id(){
        unsigned long long i ;
        cout << "enter your ID : " << endl;
        cin >> i ;
        id = i ;
    }
    void set_dob(){
        unsigned short d ;
        cout << "enter your Date of Birth : " << endl;
        cin >> d ;
        dob = d ;
    }
    // setter functions
    
    int get_age(){return age ;}
    string get_name(){return name ; }
    string get_major(){return major; }
    unsigned long long get_id(){return id ;}
    unsigned short get_dob(){ return dob ; }
    
    //getter functions
    
    
    void print(){
        cout << "The nmae is : " << name << "the AGE :"<< age <<"the Date of Birth : " << dob<<
        "the ID number : " << id << " The Major : " << major << endl;
    }
};
