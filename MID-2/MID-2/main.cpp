 


  // ================================
  // operator overloading in person.h
  // ================================


#include "student.h"
using namespace std ;

int main (){
    
    person a1(2,20,"saad","MD"), a2(3,19,"Mohammd","IT");
    student b(3,19,"mohammd","IT",4.8,3);
     
    //a1.Display();
    
    // cout << "student now !!" << endl;
    //b.Display();
    
    *b;
    ++b;
    b.Display();
    
    person a3 = a1 * a2 ;
    a3.Display();
    
    
    return 0;
    
}
