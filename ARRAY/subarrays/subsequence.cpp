#include<iostream>
using namespace std;

void generateSequence(int arr[], int n){
    for(int x = 0; x< (1<<n); x++){
        //generating 2^n numbers 
        for(int k = 0; k < n; k++){
            //check bits of x number 
            if((x>>k)&1){
                cout<<arr[k]<<" ";
            }
        }
        cout<<endl;
    }
}

int main() {
    int arr[] = {10,20,30};
    int n = sizeof(arr)/sizeof(int);
    
    generateSequence(arr, n);
    
    
    
    return 0;
}