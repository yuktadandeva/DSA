#include<iostream>
#include<string>
#include<vector>

using namespace std;
int f(string s1, string s2, int i , int j){
    if(i == s1.size()){
        return 0;
    }
    if(j == s2.size()){
        return 0;
    }

    if(s1[i] == s2[i]){
        return 1 + f(s1,s2,i+1,j+1);
    }else{
        return max(f(s1,s2,i+1,j),f(s1,s2,i,j+1));
    }
}

int fBottomUp(string s1, string s2){
    int m = s1.size();
    int n = s2.size();

    vector<vector<int>> dp(m+1, vector<int>(n+1,0));

    for(int i = m-1; i>=0; i--){
        for(int j = n-1;j>=0;j--){
            if(s1[i] == s2[i]){
                dp[i][j] = 1 + dp[i+1][j+1];
            }else{
                dp[i][j] = max( dp[i+1][j], dp[i][j+1]);
            }
        }
    }    

    int i = 0, j = 0;

    while(!(i==m or j==n)){
        if(s1[i]==s2[j]){
            cout<<s1[i]<<" ";
            i+1;
            j+1;
        }else if(dp[i+1][j]>dp[1][j+1]){
               i++; 
        }else{
                j++;
            }
        
    }

    return dp[0][0];
}


int main() {
    string s1("ATGC");
    string s2("AGCT");

    vector<vector<int>> dp(s1.size(),vector<int> (s2.size(),-1));

    // cout<<f(s1, s2,0, 0)<<endl;
   cout<<fBottomUp(s1, s2)<<endl;
    
    return 0;
}