// Implementation of BFS 
#include <iostream>
#include <vector>
#include<queue>
using namespace std;

class solution{
    public:
    vector<int> bfsOfGraph(int V, vector<int> adj[]){
        vector<int> bfs;
        vector<int> vis(V+1, 0);

        for(int i=1; i<=V; i++){
            if(!vis[i]){
                queue<int> q;
                q.push(i);
                vis[i]=1;
                while(!q.empty()){
                    int node=q.front();
                    q.pop();
                    bfs.push_back(node);

                    for(auto it : adj[node]){
                        if(!vis[it]){
                            q.push(it);
                            vis[it]=1;
                        }
                    }
                }
            }
        }
        return bfs;
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