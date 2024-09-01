// Online C++ compiler to run C++ program online
#include <iostream>
#include<cstring>
#include<utility>
using namespace std;
int main() {
    
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(int);
    
    int j = n-1 ;
    while(j >= 1){
      swap(arr[j],arr[j-1]);
      j--;
    }

    // for(int i=0; i<n; i++){
    //   cout<<arr[i]<<" ";
    // }

    //method - 2 
    int temp = arr[n-1] ;
    for(int i = n; i>=0 ; i--){
        arr[i]= arr[i-1];
    }
    arr[0]= temp;
    for(int i=0; i<n; i++){
      cout<<arr[i]<<" ";
    }
    return 0;
}