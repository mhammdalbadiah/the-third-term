#include <iostream>
#include <fstream>
#include <string>
#include "Par_Time_EMP.h"
#include "Full_Emp.h"

using namespace std;

static const char* FILE_NAME = "Emp.bin";

void add_employee() {
    ofstream out(FILE_NAME, ios::app | ios::binary);
    if (!out) {
        cout << "File can't be opened!\n";
        return;
    }

    int kind;
    cout << "\n1) Part-Time\n2) Full-Time\nEnter: ";
    cin >> kind;

    int id, level;
    string name, dept;
    float salary;

    cout << "ID: "; cin >> id;
    cout << "Name: "; cin >> name;
    cout << "Department: "; cin >> dept;
    cout << "Level: "; cin >> level;
    cout << "Salary: "; cin >> salary;

    if (kind == 1) {
        string time;
        float hperd;
        cout << "Time: "; cin >> time;
        cout << "Hours/Day: "; cin >> hperd;

        Part_Time p(id, level, name, dept, salary, time, hperd);
        p.write(out);
        cout << "Saved Part-Time.\n";
    }
    else if (kind == 2) {
        int dayOff;
        float bonus, hperw;
        cout << "Day Off: "; cin >> dayOff;
        cout << "Bonus: "; cin >> bonus;
        cout << "Hours/Week: "; cin >> hperw;

        Full_TIME f(id, level, name, dept, salary, bonus, hperw, dayOff);
        f.write(out);
        cout << "Saved Full-Time.\n";
    }
    else {
        cout << "Invalid.\n";
    }

    out.close();
}

void list_all() {
    ifstream in(FILE_NAME, ios::binary);
    if (!in) {
        cout << "No file yet.\n";
        return;
    }

    cout << "\n===== ALL EMPLOYEES =====\n";

    while (true) {
        char t;
        in.read(&t, sizeof(t));
        if (!in) break;

        if (t == 'P') {
            Part_Time p;
            p.read(in);
            p.display();
            cout << "-------------------------\n";
        }
        else if (t == 'F') {
            Full_TIME f;
            f.read(in);
            f.display();
            cout << "-------------------------\n";
        }
        else {
            cout << "Corrupted record!\n";
            break;
        }
    }

    in.close();
}

int main() {
    while (true) {
        int x;
        cout << "\n======== MENU ========\n";
        cout << "1) Add Employee\n";
        cout << "2) List All\n";
        cout << "3) Exit\n";
        cout << "Enter: ";
        cin >> x;

        switch (x) {
            case 1: add_employee(); break;
            case 2: list_all(); break;
            case 3: return 0;
            default: cout << "Invalid.\n"; break;
        }
    }
}
