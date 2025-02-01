#include<iostream>
#include<vector>
#include<set>
using namespace std;

bool dfs(int u, const vector<vector<int>>& adj, vector<bool>& vis, vector<bool>& stackState){
    vis[u] = true;
    stackState[u] = true;

    for(int v: adj[u]){
        if(!vis[v]){
            if(dfs(v,adj,vis,stackState)){
                return true;
            }
        }else{
            if(stackState[v]){
                return true;
            }
        }
    }

    stackState[u] = false;
    return false;
}

int main() {
    int n,m;
    cin>>n>>m;

    vector<vector<int>> adj(n);

    for(int i = 0; i<m; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
   
    }

    bool flag = false;
    vector<bool> vis(n,false);
    vector<bool> stackState(n, false);

    for(int i=0; i<n ; i++){
        if(!vis[i]){
            if(dfs(i,adj,vis,stackState)){
                flag == true;
                break;
            }
        }
    }

    if(flag){
        cout<<"back edge found"<<endl;
    }else{
        cout<<"no back edge detected"<<endl;
    }
    
    return 0;
}