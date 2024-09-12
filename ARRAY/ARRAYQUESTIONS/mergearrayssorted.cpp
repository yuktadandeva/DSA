// Online C++ compiler to run C++ program online
#include <iostream>
#include <climits>
using namespace std;

void mergeArray(int arr[], int brr[],int crr[], int n, int m){
    int i=0;
    int j=0;
    int k =0;
    
    while(i<=n-1 and j<=m-1){
        if(arr[i]<brr[j]){
            crr[k] = arr[i];
            i++;
            k++;
        }else{
            crr[k] = brr[j];
            j++;
            k++;
        }
    }
    while(i<=n-1){
        crr[k]=arr[i];
        i++;
        k++;
    }
     while(j<=m-1){
        crr[k]=brr[j];
        j++;
        k++;
    }
    
}

int main() {
    int arr[] = {10,30,50,70};
    int brr[] = {20,40,60};
    int n = sizeof(arr)/sizeof(int);
    int m = sizeof(brr)/sizeof(int);
   
   int crr[n+m];
    mergeArray(arr,brr,crr,n,m);

for(int i = 0 ; i<n+m;i++){
    cout<<crr[i]<<" ";
}
    return 0;
}
