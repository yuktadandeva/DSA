#include<iostream>
#include<vector>

using namespace std;

int fBottomUp(int n, int k){
    vector<int> dp(n+1);
    dp[0] = 1;
    
    for (int i = 1;i<=n;i++){
        int cnt = 0;
        for(int j = 1; j<=k; j++){
            if(i-j>=0){
            cnt += dp[i-j];
            }
        } 
        dp[i] = cnt;
    }

    return dp[n];
}

int fBottomUpOptimized(int n, int k){
    vector<int> dp(n+1);
    dp[0] = 1;
    dp[1] = dp[0];

    for(int i = 2; i<=k;i++){
        dp[i] = 2*dp[i-1];
    }
    
    for (int i = k+1; i<=n;i++){
        dp[i] = 2*dp[i-1] - dp[i-k-1];
    }

    return dp[n];
}

int main() {
    int n = 4;
    int k = 3;

    cout<<fBottomUp(n, k)<<" "<<fBottomUpOptimized(n, k)<<endl;
    
    return 0;
}