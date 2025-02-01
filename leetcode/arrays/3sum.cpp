#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void threeSum(vector<int> arr,int tsum){
vector<int> ans;
//iterate over array get the first element then iterate over rest of the array using 2-pointer approach 
for(int i = 0; i<arr.size();i++ ){
    tsum = tsum - arr[i];
    sort(arr.begin()+1, arr.end());
    int j = 0;
    int k = arr.size()-1; 
    while(j<k){
        int cSum = arr[j] + arr[k];
        bool flag = false;

        if(cSum>tsum){
            k--;
        }else if(cSum == tsum){
            ans.push_back(arr[i]);
            ans.push_back(arr[j]);
            ans.push_back(arr[k]);
            flag = true;
        }else{
            j++;
        }

        if(flag == true){
            break;
        }
    }
} 

for(int x: ans){
    cout<<x<<" ";
}
}

int main() {
    vector<int> arr = {
        -1,0,1,2,-1,4
    };

    threeSum(arr,0);
    
    return 0;
}