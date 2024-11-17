// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <stack>
using namespace std;


vector<int> fOptimised(int arr[], int n){
    vector<int> ans;
    stack<int> s;
    for(int i = n-1; i>=0 ; i--){
        while(!s.empty() and arr[s.top()]>=arr[i]){
            s.pop();
        }
        
        if(s.empty()){
            ans.push_back(n);
        }else{
            ans.push_back(s.top());
        }
        s.push(i);
    }
    
    return ans;
}

int main() {
    int arr[] = {2,5,1,3,6,4,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    vector<int> ans = fOptimised(arr,n);
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    
    
  
    return 0;
}