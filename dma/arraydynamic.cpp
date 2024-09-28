// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int* f(){
    int * xptr = new int;
    *xptr = 10;
    
    return xptr;
}
int main() {
    // int * ptr = f();
    // cout<<*ptr<<endl;
  
  int* aptr = new int[4];
  
for(int i = 0; i<4 ; i++){
    cin>>*(aptr+i);
}
for(int i = 0; i<4 ; i++){
    // cout<<*(aptr+i)<<" ";
    cout<<aptr[i]<<" ";
}
   
    return 0;
}