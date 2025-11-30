//
//  Son_Class_1.h
//  PolymorPhism
//
//  Created by  mohammd al-badiah on 24/11/2025.
//
#pragma once
#include "Base_Class.h"

class Circel : public Shape {
    double Rad;

public:
    explicit Circel(double radius = 1.0) : Rad(radius) {
        cout << " A new OBJECT form CLASS Circle has been created " << endl;
    }

    ~Circel() override { cout << " Circel OBJECT DEAD ! " << endl; }

    // Override draw; keep interactive input for color
    string draw() override {
        string c;
        cout << "enter The color of the circle : " << endl;
        cin >> c;
        return c;
    }

    void print() override { cout << "We are now in Circle CLASS ! " << endl; }

    // Proper override: compute from member data
    double get_area() override { return Rad * Rad * 3.14; }
};
