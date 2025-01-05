#include<iostream>
#include<vector>
using namespace std;

int fTopDown(int n, vector<int>& dp){
//lookup
if(dp[n] != -1){
    return dp[n];
}

//base case
if( n==0 or n==1){
    return n;
}

return dp[n]= fTopDown(n-1,dp)+fTopDown(n-2, dp);
}

int fBottomUp(int n){
    vector<int> dp(n+1);

    dp[0] = 0;
    dp[1] = 1;

    for(int i = 2; i<=n; i++){
        dp[i] = dp[i-1]+dp[i-2];
    }

    return dp[n];
}

int fBottomUpSpaceOptimised(int n){
    int a = 0, b = 1;
    int c = 0;
    for(int i = 2; i<=n; i++){
        c = a+ b;
        a = b;
        b = c;
    }

    return c;
}
int main() {
    int n = 5;
    vector<int> dp(n+1,-1);

    cout<<fTopDown(n,dp)<<endl;
    cout<<fBottomUp(n)<<endl;
    cout<<fBottomUpSpaceOptimised(n)<<endl;
    return 0;
}