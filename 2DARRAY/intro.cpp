// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
   
// int arr[2][3];
// cout<<sizeof(arr)<<endl;
// char crr[3][4];
// cout<<sizeof(crr)<<endl;
// bool brr[4][5];
// cout<<sizeof(brr)<<endl;
// double drr[4][6];
// cout<<sizeof(drr)<<endl;

int arr[3][4] ={{10,15,20,25},
                {30,35,40,45},
                {50,55,60,65}};

for(int i = 0; i<3 ;i++){
    for(int j = 0; j<4 ;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

int b[10][10];
int m,n;
cin>>m>>n;

for(int i = 0; i<m ;i++){
    for(int j = 0; j<n ;j++){
        cin>>b[i][j];
    }
}
for(int i = 0; i<m ;i++){
    for(int j = 0; j<n ;j++){
        cout<<b[i][j]<<" ";
    }
    cout<<endl;
}


    return 0;
}