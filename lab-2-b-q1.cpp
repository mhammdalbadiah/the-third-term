//
//  lab-2-b-q1.cpp
//  LAB
//
//  Created by  mohammd al-badiah on 14/09/2025.
//


#include <iostream>
using namespace std ;


int power(  int b , int e ) {
    
    if ( e == 1 ) {
        return b ;
        
    }
    
    return b * power ( b , e -1 ) ;
    
}


int main () {
    
    int b , e ;
    
    
    cout << "etner the base : " << endl;
    cin >> b ;
    
    cout << "enter the exponent : " << endl;
    cin  >> e ;
    
    cout << " the result : " << power ( b , e ) << endl;
    
    return 0;
    
}
