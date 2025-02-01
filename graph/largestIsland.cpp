#include<vector>
#include<iostream>
using namespace std;

class Solution{
    public:
    vector<int> dx = {0,0,-1,1};
    vector<int> dy = {};
    int dfs(int i, int j, vector<vector<int>>& grid, vector<vector<bool>>& vis, int m, int n){
        vis[i][j] == true;
        int cnt = 1;

        // int nx = i;
        // int ny = j + 1;

        // if(nx>=0 and nx<m and ny>=0 and ny<n and grid[nx][ny] == 1 and vis[nx][ny]){
        //    cnt += dfs(nx, ny, grid, vis, m, n);
        // }

        // nx = i;
        // ny = j - 1;
        // if(nx>=0 and nx<m and ny>=0 and ny<n and grid[nx][ny] == 1 and vis[nx][ny]){
        //    cnt += dfs(nx, ny, grid, vis, m, n);
        // }

        // nx = i + 1;
        // ny = j;
        // if(nx>=0 and nx<m and ny>=0 and ny<n and grid[nx][ny] == 1 and vis[nx][ny]){
        //    cnt += dfs(nx, ny, grid, vis, m, n);
        // }

        // nx = i - 1;
        // ny = j;
        // if(nx>=0 and nx<m and ny>=0 and ny<n and grid[nx][ny] == 1 and vis[nx][ny]){
        //    cnt += dfs(nx, ny, grid, vis, m, n);
        // }

       

        return cnt;
    }

    int largestIsland(vector<vector<int>>& grid){
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<bool>> vis(m, vector<bool>(n, false));
        int maxsofar = 0;

        for(int i =0; i<m; i++){
            for(int j = 0; j<n ; j++){
                if(grid[i][j] == 1 and !vis[i][j]){
                    maxsofar = (maxsofar,dfs(i,j,grid,vis,m,n));
                }
            }
        }

        return maxsofar;
    }
};
