// Online C++ compiler to run C++ program online
#include <iostream>
#include<cstring>
using namespace std;
int main() {
   
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0; i<n; i++){
       cin>>arr[i];
    }
    
    //Array program - 1 / target value
    int T;
    cin>>T;
    
    int count=0; //creating a flag
    // bool flag = false;
    
    int i;
    for(i=n-1; i>=0 ;i--){
        if(arr[i]==T){
            cout<<i<<" ";
            count++;
            // flag = true;

        }
    }
    //option - 3
    // if(!flag){
    //     cout<<-1;
    // }
    // option - 2
    if(count==0){
        cout<<-1;
    }
    // if(i==-1){
    //       cout<<-1;
    // }
  
  
    // int F[5];
    // memset(F,0, sizeof(F));
    // for(int i=0; i< 5; i++){
    //     cout<<F[i]<<" ";
    // }
    
    
    
    
    
//   int arr[5];
//   int n;
//   n= sizeof(arr)/sizeof(int);
  
//   cout<<sizeof(arr);
//   for(int i=0;i<=n-1;i++){
//       cout<<arr[i]<<" ";
//   }

// int arr[100];
// int n;
// cin>>n;

// for(int i= 0; i<=n-1; i++){
//     cin>>arr[i];
// }

// for(int i=0 ; i<=n-1; i++){
//     cout<<arr[i]<<" ";
// }

// cout<<endl;

// for(int i=n-1 ; i>=0; i--){
//     cout<<arr[i]<<" ";
// }
  
//   cout<<endl;
//  int arr2[5] = {1, 2 , 3, 4, 5} ;
//  int m = sizeof(arr2)/sizeof(int);
//  for(int i=0; i<m; i++){
//      cout<<arr2[i]<<" ";
//  }
    return 0;
}