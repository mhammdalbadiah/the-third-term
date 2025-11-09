//
//  person.h
//  MID-2
//
//  Created by  mohammd al-badiah on 08/11/2025.
//
#pragma once
#include <iostream>
#include <string>
using namespace std ;

class person{
    
    int id , age;
    string  name , major;
    
public:
    
   
    
    //setter functions
    void set_id(int i){id=i;}
    void set_age(int a){age=a;}
    void set_name(string n ){name=n;}
    void set_major(string m ){major = m;}
    //getter functions
    int get_id(){return id;}
    int get_age(){return age;}
    string get_name(){return name;}
    string get_major(){return major;}
    
    //Display method to print Datamember
    
    void Display(){
        cout << "NAME:"<<name<<endl;
        cout << "ID:"<<id<<endl;
        cout << "AGE:"<<age<<endl;
        cout << "MAJOR:"<<major<<endl;
    }
    
    person(int i=0,int a=0,string n ="None",string m = "None")
            :id(i),age(a),name(n),major(m){
                cout << "constructer person has been created ! " << endl;
    }
    
    ~person(){
        cout << "person Object DEAD ! " << endl;
    }
    
    
    
      //===========================================
      //  OPERATOR OVERLOADING  DOWN THERE @#$%^%$#
      //===========================================
    
    
    
     // operator overloading ( ++ )
    person operator ++(){
        ++age;
        return person(age);
    }
    
    person operator *(){
        id *= id ;
        return person(id);
    }
    
    person operator*(const person /* <- the first obj*/ &other  /* second obj*/) const { /* to don't change for
                                                                                         a1 , a2 */
        
        //    person a1(2,20,"saad","MD"), a2(3,19,"Mohammd","IT");
        
        // person a3 = a1 * a2 ;
        
        person result; // new object to return it

        result.set_id(this->id * other.id);   // " this-> " for the first object , "other" for the second
        result.set_age(this->age * other.age);
        result.set_name(this->name + "-" + other.name);
        result.set_major(this->major +"&"+ other.major);

        return result;
    }

    
};
