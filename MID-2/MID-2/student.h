//
//  student.h
//  MID-2
//
//  Created by  mohammd al-badiah on 08/11/2025.
//

#include"person.h"
#include <string>
using namespace std ;

class student : public person {
    
    float gpa;
    int level;
    
public:
    
    
    //setter functions
    void set_gpa(float g){gpa=g;}
    void set_level(int l){level = l ; }
    //getter functions
    float get_gpa(){return gpa;}
    int get_level(){return level;}
    
    void Display(){
        person::Display();
        cout << "GPA:"<<gpa<<endl;
        cout << "LEVEL:"<<level<<endl;
    }
    
    student(int i = 0 , int a = 0 , string n = "None",string m = "None",float g =0.0,int l=0 )
    :person(i,a,n,m) ,gpa(g),level(l){
        cout << "constructer student has been created !" << endl;
    }
    
    
};
