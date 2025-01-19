#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int f(const vector<int>& arr, int n, int k, int i){
    if(i==n){
        return 0;
    }

    int maxSoFar = INT_MIN;
    int maxij = arr[i];

    for(int j = i; j<i+k and j<n ; j++){
        int maxij = max(maxij, arr[j]);
        maxSoFar = max(maxSoFar, (j-i+1)*maxij + f(arr,n,k,j+1));
    }

    return maxSoFar;
}

int fBottomUp(vector<int> arr, int n, int k){
vector<int> dp(n+1);
dp[n] = 0;

for(int i = n-1; i>=0; i--){
    int maxSoFar = INT_MIN;
    int maxij = arr[i];

    for(int j = i; j<i+k and j<n ; j++){
        int maxij = max(maxij, arr[j]);
        maxSoFar = max(maxSoFar, (j-i+1)*maxij + dp[j+1]);
    }

    dp[i] = maxSoFar;
}

return dp[0];
}

int main() {


    
    return 0;
}