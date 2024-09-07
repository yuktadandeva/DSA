#include<iostream>
using namespace std;

void generateSequence(int arr[], int n){
    for(int x = 0; x< (1<<n); x++){
        for(int k = 0; k < n; k++){
            if((x>>k)&1){
                cout<<arr[k]<<" ";
            }
        }
        cout<<endl;
    }
}

void generateSubarrays(int arr[], int n){
    
    for(int i = 0; i< n;i++){
        for(int j= i;j<n;j++){
            for(int k = i;k<= j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
}

int main() {
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(int);
    
    // generateSequence(arr, n);
    
    generateSubarrays(arr, n);
    
    return 0;
}