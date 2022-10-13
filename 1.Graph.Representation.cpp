#include <iostream>
#include <vector>
using namespace std;

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