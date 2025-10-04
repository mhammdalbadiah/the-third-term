
#include <iostream>
using namespace std ;
 
int fac(int x){
   if ( x <= 1 ) return 1;
   return  x  *  fac(x-1);
}

long long fib (int n ){
   
   if (n==0)return 0;
   if (n==1)return 1;
   long long a = 0 , b= 1 ,temp ;
   
   for ( int i=2; i <= n ; i++ ){
       
       temp = a+b;
       a=b;
       b=temp;
   }
   return b;
}


int main (){
   cout << fib(7) << endl;
   return 0;
}



