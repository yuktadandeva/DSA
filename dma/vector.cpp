// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int* resize(int* A, int c){
    int* B = new int[c*2];
    for(int i= 0; i<c; i++){
        B[i]=A[i];
    }
    delete [] A;
    return B;
}

int main() {
int* A = new int[1];
int c = 1;
int i = 0;

int x;

while(true){
    cin>>x;
    
    if(x<0) break;
    
    if(i==c){
        A = resize(A, c);
        c = 2*c;
    }
    A[i] = x;
    i++;
}
    return 0;
}