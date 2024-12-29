#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    int arr[] = {1,4,2,7,6,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int i = 0;
    int j = 0;
    
    int k = 4;
    int w_sum = 0;
    
    while(j<k){
        w_sum += arr[j];
        j++;
    }
    
    int max_so_far = w_sum;
    
    while(j<n){
        w_sum -= arr[i];
        i++;
        w_sum += arr[j];
        
        max_so_far = max(max_so_far, w_sum);
        j++;
    }
    cout<<max_so_far<<endl;
    return 0;
}