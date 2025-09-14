//
//  lab-2-a-q5.cpp
//  LAB
//
//  Created by  mohammd al-badiah on 14/09/2025.
//

#include <iostream>
using namespace std ;


double   ca ( double r ) {
    
    const double  p = 3.14 ;
    
    return p * r * r ;
    
}


int main () {
    
    double r ;
    
    cout << " enter the radius of circal : " << endl;
    cin >> r ;
    
    double a ;
    
    a = ca(r) ;
    cout << a << endl;
    
    return 0;
}
