// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> fOptimised(int arr[],int n){
    vector<int> ans;
    stack<pair<int,int>> s;
    
    for(int i = 0; i<n ; i++){
        int j;
        
        while(!s.empty() and s.top().second <= arr[i]){
            s.pop();
        }
        
        if(s.empty()){
            j = -1;
        }else{
            j = s.top().first;
        }
        
        ans.push_back(i-j);
        s.push({i,arr[i]});
    }
    
    return ans;
}

int main() {
    int arr[] = {5,3,6,7,2,1,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    vector<int> ans = fOptimised(arr,n);
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<endl;
    }
    
    
  
    return 0;
}