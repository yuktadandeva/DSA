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
    int maxsofar = INT_MIN;
    int csum[n+1] ={0};
    
    for(int i=1;i<=n;i++){
        csum[i]= csum[i-1] + arr[i-1];
    }
    
    for(int i = 0; i< n;i++){
        
        for(int j= i;j< n;j++){
    
          
          maxsofar = max((csum[j+1]-csum[i]),maxsofar);
            //prefix sum approach / cummulative sum approach
            
            
            
            // for(int k = i;k<= j;k++){
            //     sum += arr[k];
            // }
            
            // maxsofar = max(maxsofar, sum);
        }
        //  if(sum > maxsofar){
        //         maxsofar = sum ;
        //     }
    }
    // for(int i=0;i<=n;i++){
    //     cout<<csum[i]<<" ";
    // }
    cout<<endl<<maxsofar;
}

int main() {
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(arr)/sizeof(int);
    
    // generateSequence(arr, n);
    
    // generateSubarrays(arr, n);
    
    maximumSubarraySum(arr, n);
    return 0;
}