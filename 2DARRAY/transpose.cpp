// Online C++ compiler to run C++ program online
#include <iostream>
#include<utility>
using namespace std;

void transposeMatrix(int arr[][4], int n ){
    
    for(int i = 0; i<n ;i++){
        for(int j = i+1; j<n ;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    
}

int main() {

int arr[][4] ={{11,12,13,14},
                {15,16,17,18},
                {19,20,21,22},
                {23,24,25,26}
    
};


int n = 4;
transposeMatrix(arr, n);

for(int i = 0; i<n ;i++){
    for(int j = 0; j<n ;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

    return 0;
}