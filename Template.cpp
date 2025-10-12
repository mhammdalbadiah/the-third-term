#include <iostream>
using namespace std;

template <class T>

T add(T a, T b) {
    
    return a + b;
    
}

template <class T>

T multiplay(T a, T b) {
    
    return a * b;
    
}

int main() {
    
    cout << add(2, 3) << endl;       // T = int   
    cout << add(2.5, 3.1) << endl;   // T = double  
    cout << multiplay(2.0, 2.2);     // T = double or float 
    
 }
