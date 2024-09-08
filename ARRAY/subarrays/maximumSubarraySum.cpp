#include<iostream>
#include<climits>
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

void maximumSubarraySum(int arr[],int n){
    int sum = 0;
    int end ;
    int maxsofar = INT_MIN;
    for(int i = 0; i< n;i++){
        for(int j= i;j< 2*n;j++){

            for(int k = i;k<= j;k++){
                sum += arr[k];
            } 
            maxsofar = max(maxsofar, sum);
        }
        //  if(sum > maxsofar){
        //         maxsofar = sum ;
        //     }
    }
    cout<<maxsofar;
}

int main() {
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(arr)/sizeof(int);
    
    // generateSequence(arr, n);
    //quadratic algo

    // generateSubarrays(arr, n);
    //cubic algo

    maximumSubarraySum(arr, n);
    //cubic algo
    return 0;
}