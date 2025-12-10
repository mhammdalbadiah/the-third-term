

#include "Student.h"
#include "Course.h"

class Graduated {
    
    const int requiredCredits = 138;
public:
    
    void checkGraduation(Student &s, GradeBook &gb) {
        auto courses = gb.getStudentCourses(s);
        int totalCredits = 0;
        for (auto &cg : courses)
            totalCredits += cg.course.get_course_credits();

        cout << "Student: " << s.get_name() << " | Total Credits: " << totalCredits << endl;
        if (totalCredits >= requiredCredits)
            cout << "Graduated!" << endl;
        else
            cout << "Not Graduated yet." << endl;
    }
};
