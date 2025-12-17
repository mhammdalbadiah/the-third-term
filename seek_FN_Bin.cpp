

#include <iostream>
#include <fstream>
#include <string>
using namespace std ;



  //  =========  SEEK Functions ==========
  //
  //   seekp = seek put we use it with " ofstream " to write into file
  //
  //   seekg = seek get we use it with " ifstream " to read from file
  //
  //   ===================================


 // fstream












int main () {
    
    fstream file ;
    
    int x = 5 , c = 4  ; // 4
    float a = 3.9f , g = 65.5005f ; // 4
    char d = 'D' /* 1 */, name[20] = "Mohammd" ; // 20
    
                   
    
    
    // write First Draft :
     
    file.open ("b.txt" , ios::out | ios::binary);
    
    file.write((char*)&x , sizeof(x));
    file.write((char*)&a,sizeof(a));
    file.write (&d ,sizeof(d));
    file.write (name , sizeof(name));
    
    file.close() ;
    
    
    
    
    
    
    
    // print First Draft :
    
    file.open("b.txt",ios::in |ios::binary);

    file.read((char*)&x ,sizeof(x));
    file.read((char*)&a , sizeof(a));
    file.read (&d ,sizeof(d));
    file.read(name ,sizeof(name));
    
    cout << " Before the Update : " << endl;
    cout << x << endl
         << a << endl
         << d << endl
         << name << endl;
    file.close();
    
    
    
    
    
    
    
    
 
     // to update from the END
    // second Draft :
    
    file.open("b.txt",ios::app |ios::binary);
    file.seekp(0, ios::end);
    file.write((char*)&g ,sizeof(g));
    file.close();
    

    
    
    
    // read second draft
    file.open("b.txt",ios::in |ios::binary);
    file.read((char*)&x ,sizeof(x));
    file.read((char*)&a , sizeof(a));
    file.read (&d ,sizeof(d));
    file.read(name ,sizeof(name));
    file.read((char*)&g , sizeof(g));
    
    
    
    
    
    
    // print the data
    cout << endl;
    cout << " After the Update : " << endl;
    cout << x << endl
         << a << endl
         << d << endl
         << name << endl
         << g  << endl << endl;
    file.close();
    
    
    
    
    
    
    // Overwrite DATA
    //  OLD :  [int x][float a][char d][name[20][float[g]]
    //            5 |    3.9 |    d  | mohammed | 65.5005
    //  NEW : [int x][int c][char d][name[20][float[g]]
    //          5      4       d      mohammed   65.5005
    
    file.open("b.txt" , ios:: in | ios::out | ios::binary);
                // 4
    file.seekp(sizeof(int) , ios::beg);
    file.write((char*)&c ,sizeof(c));
    file.close();
    
    
    
    
    
    
    
    
    // To Check
    
    //   [int x][int c][char d][name[20][float[g]]
    //      4   +   4  +  1    +  20     +  4
    
    file.open("b.txt", ios::in | ios::binary);
    
    file.seekg (-33 , ios::end);
    file.read((char*)&x , sizeof(x));
    
    file.seekg(-29 , ios::end);
    file.read((char*)&c , sizeof(c));
    
    file.seekg(-25 , ios::end);
    file.read(&d ,sizeof(d));
    
    file.seekg(9,ios::beg);
    file.read(name ,sizeof(name));
    
    file.seekg(20 , ios::cur);
    file.read((char*)&g ,sizeof(g));
    
    
    
    cout << " OverWrite DATA  : " << endl;
    cout << " x :"<< x << endl;
    cout << " c :"<< c << endl;
    cout << " d :"<< d << endl;
    cout << " name : " << name << endl;
    cout << " g : " << g << endl;
    
    
    
    file.close();
    
    return 0;
}
