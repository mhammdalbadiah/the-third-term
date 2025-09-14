//
//  lab-2-a-q4.cpp
//  LAB
//
//  Created by  mohammd al-badiah on 14/09/2025.
//

#include <iostream>
using namespace std ;

void ps(int s ) {
    
    for ( int i = 0 ; i < s ; i++ ){
        
        for ( int j = 0 ; j < s ; j++ ) {
            
            cout << "*" ;
        }
        cout <<endl;
    }
}


int main () {
    
    
    int x;
    cout << " enter the length : " << endl;
    cin >> x;
    
    ps(x) ;
    
    return 0;
    
}
