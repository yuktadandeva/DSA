#include <iostream>
#include <utility>
using namespace std;

void bubbleSort(int arr[],int n){
    for(int i = 1; i<= n-1; i++){
        //n-i is unsorted array 
        for(int j = 0; j< n-i ;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void selectionSort(int arr[], int n){
    for(int i=0;i<=n-2 ;i++){
        int minIdx = i;
        for(int j = i+1;j<n;j++){
            if(arr[j] < arr[minIdx]){
                minIdx = j;
            }
        }
        swap(arr[i],arr[minIdx]);
    }
}

void insertionSort(int arr[], int n){
for(int i=1;i<=n-1;i++){
    int key = arr[i];
    
    int j = i-1;
    while(j>=0 and key< arr[j]){
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1]= key;
}
}

int main() {
  // bubble sort 
  int arr[] = {10,40,30,50,20};
  int n = sizeof(arr)/sizeof(int);
  
//   time: O(n^2)
//   bubbleSort(arr, n);

//   selectionSort(arr, n);
//   time: O(n^2)
//   time: big omega(n^2) best-case

insertionSort(arr, n);
// time: O(n^2)
// time: big omega(n) best - case

  for(int i =0 ;i<=n-1;i++){
      cout<<arr[i]<<" ";
  }
    cout << "";

    return 0;
}