#include<iostream>
#include<vector>

using namespace std;

int f(const vector<vector<int>> &grid, int m, int n, int i, int j){
    if(i == m-1 and j == n-1){
        return grid[m-1][n-1];
    }

    if(i == m-1){
        return grid[i][j] + f(grid, m, n, i, j+1);
    }

    if(j == n-1){
        return grid[i][j] + f(grid, m, n, i+1, j);
    }

    int X = f(grid, m, n, i, j+1);
    int Y = f(grid, m, n, i+1, j);

    return grid[i][j] + min(X,Y);
}

int fTopDown(const vector<vector<int>> &grid, int m, int n, int i, int j, vector<vector<int>> &dp){
    //lookup
    if(dp[i][j] != -1){
        return dp[i][j];
    }

    if(i == m-1 and j == n-1){
            return dp[i][j] = grid[m-1][n-1];
        }

        if(i == m-1){
            return dp[i][j] = grid[i][j] + f(grid, m, n, i, j+1);
        }

        if(j == n-1){
            return dp[i][j] =  grid[i][j] + f(grid, m, n, i+1, j);
        }

        int X = f(grid, m, n, i, j+1);
        int Y = f(grid, m, n, i+1, j);

        return dp[i][j] = grid[i][j] + min(X,Y);
}

int fBottomUp(const vector<vector<int>> &grid, int m, int n){

vector<vector<int>> dp(m, vector<int>(n,-1));

for(int i = m-1; i>=0; i--){
    for(int j = n-1; j>=0; j--){
        if(i == m-1 and j == n-1){
            dp[i][j] = grid[m-1][n-1];
        }else if(i == m-1){
            dp[i][j] = grid[i][j] + dp[i][j+1];
        }else if(j == n-1){
            dp[i][j] =  grid[i][j] + dp[i+1][j];
        }else{
            dp[i][j] = grid[i][j] + min(dp[i][j+1],dp[i+1][j]);
        }
    }
}

int x = dp[0][0] - grid[0][0];

for(int i = 0; i<=m-1; i++){
    for(int j = 0 ; j<=n-1; j++){
       if(grid[i][j] == x){
    cout<<grid[i][j]<<"->"<<endl;
    x = dp[i][j] - grid[i][j];
       }
    }
}
return dp[0][0];
}

int main() {
    vector<vector<int>> grid = {
        {1,3,1},{1,5,1},{4,2,1}
    };

    int m = grid.size();
    int n = grid[0].size();

    cout<<f(grid, m,n,0,0)<<endl;

    vector<vector<int>> dp(m, vector<int>(n,-1));
    cout<<fTopDown(grid, m, n, 0, 0, dp)<<endl;
    cout<<fBottomUp(grid, m,n)<<endl;
        
    return 0;
}