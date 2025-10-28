#include "son.h"
#include "son_son.h"
#include <string>
#include <iostream>
using namespace std;

int main() {
    cout << "Welcome to my program!" << endl;
    cout << "If you are a student please press 1" << endl;
    cout << "If you are a Doctor please press 2" << endl;

    int x;
    cin >> x;

    switch (x) {
        case 1: {  // if the user enter num 1
            
            cout << "Then you are a student!" << endl;
            cout << "Please enter if you're alone or with company:" << endl;
            cout << "For alone press 1" << endl << "For company press 2" << endl;

            int y;
            cin >> y;

            // if statment to see the user alone or with company
            
            if (y == 1) {    //case alone
                student a;
                a.set_name();
                a.set_id();
                a.set_dob();
                a.set_age();
                a.set_major();
                a.set_gpa();

                cout << "If you want to print your INFO press 1: " << endl;
                int gg;
                cin >> gg;
                if (gg == 1) { // to print the INFO
                    
                    a.print();
                    
                } else
                    cout << "Ok then, see you later!" << endl;
                
            }
            else if (y == 2) { // in case he have company
                 
                cout << "How many students with you: " << endl;
                int z;
                cin >> z;

                student* b = new student[z];

                for (int i = 0; i < z; i++) {
                    cout << "\n--- Student " << i + 1 << " ---" << endl;
                    b[i].set_name();
                    b[i].set_id();
                    b[i].set_dob();
                    b[i].set_age();
                    b[i].set_major();
                    b[i].set_gpa();
                }

                cout << "To print your INFO please press 1: " << endl;
                int o;
                cin >> o;
                if (o == 1) {  // to print the array of student
                    
                    for (int i = 0; i < z; i++) {
                        
                        b[i].print();
                    }
                    
                } else
                    cout << "Ok then!" << endl;
                

                delete[] b;     // delete the dynamic array !!!!!!!!!
            }
            break;
        }

        case 2: {   // in case he is  a Doctor
            
            doctor w;
            w.set_name();
            w.set_id();
            w.set_dob();
            w.set_age();
            w.set_major();
            break;
        }

        default:
            cout << "Invalid number!" << endl;
            break;
    }

    return 0;
}
