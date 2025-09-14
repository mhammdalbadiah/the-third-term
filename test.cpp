#include <iostream>
#include <string>
#include "student.h"
using namespace std; 

int main (){
  
   student a; 
 

   
   a.set_name();
   a.set_age();
   a.set_id();
   

    cout << a.get_name << endl; 
    cout << a.get_age << endl; 
    cout << a.get_id << endl; 
    



    return 0; 
}