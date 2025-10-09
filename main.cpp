 
#include <iostream>
 #include <string>

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

   
    return 0;
}
