// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int* f(){
    int * xptr = new int;
    *xptr = 10;
    
    return xptr;
}
int main() {
    int * ptr = f();
    cout<<*ptr<<endl;
  
   
    return 0;
}