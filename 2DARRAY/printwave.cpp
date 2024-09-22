#include<iostream>
using namespace std;
int main() {
  int arr[3][4] ={{10,20,30},
                {40,50,60},
                {70,80,90}};

for(int i = 0; i<3 ;i++){
    if(i%2==0){
         for(int j = 0; j<3 ;j++){
        cout<<arr[j][i]<<" ";
    }
    }else{
         for(int j = 2; j>=0 ;j--){
        cout<<arr[j][i]<<" ";
    } 
    }
   
}
    return 0;
}