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

int binarySearch(int arr[], int n, int t){
    int s = 0;
    int e = n-1 ;
    
    while(s <= e){
        int mid = (s+e)/2;
        if(arr[mid] == t){
            return mid;
        }else if(t > arr[mid] ){
            s = mid +1 ;
        }else{
            e = mid - 1;
        }
        
    }
    return -1;
    
}

int lowerBound(int arr[], int n, int t){
    int s = 0;
    int e = n - 1;
    
    int ans = -1;
    while(s <= e){
        int m = s + (s-e)/2;
        if(arr[m] == t){
            ans = m;
            e = m - 1;
        }else if(t > arr[m]){
            s = m + 1;
        }else{
            e = m - 1;
        }
    }
    return ans;
}


int main() {
//   bubble sort 
  
  int arr[] = {10,30,30,30,20};
  int n = sizeof(arr)/sizeof(int);
  int t = 30;
//   time: O(n^2)
//   bubbleSort(arr, n);

//   selectionSort(arr, n);
//   time: O(n^2)
//   time: big omega(n^2) best-case

//  insertionSort(arr, n);
// time: O(n^2)
// time: big omega(n) best - case

// cout<<binarySearch(arr, n, t)<<endl;

//first occurence
cout<<lowerBound(arr, n, t)<< endl;
  for(int i =0 ;i<=n-1;i++){
      cout<<arr[i]<<" ";
  }
    cout << "";

    return 0;
}