//
//  Base_Class.h
//  PolymorPhism
//
//  Created by  mohammd al-badiah on 24/11/2025.
//
#pragma once
#include <iostream>
#include <string>

using namespace std;

class Shape {
    string Color;

public:
    Shape() { cout << "Object Shape created" << endl; }
    virtual ~Shape() { cout << "Object Shape DEAD ! " << endl; }

    // Virtual interface
    virtual void print() { cout << "Now we are in Shape CLASS ! " << endl; }

    virtual string draw() {
        string c;
        cout << "enter the color : " << endl;
        cin >> c;
        Color = c;
        return c;
    }

    // Return area; derived classes must override
    virtual double get_area() { return 0.0; }
};
