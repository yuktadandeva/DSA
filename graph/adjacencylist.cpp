#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;

    map<char,vector<pair<char,int>>> adj;

    for(int i = 0; i<m; i++){
        char u,v;
        cin>>u>>v;
        int w;
        cin>>w;

        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }

    for( auto [u, ngbs_u] : adj){
        cout<<u<<" : ";
        for(auto [ngb, wt]: ngbs_u){
            cout<<"("<<ngb<<", "<<wt<<")"<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    // map<char,vector<char>> adj;

    // for(int i =0; i<m;i++){
    //     char u,v;
    //     cin>>u>>v;

    //     adj[u].push_back(v);
    //     adj[v].push_back(u);
    // }

    // for(pair<char,vector<char>> p: adj){
    //     char u = p.first;
    //     vector<char> ngbs_u = p.second;
    //     cout<<u<<" : ";
    //     for(char ngb: ngbs_u){
    //         cout<<ngb<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    
    
    return 0;
}