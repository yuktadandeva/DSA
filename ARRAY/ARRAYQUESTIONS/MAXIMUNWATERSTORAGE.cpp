// Online C++ compiler to run C++ program online
#include <iostream>
#include <climits>
using namespace std;
int main() {
    int arr[] = {1,8,6,2,5,4,8,3,7};
    int n = sizeof(arr)/sizeof(int);
    
    int maxarea = INT_MIN;
    for(int i=0;i<n;i++){
        for(int j = i;j<n;j++){
            int width = j - i;
            int height = min(arr[j],arr[i]);
            int area = width*height;
            if(area>maxarea){
                maxarea = area;
            }
        }
    }
    cout<<maxarea;

    return 0;
}