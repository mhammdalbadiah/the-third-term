#pragma once
#include "Emp.h"
#include <cstdint> // int32_t

class Part_Time : public Employees {
    std::string time;
    float hoursPerDay;

public:
    Part_Time(int i = 0, int l = 0,
              std::string n = "None",
              std::string d = "None",
              float s = 0.0f,
              std::string t = "None",
              float h = 0.0f)
        : Employees(i, l, n, d, s), time(t), hoursPerDay(h) {}

    char type() const override { return 'P'; }

    // Write FULL record (type + base + part fields)
    void write(std::ofstream& out) const {
        // FIX: don't do &type()
        char tt = type();
        out.write(&tt, sizeof(tt));

        writeBase(out);

        int32_t len = static_cast<int32_t>(time.size());
        out.write(reinterpret_cast<const char*>(&len), sizeof(len));
        out.write(time.c_str(), len);

        out.write(reinterpret_cast<const char*>(&hoursPerDay), sizeof(hoursPerDay));
    }

    // Read ONLY record body (base + part fields). Type already read in main.
    void read(std::ifstream& in) {
        readBase(in);

        int32_t len = 0;
        std::string temp;

        in.read(reinterpret_cast<char*>(&len), sizeof(len));
        temp.resize(len);
        in.read(&temp[0], len);
        time = temp;

        in.read(reinterpret_cast<char*>(&hoursPerDay), sizeof(hoursPerDay));
    }

    void display() const override {
        Employees::display();
        std::cout << "Time: " << time << "\n";
        std::cout << "Hours/Day: " << hoursPerDay << "\n";
    }
};
