#include<iostream>
#include<vector>

using namespace std;

int f(vector<int> stocks, int n, int k, int i){
    if(k==0){
        return 0;
    }

    if(i>=n){
        return 0;
    }

    int skip = f(stocks,n,k,i+1);

    int buySell = -1;
    for(int j = i+1; j<=n-1; j++){
        buySell = max(buySell, stocks[j]-stocks[i] + f(stocks,n,k-1,j+1));
    }

    return max(skip,buySell);
}

int fBottomUp(vector<int> stocks, int n, int K){
    vector<vector<int>> dp(n+1,vector<int>(K+1,0));

    for(int i = n-1; i>=0 ; i--){
        for(int k = 1; k<=K;k++){
            int skip = dp[i+1][k];
            int buySell = 0;
            for(int j = i+1; j<=n-1; j++){
                buySell = max(buySell, stocks[j]-stocks[i] + dp[j+1][k-1]);
            }

            dp[i][k] = max(skip,buySell);
        }
    }

    return dp[0][K];
}
int main() {
    vector<int> stocks = 
    {
      3,2,6,5,0,3  
    };
    int k = 2;
    
    int n = stocks.size();
    cout<<f(stocks,n,k,0)<<endl;
     cout<<fBottomUp(stocks,n,k)<<endl;
    return 0;
}