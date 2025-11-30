//
//  Son_Class_2.h
//  PolymorPhism
//
//  Created by  mohammd al-badiah on 24/11/2025.
//
#pragma once
#include "Base_Class.h"

class Rectangle : public Shape {
    double width, length;

public:
    Rectangle(double w = 1.0, double l = 1.0) : width(w), length(l) {
        cout << "A new OBJECT from CLASS Rectangle has been created" << endl;
    }

    ~Rectangle() override { cout << "Rectangle OBJECT DEAD !" << endl; }

    void print() override {
        cout << "Now we using FN print from class Rectangle " << endl;
    }

    string draw() override {
        string c;
        cout << "enter color for the Rectangle : ";
        cin >> c;
        return c;
    }

    // Proper override: compute from member data
    double get_area() override { return width * length; }
};
