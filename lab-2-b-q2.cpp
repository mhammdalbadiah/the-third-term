//
//  lab-2-b-q2.cpp
//  LAB
//
//  Created by  mohammd al-badiah on 14/09/2025.
//

#include <iostream>
using namespace std ;


int fib ( int n ) {
    
    if (n == 1 ) return 1;
    if ( n == 0 ) return 0;
    
    int p = 0, c = 0 , next ;
    
    for ( int i = 2 ; i  <=  n ; i++ ){
        
        next = p + c ;
        p = c ;
        c = next;
    }
    return c ;
    
}

int main () {
    
    
    int n ;
    cout << "enter n : " << endl;
    cin >> n;
    cout <<     fib(n) << endl;
    
    return 0;
}
