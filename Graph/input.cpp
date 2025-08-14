#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n, m;
    cin >> n >> m;

    //matrix represention or adjacency Matrix
    // int adj[n+1][m+1];

    // for (int i = 0; i < m; i++)
    // {
    //     int u, v;
    //     cin >> u >> v;

    //     adj[u][v] = 1;
    //     adj[v][u] = 1;
    // }

    //adjacency list
    vector<int> adj[n+1];

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        // u ---> v
        // if it directed graph then there will be only one edge
        adj[u].push_back(v);
        adj[v].push_back(u); //this will be not there in case of directed graph
    }

    // vector<int> adj[n+1];
    // vector<int>
    
    return 0;
}