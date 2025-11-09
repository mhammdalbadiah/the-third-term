#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// ================================
// Payroll System
// ================================
class Date {
    int month;
public:
    Date(int m=1): month(m) {}
    int getMonth() { return month; }
};

class Employee {
    string name;
    double salary;
    Date birthDate;
public:
    Employee(string n, double s, Date bd): name(n), salary(s), birthDate(bd) {}
    virtual ~Employee() {}
    virtual double calculatePay() { return salary; }
    string getName() { return name; }
    Date getBirthDate() { return birthDate; }
};

class HourlyEmployee : public Employee {
    double hours, rate;
public:
    HourlyEmployee(string n, double h, double r, Date bd)
        : Employee(n, 0, bd), hours(h), rate(r) {}
    double calculatePay() override { return hours * rate; }
};

class Shape {
public:
    virtual void print() = 0;
    virtual ~Shape() {}
};

class TwoDShape : public Shape {
public:
    virtual double getArea() = 0;
};

class ThreeDShape : public Shape {
public:
    virtual double getArea() = 0;
    virtual double getVolume() = 0;
};

class Circle : public TwoDShape {
    double r;
public:
    Circle(double radius): r(radius) {}
    double getArea() override { return 3.1416*r*r; }
    void print() override { cout << "Circle r=" << r << endl; }
};

class Rectangle : public TwoDShape {
    double w,h;
public:
    Rectangle(double width,double height): w(width),h(height) {}
    double getArea() override { return w*h; }
    void print() override { cout << "Rectangle " << w << "x" << h << endl; }
};

class Sphere : public ThreeDShape {
    double r;
public:
    Sphere(double radius): r(radius) {}
    double getArea() override { return 4*3.1416*r*r; }
    double getVolume() override { return 4.0/3*3.1416*r*r*r; }
    void print() override { cout << "Sphere r=" << r << endl; }
};

class Cube : public ThreeDShape {
    double s;
public:
    Cube(double side): s(side) {}
    double getArea() override { return 6*s*s; }
    double getVolume() override { return s*s*s; }
    void print() override { cout << "Cube s=" << s << endl; }
};

// ================================
// Main Function
// ================================
int main() {
    cout << "==== Payroll System ====" << endl;
    int currentMonth = 11;
    vector<Employee*> employees;
    employees.push_back(new Employee("Alice", 2000, Date(11)));
    employees.push_back(new HourlyEmployee("Bob", 160, 15, Date(6)));

    for(auto e: employees){
        double pay = e->calculatePay();
        if(e->getBirthDate().getMonth() == currentMonth) pay += 100;
        cout << e->getName() << " pay: $" << pay << endl;
    }
    for(auto e: employees) delete e;

    cout << "\n==== Shape System ====" << endl;
    vector<Shape*> shapes;
    shapes.push_back(new Circle(5));
    shapes.push_back(new Rectangle(4,6));
    shapes.push_back(new Sphere(3));
    shapes.push_back(new Cube(2));

    for(auto s: shapes){
        s->print();
        if(auto t2 = dynamic_cast<TwoDShape*>(s)) cout << "Area: " << t2->getArea() << endl;
        if(auto t3 = dynamic_cast<ThreeDShape*>(s)) cout << "Area: " << t3->getArea() << ", Volume: " << t3->getVolume() << endl;
        cout << "-----------------\n";
    }
    for(auto s: shapes) delete s;

    return 0;
}
