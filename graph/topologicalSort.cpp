#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;

    vector<vector<int>> adj(n);

    for(int i = 0; i<m; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }

    vector<int> inDegMap(n,0);

    for(int u = 0; u<n; u++){
        for(int v :adj[u]){
            inDegMap[v]++;
        }
    }
    
    queue<int> q;

    for(int u = 0; u<n ; u++){
        if(inDegMap[u] == 0){
            q.push(u);
        }
    }

    vector<int> ans;

    while(!q.empty()){
    int u = q.front();q.pop();
    ans.push_back(u);

    for(int v: adj[u]){
        inDegMap[v]--;
        if(inDegMap[v] == 0){
            q.push(v);
        }
    }

    }

    for(int i: ans){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}