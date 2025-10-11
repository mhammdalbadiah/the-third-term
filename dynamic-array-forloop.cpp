//
//  dynamic-array-forloop.cpp
//  mid
//
//  Created by  mohammd al-badiah on 11/10/2025.
//

#include <iostream>
using namespace std ;
 
 
int main (){
    
    int *ptx = new int[8] ;
     
     
    for (int i = 0 ; i < 8 ; i++){
        ptx[i] = ptx[i] + 1 + i ;
        ptx[i] = ( ptx[i]) * 3 ;
        cout << ptx[i] << endl;
     }
     
     return 0;
}
