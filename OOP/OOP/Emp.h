#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <cstdint>   // int32_t

class Employees {
protected:
    int id, level;
    std::string name, department;
    float salary;

public:
    Employees(int i = 0, int l = 0,
              std::string n = "None",
              std::string d = "None",
              float s = 0.0f)
        : id(i), level(l), name(n), department(d), salary(s) {}

    virtual ~Employees() {}

    // Each derived class returns its type: 'P' or 'F'
    virtual char type() const = 0;

    // Write base fields (NO type here)
    virtual void writeBase(std::ofstream& out) const {
        out.write(reinterpret_cast<const char*>(&id), sizeof(id));
        out.write(reinterpret_cast<const char*>(&level), sizeof(level));
        out.write(reinterpret_cast<const char*>(&salary), sizeof(salary));

        int32_t len = 0;

        len = static_cast<int32_t>(name.size());
        out.write(reinterpret_cast<const char*>(&len), sizeof(len));
        out.write(name.c_str(), len);

        len = static_cast<int32_t>(department.size());
        out.write(reinterpret_cast<const char*>(&len), sizeof(len));
        out.write(department.c_str(), len);
    }

    // Read base fields (NO type here)
    virtual void readBase(std::ifstream& in) {
        in.read(reinterpret_cast<char*>(&id), sizeof(id));
        in.read(reinterpret_cast<char*>(&level), sizeof(level));
        in.read(reinterpret_cast<char*>(&salary), sizeof(salary));

        int32_t len = 0;
        std::string temp;

        in.read(reinterpret_cast<char*>(&len), sizeof(len));
        temp.resize(len);
        in.read(&temp[0], len);
        name = temp;

        in.read(reinterpret_cast<char*>(&len), sizeof(len));
        temp.resize(len);
        in.read(&temp[0], len);
        department = temp;
    }

    virtual void display() const {
        std::cout << "\n======= Employee =======\n";
        std::cout << "ID: " << id << "\n";
        std::cout << "Name: " << name << "\n";
        std::cout << "Department: " << department << "\n";
        std::cout << "Level: " << level << "\n";
        std::cout << "Salary: " << salary << "\n";
    }
};
