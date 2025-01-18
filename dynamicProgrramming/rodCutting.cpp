#include<iostream>
#include<vector>

using namespace std;

int f(int n, vector<int> p, vector<int> dp){
//lookup
if(dp[n]!=-1){
    return dp[n];
}
//base case
if(n==0){
    return 0;
}

int msf = INT_MIN;
//recursive case
for(int i = 1; i<=n;i++){
    msf = max(msf,p[i-1] + f(n-i, p,dp));
}

return msf;
}

int fBottomUp(int n,vector<int> prices){
    vector<int> dp(n+1,-1);
    dp[0] = 0;

    for(int i = 1; i<=n;i++){
        int msf = INT_MIN;

        for(int j = 1; j<=i;j++){
            msf = max(msf,prices[j-1] + dp[i-j]);
        }

        dp[i] = msf;
    }

    return dp[n];
}

int main() {
    vector<int> prices = {
        1,5,8,9,10,17,17,20
    };

    int n = prices.size();

    vector<int> dp(n+1,-1);
    
    cout<<fBottomUp(n,prices)<<endl;

    return 0;
}