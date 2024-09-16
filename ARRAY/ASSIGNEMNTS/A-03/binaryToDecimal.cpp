#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(int n){
    int i = 0;
    int dec = 0;
   
    while(n>0){
       int ithBit = n%10;
       dec += ithBit*pow(2,i);
       
       n/=10;
       i++;
       
    }
    
    return dec;
}

int main() {
    int n;
    cin>>n;
    
    cout<<binaryToDecimal(n);

    return 0;
}