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
    int arr[] = {0,1,0,2,1,0,1,3,2,1,2,1};
    int n = sizeof(arr)/sizeof(int);
   
   int total = 0;
  for(int i = 0;i<n;i++){
       int li = arr[i] ;
       int ri = arr[i];
       for(int j=i-1;j>=0;j--){
           li = max(li, arr[j]);
       }
       for(int j = i+1;j<n;j++){
           ri= max(ri,arr[j]);
       }
       
       int width = min(li,ri) - arr[i];
       total += width;
}
cout<<total;

    // int k = 3 ;
    
    // int freq[10] = {0};
    // for(int i = 0; i<n ;i++){
    //     //   int l = arr[i];
    //     //   freq[l]++;
    //   freq[arr[i]]++;
    // }
    
    //  for(int i = 0; i<k+1 ;i++){
    //   cout<<"freq("<<i<<") = "<<freq[i]<<" "<<endl;
    // }
    
    
    return 0;
}
