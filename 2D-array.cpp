#include <iostream>
using namespace std;

int main() {


    int a[3][4];

    for (int i = 0; i < 3; i++) {
        for (int x = 0; x < 4; x++) {


            cout << "enter the elemnts for : " << "[" << i + 1 << "]" << "  " << "[" << x + 1 << "]";
            cin >> a[i][x];
        }
    }


    for (int i = 0; i < 3; i++) {
        for (int x = 0; x < 4; x++) {


            
       cout << a[i][x]<<" ";
        }
        cout << endl; 
    }
    
    return 0;
}
