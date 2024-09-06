#include <iostream>
#include <algorithm>

using namespace std;
int main() {
    //insertion sort
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    
    int a[100];
    cout<<"enter "<<n<< " elements : ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    for(int i=1;i<n;i++){
        int puc = a[i],j;
        for(j =i-1;j>=0 and a[j]>puc;j--){
            a[j+1]=a[j];
        }
        a[j+1]=puc;
    }
    
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    
    
    return 0;
}
