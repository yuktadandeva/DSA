
#include <iostream>
#include <algorithm>

using namespace std;
int main() {
    //bubble sort
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    
    int a[100];
    cout<<"enter "<< n<< " elements : ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    for(int i=0;i<=n-2;i++){
    for(int j=0; j<=n-2 ;j++){
    if(a[j]>a[j+1]){
        swap(a[j], a[j+1]);
    }
    }
    }
    
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    
    
    return 0;
}
