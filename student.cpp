#include<iostream>
#include<string>
#include "student.h"
using namespace std ;




    student::student(){
      id = 0 ; 
      age = 0 ;
      name = "None" ; 


    }


 void student::set_id(){
    int i ;
    cout <<"enter your id : "<< endl; 
    cin >> i ; 
    id = i ; 

 }

  void student::set_age(){

    int a ;

    cout << "enter your age : " << endl; 
    cin >> a; 
    age = a ; 

  }

  void student::set_name(){

    string n ; 
    cout << "enter your name :" << endl;
    cin >> n ; 
    name = n ; 
  }