 
#include <iostream>
 #include <string>
#include "uni.h"
#include <vector>

using namespace std ;


int main (){
    
    int x = 0 ;
    
    cout << "enter the size of the array : " << endl;
    cin >> x;
    
    int *ptx = new int[x];
    
    cout << "enter the Data : " << endl;
    
    for (int i = 0; i<x;i++ ){
        cin >> ptx[i] ;
    }
    
    for (int i = 0; i<x;i++ ){
        cout << ptx[i] <<endl;
    }
    
        delete[] ptx ; // !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

    
    
    
     
    
    /*uni a[5];3
    
    uni az = {101,20,"Mhammd","IT"};
    az.display();
   int i =0 ,aa;
  string n,m ;

    for (int ii=0;ii<5;ii++){
        cout << "enter your ID : " ;
        cin >> i;
        a[ii].set_id( i);
        cout << endl;
        cout << "enter your AGE : ";
        cin >> aa;
        a[ii].set_age(aa);
        cout << endl;
        cout <<"enter your NAME :" ;
        cin >> n ;
        a[ii].set_name( n);
        cout << endl;
        cout << "enter your MAJOR :" ;
        cin >> m ;
        a[ii].set_major( m);
    }
    cout << endl << endl << endl;
    int x=0;
    cout << "enter 1 to print : " << endl;
    cin >> x;
    if ( x == 1 ) {
        
        for (int ii=0;ii<5;ii++){
            a[ii].display();
        }
        
        
        
    }
  
   */
    
    return 0;
}
