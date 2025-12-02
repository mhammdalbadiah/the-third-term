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

// First Class
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
    // Constructor
    person(int i=0,int a=0,string n ="None",string m = "None")
            :id(i),age(a),name(n),major(m){
                cout << "constructer person has been created ! " << endl;
    }
    // Destructor
    ~person(){
        cout << "person Object DEAD ! " << endl;
    }
    
      /*===========================================
         OPERATOR OVERLOADING  DOWN THERE @#$%^%$#
       ===========================================*/
     // operator overloading ( ++ )
    person operator ++(){
        ++age;
        return person(age);
    }
     // Operator overloading ( * )
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
    
    
    friend bool operator==(const person &lhs, const person &rhs) {
           return lhs.age == rhs.age;
       }
    
    person operator -(const person &p)const{
        person newobj;
        newobj.set_age(this->age - p.age);
        return newobj;
    }
    
};
// Second Class
class Point{
    
    int x, y;
    
    public : 
    
    Point(int xx=0 , int yy=0):x(xx),y(yy){
        cout << "Constructer Point has been created ! " << endl;
    }
    
    Point operator+(const Point &p )const{
        Point sum ;
        sum.x = x + p.x ;
        sum.y = y+p.y;
        return sum;
    }
    void Display()const{
        cout << "X = " << x << endl <<"Y = "<<y<<endl;
    }
};
// Third Class
class counter{
    
    int count;
public:

    void set_count(int c){count = c;}
    int get_count (){return count ;}

    counter operator ++(){
        count++;
        return *this;
    }
    // post-increment (a++)
    counter operator++(int) {
        counter temp = *this;
        ++count;
        return temp;
    }
    void Display(){ cout << " =  " << count << endl;}
};
// Fourth Class
class box{
    
   int length,width,height;
public:
    box(int l =0,int w =0, int h=0):length(l),width(w),height(h){}
    
   int volume()const{
        return length*width*height;
    }
    bool operator==(const box &b) const {
        return this->volume() == b.volume();
    }
};
