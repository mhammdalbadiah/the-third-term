//
//  main.cpp
//  Operator_overloading_1
//
//  Created by  mohammd al-badiah on 05/12/2025.
//

#include <iostream>
#include "Numbers.h"
using namespace std;

int main() {
    
    
    
    Numbers a(10), b(5), c;

    
    
    
    cout << "Initial values:\n";
    cout << "a = " << a << ", b = " << b << endl;

    
    
    
    
    // Unary Operators
    ++a;
    cout << "After ++a: " << a << endl;
    --a;
    a++;
    cout << "After a++: " << a << endl;
    --b;
    cout << "After --b: " << b << endl;
    b++;
    b--;
    cout << "After b--: " << b << endl;

    a=10;
    b=5;
    
    
    // Binary Operators
    c = a + b;
    cout << "a + b = " << c << endl;
    c = a - b;
    cout << "a - b = " << c << endl;
    c = a * b;
    cout << "a * b = " << c << endl;

    
    
    a=10;
    b=5;
    
    // Compound Assignment
    a += b;
    cout << "After a += b: " << a << endl;
    a -= b;
    cout << "After a -= b: " << a << endl;
    a *= b;
    cout << "After a *= b: " << a << endl;

    
    
    a=10;
    b=5;
    
    // Relational Operators
    cout << "a == b? " << (a == b) << endl;
    cout << "a != b? " << (a != b) << endl;
    cout << "a > b? " << (a > b) << endl;
    cout << "a < b? " << (a < b) << endl;

    
     
    
    // Logical Operators
    cout << "a && b? " << (a && b) << endl;
    cout << "a || b? " << (a || b) << endl;
    cout << "!a? " << (!a) << endl;

    
     
    
    //Stream Operators
     Numbers d;
     cout << "Enter a number for d: ";
     cin >> d;
    cout << "You entered: " << d << endl;

    
    
    
    
    return 0;
}
