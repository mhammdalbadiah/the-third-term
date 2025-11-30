#include <iostream>
#include "Base_Class.h"
#include "Son_Class_1.h"
#include "Son_Class_2.h"

using namespace std;

int main() {
    // Create concrete objects with dimensions
    Rectangle Rec(4.0, 5.0);
    Circel c(3.0);

    // Base-class pointer to demonstrate polymorphism
    Shape* shape_ptx = nullptr;

    cout << " Rectangle class Now " << endl;
    shape_ptx = &Rec;
    shape_ptx->draw();                      // virtual -> Rectangle::draw
    shape_ptx->print();                     // virtual -> Rectangle::print
    cout << "Area = " << shape_ptx->get_area() << endl; // virtual -> Rectangle::get_area

    cout << " Circle class Now " << endl;
    shape_ptx = &c;
    shape_ptx->draw();                      // virtual -> Circel::draw
    shape_ptx->print();                     // virtual -> Circel::print
    cout << "Area = " << shape_ptx->get_area() << endl; // virtual -> Circel::get_area

    return 0;
}
