#include <iostream>
#include <algorithm>

using namespace std;
int main() {
    //selection sort
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    
    int a[100];
    cout<<"enter "<< n<< " elements : ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int min;
    for(int i=0;i<=n-2; i++){
    min = i;
    for(int j=i+1;j<=n-1;j++){
    if(a[j]<a[min]){
        min = j;
    }
    }
      swap(a[i],a[min]);
    }
  
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    
    
    return 0;
}
