



#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    int id;
    int age;

public:
    Student(string n = "None", int i = 0, int a = 18)
        : name(n), id(i), age(a) {}

    void Display() const {
        cout << "Student INFO:\n";
        cout << " Name : " << name << endl;
        cout << " ID   : " << id << endl;
        cout << " Age  : " << age << endl;
        cout << endl;
    }

    // Getters
    string getName() const { return name; }
    int getID() const { return id; }
    int getAge() const { return age; }

    // Setters
    void setName(string n) { name = n; }
    void setID(int i) { id = i; }
    void setAge(int a) { age = a; }
};
