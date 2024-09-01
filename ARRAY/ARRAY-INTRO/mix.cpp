// Online C++ compiler to run C++ program online
#include <iostream>
#include<utility>
#include <cmath>
using namespace std;

bool isEven(int n){
    // if(n%2==0){
    //     return true;
    // }else{
    //     return false;
    // } 
    //ternary operator
    return n%2==0;
}

int multiply(int x, int y){
    return x*y;
}

void incrementByReference(int &a){
    ++a;
}
void incrementByValue(int a){
    ++a;
}

void swap(int& a, int& b){
    int temp = a;
    a=b;
    b=temp;
}

bool isPrime(int x){
    int sqrtX =  sqrt(x);
    for(int i = 2; i<=sqrtX ;i++){
        if(x%i==0){
            // cout<<"is non prime"<<endl;
            return false;
        }
    }
    return true;
    
}

void printPrime(int m){
    for(int i=2;i<=m;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
}

int main() {
    int m;
    cin>>m;
    
    printPrime(m);
    
    
    // isPrime(33);
    // isPrime(5);
    
    // int x = 20;
    // int y = 40;
    
    // swap(x,y);
    // cout<<x<<" "<<y<<endl;

    
    // cout<< multiply(2,4)<<endl;
//     int a=8;
//   incrementByValue(a);
//   cout<<a<<endl;
//   incrementByReference(a);
//   cout<<a;
    
    // int n;
    // cin>>n;
    // if(isEven(n)){
    //     cout<<"even";
    // }else{
    //     cout<<"odd";
    // }
    // // cout<<"inside main body"<<endl;
    // cout<<"calling greet"<<endl;
    
    // greet();
    // cout<<"outside greet";
    

}