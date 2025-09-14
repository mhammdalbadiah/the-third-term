//
//  lab-2-a-q2.cpp
//  LAB
//
//  Created by  mohammd al-badiah on 13/09/2025.
//

// Q2


#include <iostream>
using namespace std ;



int intpower( int b , int e ) {
    
    int r = 1 ;
    
    for ( int i = 0 ; i <= e ; i++ ){
        
        r += b ;
        
        
    }
    return r ;
}



int main (){
    
    int e , b ;
    
    cout << "enter the exponent : " << endl;
    cin >> e ;
    
    cout << "enter the base : " << endl;
    cin >> b;
    
    cout << "the result 'll be : " << intpower(b,e) << endl;
    
    
    return 0;
}
