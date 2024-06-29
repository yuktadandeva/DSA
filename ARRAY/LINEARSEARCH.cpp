  //linear search
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter size ofarray : ";
    cin>>n;
    
    int a[100];
    cout<<"enter "<< n<< " elements : ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    int key,i ;
    cout<<"enter key : ";
    cin>>key;
    
    for(i=0; i<n ;i++){
        if(a[i]==key){
            cout<<"Found at index "<<i;
            break;
        }
    }
    if(i==n){
        cout<<"not found";
    }
  
    return 0;
}
