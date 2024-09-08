#include <iostream>
#include <climits>
using namespace std;

int mostWater(int arr[], int n){

 int maxarea = INT_MIN;

    for(int i=0;i<=n-2;i++){
        for(int j = i+1;j<=n-1;j++){
            int width = j - i;
            int height = min(arr[j],arr[i]);
            int area = width*height;
            maxarea = max(area,maxarea);
            // if(area>maxarea){
            //     maxarea = area;
            // }
        }
    }
    return maxarea;
}

int maxWaterOptimised(int arr[], int n){
    int i = 0;
    int j = n-1;
    int maxarea = INT_MIN;

    while(i<j){
    int width = j - i;
    int height = min(arr[j], arr[i]);
    maxarea = 
    i++;
    j--;
    }
}
int main() {
    int arr[] = {1,8,6,2,5,4,8,3,7};
    int n = sizeof(arr)/sizeof(int);
   
    cout<<mostWater(arr,n);

    return 0;
}