//
//  lab-2-a.cpp
//  LAB
//
//  Created by  mohammd al-badiah on 13/09/2025.
//



 //  Q1



#include <iostream>
#include <cmath>
using namespace std ;




double rint ( double num ) {  // first FN
    
    return floor( num * 0.5 ) ;
    
    
}


double r10 ( double num ) {  // second FN
    
    return floor( num * 10 + 0.5 ) / 10  ;
    
    
}

double r100 ( double num ) {  // thrid FN
    
    return floor( num * 100 + 0.5 ) / 100  ;
    
    
}

double r1000 ( double num ) {   // fourth FN
    
    return floor( num * 1000 + 0.5 ) / 1000  ;
    
    
}



int main (){
    
    double a ;
    int x;
    
    while (true) {
        
        cout << "enter the number : " << endl;
        cin >> a;
        
        cout << " the orginal number :  " << a << endl;
        cout << " the int number  :" <<  rint(a) <<endl;
        cout << " the 10 number : " << r10(a) << endl;
        cout << " the 100 number : " << r100(a) << endl;
        cout << " the 1000 number : " << r1000(a) << endl;
        
        cout << "if u want to exit press 1 " << endl;
        cin >> x ;
        
        if (x==1){
            break;
        }
    
    
    }
    
    return 0;
}

