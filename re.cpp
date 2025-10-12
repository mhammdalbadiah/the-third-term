#include <iostream>
using namespace std;

int re(int r[], int n) {
    if (n == 0)return 0;
    return r[n - 1] + re(r, n - 1);
 }



int main() {
  
    int arr[3];
    cout << "enter the value :";
    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
    }
    cout << re(arr, 3);

 

     return 0;
}
