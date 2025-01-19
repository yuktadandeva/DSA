#include<iostream>
#include<vector>
#include<set>

using namespace std;
int main() {
    int n,m;
    cin>>n>>m;

    vector<set<int>> adj(n);

    for(int i = 0; i<m; i++){
        int u,v;
        cin>>u>>v;

        adj[u].insert(v);
        adj[v].insert(u);
    }

     for(int i = 0; i<n; i++){
        cout<<i<<" : ";
        for(int ngb : adj[i]){
            cout<<ngb<<" ";
        }
        cout<<endl;
    }

    // vector<vector<int>> adj(n);

    // for(int i = 0; i<m ; i++){
    //     int u,v;
    //     cin>>u>>v;

    //     adj[u].push_back(v);
    //     adj[v].push_back(u);

    // }
    
    // for(int i = 0; i<n; i++){
    //     cout<<i<<" : ";
    //     for(int ngb : adj[i]){
    //         cout<<ngb<<" ";
    //     }
    //     cout<<endl;
    // }
    cout<<endl;
    
    return 0;
}