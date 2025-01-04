#include <iostream>
#include <unordered_map>
#include <queue>
using namespace std;

int main() {
    int arr[] = {2,3,2,4,0,2,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int i = 0;
    int j = 0;
    int k = 6;
    int w_sum = 0;
    int max_len = 0;

    while(j<n){
    
    w_sum+=arr[j];
    
    if(w_sum>k){
        while(w_sum>k){
            w_sum -=arr[i];
            i++;
        }
    }
    
    if(w_sum == k){
        max_len = max(max_len, j-i+1);
    }
    j++;
    }
    
    cout<<max_len<<endl;
    return 0;
}