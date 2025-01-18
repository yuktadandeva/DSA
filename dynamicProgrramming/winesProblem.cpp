#include<iostream>
#include<vector>
using namespace std;

int f(int i, int j, int y ,const vector<int>& prices){
    if(i==j){
        return prices[i]*y;
    }

    int A = y*prices[i] + f(i+1,j,y+1,prices);
    int B = y*prices[j] + f(i, j-1,y+1, prices);

    return max(A,B);
}

int fTopDown(int i, int j,const vector<int>& prices, vector<vector<int>> dp){
    if(dp[i][j][y] != -1){
        return dp[i][j][y];
    }

    if(i==j){
        return dp[i][j][y] = prices[i]*y;
    }

    return dp[i][j][y] = max( y*prices[i] + f(i+1,j,y+1,prices,dp), y*prices[j] + f(i, j-1,y+1, prices,dp));
}

int fTopDownSpaceOptimized(int i, int j ,const vector<int>& prices, vector<vector<int>> dp){
   if(dp[i][j] != -1){
        return dp[i][j];
    }
    if(i==j){
        return dp[i][j] = prices[i]*prices.size();
    }

    int y = prices.size()-j+i;

    return dp[i][j] = max( y*prices[i] + fTopDownSpaceOptimized(i+1,j,prices,dp), y*prices[j] + fTopDownSpaceOptimized(i, j-1, prices,dp));
}

int fBottomUp(const vector<int> &prices){
int n = prices.size();
vector<vector<int>> dp(n, vector<int>(n,-1) );

for(int i = 0; i<= n-1; i++){
    dp[i][i] = prices[i]*n;
}

for(int i = n-2; i>=0; i--){
    for(int j = i+1 ; j<=n-1; j++){
        int y = n - j + 1;
        dp[i][j] = max( y*prices[i] + dp[i+1][j], y*prices[j] + dp[i][j-1]);

    }
}

return dp[0][n-1];
}

int main() {
    vector<int> prices = {2,3,5,1,4};
    int n = prices.size();

    vector<vector<int>> dp(n, vector<int>(n,-1));
    cout<<f(0, n-1, 1, prices)<<endl;
    // cout<<fTopDown(0, n-1, 1, prices,dp)<<endl;
    cout<< fTopDownSpaceOptimized(0,n-1,prices,dp);
    
    return 0;
}