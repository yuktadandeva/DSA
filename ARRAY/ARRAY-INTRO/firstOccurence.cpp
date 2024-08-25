#include <iostream>
#include<cstring>
using namespace std;
int main() {
   
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0; i<n; i++){
       cin>>arr[i];
    }
    
    //Array program - 1 / target value
    int T;
    cin>>T;
    
    // int count=0; creating a flag
    // bool flag = false;
    
    int i;
    for(i=0; i<n ;i++){
        if(arr[i]==T){
            cout<<i<<" ";
            // count++;
            // flag = true;
            break;
        }
    }
    //option - 3
    // if(!flag){
    //     cout<<-1;
    // }
    // option - 2
    // if(count==0){
    //     cout<<-1;
    // }
    if(i==n){
          cout<<-1;
    }
    return 0;
}