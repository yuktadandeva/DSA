// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> fBruteForce(int arr[], int n){
    
    vector<int> ans;
    
      for(int i = 0 ; i<7; i++){
        bool flag = false;
        for(int j = i+1; j<7; j++){

            if(arr[j]>arr[i]){
                ans.push_back(arr[j]);
                flag = true;
                break;
            }
        }
        
        if(flag == false){
            ans.push_back(-1);
        }
        
    }

return ans;
}

vector<int> fOptimised(int arr[], int n){
    vector<int> ans;
    stack<int> s;
    for(int i = n; i>=0 ; i--){
        while(!s.empty() and s.top()<=arr[i]){
            s.pop();
        }
        
        if(s.empty()){
            ans.push_back(-1);
        }else{
            ans.push_back(s.top());
        }
        s.push(arr[i]);
    }
    
    return ans;
}

int main() {
    int arr[] = {5,3,6,7,2,1,4};
    int n = 7;
    
    vector<int> ans = fOptimised(arr,n);
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<endl;
    }
    
    
  
    return 0;
}