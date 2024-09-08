// Online C++ compiler to run C++ program online
#include <iostream>
#include <climits>
using namespace std;

int maxWaterOptimised(int arr[], int n){
    int i = 0;
    int j = n-1;
    int maxarea = 0;

    while(i<j){
    
    int width = j - i;
    int height = min(arr[j],arr[i]);
    int area = width * height;
    maxarea = max(area, maxarea);
    if(arr[j]>arr[i]){
       i++; 
    }else if(arr[i]>arr[j]){
        j--;
    }else{
        j--;
    }
  
    }
    return maxarea;
}
int main() {
    int arr[] = {1,8,6,2,5,4,8,3,7};
    int n = sizeof(arr)/sizeof(int);
   
    cout<<maxWaterOptimised(arr, n);

    return 0;
}
