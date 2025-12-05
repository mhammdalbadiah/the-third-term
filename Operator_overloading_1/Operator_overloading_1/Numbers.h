//
//  Numbers.h
//  Operator_overloading_1
//
//  Created by  mohammd al-badiah on 05/12/2025.
//


 

#pragma once
#include <iostream>
using namespace std ;

class Numbers{
    
    int x ;
    
public:
    
    
    Numbers(int s=0) : x(s){}
        
    
    
    
    
    // ***********************************************************************
    
    // Operator Overloading !
    // Operator has Three Diffrent Shapes :
    
    // Unary Operators Like : x++ , x-- , x* , x&
    
    // Binary Operators Like : x + y , x << y , x && y
    
    
    // ************************************************************************
    
    
 
    
     
    // Unary Operators :
    
    Numbers operator++(){  // pre
        ++x;
        return *this;
    }
    
    
    Numbers operator++(int){  // Post
        Numbers Temp = *this ;
        x++;
        return Temp;
    }
    
    
    Numbers operator--(){ // pre
        --x;
        return *this;
    }
    
    Numbers operator--(int){ // Post
        Numbers Temp = *this;
        x--;
        return Temp ;
    }
    
    
    
    
    
    // Binary Operators :
    // There are 3 main types :

    // 1. Arithmetic Operators (Math) :
    // + , - , * , / , %   (basic math operations)
    // += , -= , *= , /= , %=   (compound assignment operators)

    // 2. Comparison & Logical Operators:
    // Relational : > , < , == , != , <= , >=   (return true/false)
    // Logical : && , || , !   (combine boolean expressions)

    // 3. Other Binary Operators:
    // Stream operators : << , >>   (for input/output)

    
    
    // c =  a + b
    // a L.H.S  this->
    
    
    // + , - , * , / , %   (basic math operations):

    
    Numbers operator + (const Numbers &other) const {
        
        Numbers Temp ;
        Temp.x = this->x + other.x;
        return Temp ;
        
    }
     
    Numbers operator - (const Numbers &other)const{
        
        Numbers Temp ;
        Temp.x = this->x - other.x;
        return Temp ;
        
    }
    
    Numbers operator * (const Numbers &other)const{
        Numbers Temp;
        Temp.x = this->x * other.x ;
        return Temp ;
    }
    
    // c += a ;
    // a L.H.S  this->
    
    
    // += , -= , *= , /= , %=   (compound assignment operators) :
    
    Numbers& operator += (const Numbers &other){
        
        x += other.x;
        return *this;
    }
    
    Numbers& operator -= (const Numbers &other){

        x -= other.x;
        
        return *this ;
    }
    
    Numbers& operator *= (const Numbers &other){
        
        x *= other.x ;
        return *this ;
        
    }
    
    
    
    // Relational : > , < , == , != , <= , >=   (return true/false)
    
    // a == b ?
     
    bool operator==(const Numbers &other) const { return x == other.x; }
    
    bool operator!=(const Numbers &other) const { return x != other.x; }
    
    bool operator>(const Numbers &other) const { return x > other.x; }
    
    bool operator<(const Numbers &other) const { return x < other.x; }
    
    bool operator>=(const Numbers &other) const { return x >= other.x; }
    
    bool operator<=(const Numbers &other) const { return x <= other.x; }
    
    
    // Logical : && , || , !   (combine boolean expressions)

    bool operator&&(const Numbers &other) const { return x && other.x; }
    
    bool operator||(const Numbers &other) const { return x || other.x; }
    
    bool operator!() const { return !x; }

    //  a = 0 ;
    // !a : 1 ;
    
    
    // Stream operators : << , >>   (for input/output)
    
    
    friend ostream& operator << ( ostream &out ,const Numbers &other ){
        
        out << other.x;
        return out ;
    }
    
    
    friend istream& operator >> ( istream &in ,  Numbers &other){
        
        in >> other.x ;
        return in ;
    }
    
    
   
    
};
