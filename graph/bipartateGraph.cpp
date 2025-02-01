#include<iostream>
#include<vector>
#include<queue>

using namespace std;

bool dfs(int src,int c, const vector<vector<int>>& adj, vector<int>& cm){
    
cm[src] = c;

for(int v: adj[src]){
    if(cm[v] == -1){
        if(dfs(v,c-1, adj, cm) == false){
            return false;
        }
    }else{
        if(cm[src] == cm[v]){
            return false;
        }
    }
}

return true;
}

bool bfs(int src, const vector<vector<int>>& adj){
    int n = adj.size();
    queue<int> q;
    vector<int> cm(n, -1);

    cm[src] = 0;
    q.push(src);

    while(!q.empty()){
        int front = q.front();
        q.pop();

        for(int v: adj[front]){
       
            if(cm[v] == -1){
                cm[v] = 1-cm[src];
                q.push(v);

            }else{
                if(cm[v] == cm[src]){
                    return false;
                }
            }
        }
    }

    return true;
}

int main() {
    int n,m;
    cin>>n>>m;

    vector<vector<int>> adj(n);

    for(int i = 0; i<m; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    vector<int> cm(n,-1);
    bool flag = true;
    for(int i = 0; i<n; i++){

        if(cm[i] == -1){
            if(dfs(i,0, adj, cm) == false){
                flag = false;
                break;
            }
        }
    }

    if(flag == false){
        cout<<"non bipartate"<<endl;
    }else{
        cout<<"bipartate"<<endl;
    }
    
    return 0;
}