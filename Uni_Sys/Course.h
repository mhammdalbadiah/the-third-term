

#pragma once
#include <iostream>
#include <string>
using namespace std;

class Course {
    string course_name;
    string course_code;
    int credits;

public:
    Course(string name = "None", string code = "000", int c = 0)
        : course_name(name), course_code(code), credits(c) {}

    void Display() const {
        cout << "Course INFO:\n";
        cout << " Name   : " << course_name << endl;
        cout << " Code   : " << course_code << endl;
        cout << " Credits: " << credits << endl;
        cout << endl;
    }

    string getName() const { return course_name; }
    string getCode() const { return course_code; }
    int getCredits() const { return credits; }
};
