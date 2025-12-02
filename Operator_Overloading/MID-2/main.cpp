 




  /* ================================
      operator overloading in person.h
     ================================*/

#include "person.h"
#include "student.h"
using namespace std ;

int main (){
    
    // Obj
    person a1(2,20,"saad","MD"), a2(2,20,"Mohammd","IT");
   student b(3,19,"mohammd","IT",4.8,3);
     
    a1.Display(); // Print Obj a1
    cout << "student now !!" << endl;
    b.Display();
    
    person g = a2-a1;  // how to use " - " overloading
    g.Display();
    person h = a1-a2;
    h.Display();
        
    if ( a2 == a1) // how to use " == " overloading
        cout << "11"<<endl;
    else
        cout << "00" << endl;
    
    
    
    counter a[5] ; // array of objects
    
    for (int i=0;i<5;i++){
        cout << "enter : ";
        int x;
        cin >> x;
        a[i].set_count(x);
        a[i].Display();
        ++a[i];  // pre increment
        a[i].Display();
        a[i]++; // post increment
        a[i].Display();
    }
    
    return 0;
}

