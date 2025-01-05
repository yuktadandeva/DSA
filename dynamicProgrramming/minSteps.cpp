#include<iostream>  
#include<vector>  
#include<climits>  
using namespace std;
int fDp(int n, vector<int>& dp){
    //lookup
    if(dp[n]!=-1){
        return dp[n];
    }
    //basecase
    if(n==1){
        return dp[1] = 0;
    }
    //recursive
    int op1 = INT_MAX;
    op1 = fDp(n-1,dp);

    int op2 = INT_MAX;
    if(n%2 ==0){
    op2 = fDp(n/2,dp);
    }

    int op3 = INT_MAX;
    if(n%3==0){
        op3 = fDp(n/3,dp);
    }

    return 1+ min(op1,min(op2,op3));
}

int fBottomUp(int n){
    vector<int> dp(n+1,INT_MAX);
    dp[1] = 0;

    for(int i = 2; i<=n;i++){
        int op1 = dp[i-1];

        int op2 = INT_MAX;
        if(i%2==0){
        op2 = dp[i/2];
        }

        int op3 = INT_MAX;
        if(i%3==3){
        op3 = dp[i/3];
        }

        dp[i] = 1 + min(op1, min(op2, op3));
    }

return dp[n];
}

int main(){
    int n = 10;

    vector<int> dp(n+1,-1);
    cout<<fDp(n,dp)<<endl;
    cout<<fBottomUp(n)<<endl;
    return 0;
}