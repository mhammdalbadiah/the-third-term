//
//  lab-2-b-q3.cpp
//  LAB
//
//  Created by  mohammd al-badiah on 14/09/2025.
//

#include <iostream>
using namespace std ;


int g (     int x , int y ) {
    
    if  (y == 0 )
        return x ;
        return g( y, x %y  );
    
    
}

int main () {
    
    
    int x, y ;
    
    cout << "etner 2 int : " << endl;
    cin >> x >> y ;
    
    if ( x < y ) {
        int t = x ;
        x= y ;
        y= t ;
        
    }
    
    
    cout << " gcd  : " << g(x,y) << endl;
    return 0; 
}
