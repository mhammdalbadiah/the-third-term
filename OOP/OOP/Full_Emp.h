#pragma once
#include "Emp.h"

class Full_TIME : public Employees {
    float bonus, hoursPerWeek;
    int dayOff;

public:
    Full_TIME(int i = 0, int l = 0,
              std::string n = "None",
              std::string d = "None",
              float s = 0.0f,
              float b = 0.0f,
              float h = 0.0f,
              int off = 0)
        : Employees(i, l, n, d, s),
          bonus(b), hoursPerWeek(h), dayOff(off) {}

    char type() const override { return 'F'; }

    // Write FULL record (type + base + full fields)
    void write(std::ofstream& out) const {
        // FIX: don't do &type()
        char tt = type();
        out.write(&tt, sizeof(tt));

        writeBase(out);

        out.write(reinterpret_cast<const char*>(&dayOff), sizeof(dayOff));
        out.write(reinterpret_cast<const char*>(&bonus), sizeof(bonus));
        out.write(reinterpret_cast<const char*>(&hoursPerWeek), sizeof(hoursPerWeek));
    }

    // Read ONLY record body (base + full fields). Type already read in main.
    void read(std::ifstream& in) {
        readBase(in);

        in.read(reinterpret_cast<char*>(&dayOff), sizeof(dayOff));
        in.read(reinterpret_cast<char*>(&bonus), sizeof(bonus));
        in.read(reinterpret_cast<char*>(&hoursPerWeek), sizeof(hoursPerWeek));
    }

    void display() const override {
        Employees::display();
        std::cout << "Day Off: " << dayOff << "\n";
        std::cout << "Bonus: " << bonus << "\n";
        std::cout << "Hours/Week: " << hoursPerWeek << "\n";
    }
};
