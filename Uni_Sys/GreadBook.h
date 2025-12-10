


#pragma once
#include <iostream>
#include <vector>
#include "Student.h"
#include "Course.h"
using namespace std;

class GradeBook {
    
    
    Student student;
    vector<Course> courses;
    vector<float> grades;

public:
    GradeBook(const Student& s) : student(s) {}

    void AddCourse(const Course& c, float grade) {
        courses.push_back(c);
        grades.push_back(grade);
    }

    void Display() const {
        cout << "==== GRADE BOOK ====\n";
        student.Display();

        for (size_t i = 0; i < courses.size(); i++) {
            cout << "Course #" << i + 1 << endl;
            courses[i].Display();
            cout << " Grade: " << grades[i] << endl;
            cout << "----------------------\n";
        }
    }
};
