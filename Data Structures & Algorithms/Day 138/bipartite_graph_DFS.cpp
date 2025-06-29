#include<iostream>
#include<vector>
using namespace std;

class Solution
{
public:
    bool checkBip(int node, vector<int>adj[] , vector<int> &color)
    {
        // look at each neighbour of the node
        for(int j=0; j<adj[node].size(); j++)
        {
            // color is not assigned yet to the neighbour
            if(color[adj[node][j]] == -1)
            {
                // assign the opposite color to the neighbour
                color[adj[node][j]] = (color[node] +1)%2;
                // recursively check for the neighbour
                if(!checkBip(adj[node][j], adj, color))
                return 0;
            }
            else
            {
                if(color[adj[node][j]] == color[node])
                // if the neighbour has the same color as the node, return false
                return 0;
            }
        }
        return 1; // if all neighbours are checked and no conflicts, return true
    }

    bool isBipartite(int V, vector<int>adj[])
    {
        vector<int> color(V, -1); // initialize color array with -1 (no color assigned)
        for(int i=0; i<V; i++)
        {
            // if the node is not colored, assign it a color and check bipartiteness
            if(color[i] == -1)
            {
                color[i] = 0; // assign the first color
                if(!checkBip(i, adj, color))
                return 0; // if not bipartite, return false
            }
        }
        return 1; // if all components are bipartite, return true
    }
};

int main()
{
    int V, E;
    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;
    vector<int> adj[V]; // adjacency list representation of the graph
    cout << "Enter edges (u v):" << endl;
    for(int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v; // input edges
        adj[u].push_back(v); // add edge to the adjacency list
        adj[v].push_back(u); // add reverse edge for undirected graph
    }
    Solution obj;
    if(obj.isBipartite(V, adj))
        cout << "The graph is bipartite." << endl;
    else
        cout << "The graph is not bipartite." << endl;
    return 0;
};