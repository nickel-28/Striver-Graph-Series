// Implementation of DFS 
#include <iostream>
#include <vector>
#include<queue>
using namespace std;

class solution{
    void dfs(int node, vector<int> &vis, vector<int> adj[], vector<int> &storeDfs){
        storeDfs.push_back(node);
        vis[node]=1;
        for(auto it: adj[node]){
            if(!vis[it]){
                dfs(it, vis, adj, storeDfs);
            }
        }
    }
    public:
    vector<int> bfsOfGraph(int V, vector<int> adj[]){
        vector<int> storeDfs;
        vector<int> vis(V+1, 0);

        for(int i=1; i<=V; i++){
            if(!vis[i]){
                dfs(i, vis, adj, storeDfs);
            }
        }
        return storeDfs;
    }
};

int main(){
    // declare nodes & edges
    int n, m;
    cin >> n >> m;
    
    // declare adjacent matrix
    int adj[n+1][n+1];

    //take edges as input
    for(int i=0; i<m; i++){
        int u, v;
        cin >> u >> v;
        adj[u][v]=1;
        adj[v][u]=1;
    }

    // Note: We will use adjacency matrix for smaller inputs
    // If Input is large then we will use adjacency lists

    vector<int> adj[n+1];
    for(int i=0; i<m; i++){
        int u, v;
        cin >> u >> v;
        
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    return 0;
}