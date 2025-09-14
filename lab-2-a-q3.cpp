


#include <iostream>
using namespace std ;

bool even(int num ){
    
    return ( num %2 == 0 ) ;
}

int main (){
    
    
    int x , y;
    
    cout << "enter the int " << endl;
    
    while (true) {
        
        cin >> x;
        if ( x == -1 ) {
            break;
        }
        
        if ( even(x)) {
            cout << x << "even ! " << endl;
            
        }
        else
            cout << " odd ! " << endl;
        
    }
    
    return 0; 
}
