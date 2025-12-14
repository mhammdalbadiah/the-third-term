#include <iostream>
#include <fstream>
#include <string>
using namespace std ;


void str2arr ( string src , char dst[]){
    
    const unsigned long long  maxchar = 49 ;
    int len = (src.length() < maxchar ) ? src.length() : maxchar ;
    
    for ( int i = 0 ; i < len ; i++){
        
        dst[i] = src[i] ;
    }
    
    dst[len] = '\0';
}

int main (){
  
    ofstream out ;
    
    out.open("practis_on_files_with_binary.txt", ios::out | ios::binary);
    
    if(!out){
        cout << "your File can't be open " << endl;
        return 0;
    }
    
    
    int x , c;
    string name ;
    char arr[50]  ;
    
    cout << "enter The values : " << endl;
    
    for (int i=0; i<3 ; i++){
        
        cout << "enter the ID : " ;
        cin >> x ;
        out.write( (char*)&x , sizeof(x));
        cout << endl;
        cout << "enter the AGE :";
        cin >> c ;
        out.write((char*)&c , sizeof(c));
        cout << endl;
        cout << "enter the NAME :";
        cin >> name;
        str2arr(name ,arr);
        out.write(arr , sizeof(arr));
        cout << endl;
    
        
    }
    
    out.close();
    
    
    
    ifstream in ;
    
    in.open("practis_on_files_with_binary.txt",ios::in |ios::binary);
    
    for(int i = 0 ; i <3 ; i++ ) {
        
        in.read( (char*)&x , sizeof(x));
        in.read((char*)&c , sizeof(c));
        in.read(arr,sizeof(arr));
        
        arr[49] = '\0';
        
        cout << "person num : " << i+1 << endl;
        cout << "ID : " << x << endl;
        cout << "AGE :" << c << endl;
        cout << "NAME :" << arr << endl;
        
    }
    
    in.close();
    
    
    
    
    
    
    return 0;
}
