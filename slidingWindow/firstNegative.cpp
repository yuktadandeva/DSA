#include <iostream>
#include <unordered_map>
#include <queue>
using namespace std;

int main() {
    int arr[] = {-2,0,-1,2,-3,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int i = 0;
    int j = 0;
    
    int k = 4;
    
    queue<int> q;
    
    while(j<k){
        if(arr[j]<0){
            q.push(arr[j]);
        }
        j++;
    }
  
  if(q.empty()){cout<<0<<endl;}else{
  cout<<q.front()<<endl;}

    while(j<n){

        if(arr[i]<0){
            q.pop();
        }
         i++;
        if(arr[j]<0){
            q.push(arr[j]);
        }
        cout<<q.front()<<endl;
        j++;
    }
    
    return 0;
}