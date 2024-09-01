#include <iostream>
#include <utility>
using namespace std;

void bubbleSort(int arr[],int n){
    int totalComparisons = 0;
    for(int i = 1; i<= n-1; i++){
        
        //n-i is unsorted array 
        //flag for already sorted array
        bool flag = false;
        for(int j = 0; j< n-i ;j++){
            totalComparisons++;
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = true;
            }
        }
        if(!flag){
            break;
        }
    }
    cout<<"Total comparisions "<<totalComparisons<<endl;
}

int main() {
  // bubble sort 
  int arr[5] = {10,40,30,50,20};
  int n = sizeof(arr)/sizeof(int);
  //   time: Big omega(n) best-case 
  //   time: O(n^2) worst-case
  bubbleSort(arr, n);
  
  for(int i =0 ;i<=n-1;i++){
      cout<<arr[i]<<" ";
  }
    cout << "";

    return 0;
}