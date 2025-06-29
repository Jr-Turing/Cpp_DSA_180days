#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Solution
{
public:
    bool isBipartite(int V, vector<int>adj[])
    {
        vector<int>color(V, -1);
        queue<int>q;

        for(int i=0; i<V; i++)
        { 
            if(color[i] == -1)
            {
                q.push(i);
                color[i] = 0;
            
                while (!q.empty())
                {
                    int node = q.front();
                    q.pop();

                    for(int j=0; j<adj[node].size(); j++)
                    {
                        // color not assigned to them
                        if(color[adj[node][j]] == -1)
                        {
                            color[adj[node][j]] = (color[node]+1) %2; // assign opposite color
                            q.push(adj[node][j]);
                        }
                        // color is already assigned 
                        else
                        {
                            if(color[node] == color[adj[node][j]])
                            return 0; // same color assigned to adjacent nodes
                        }
                    }
                }
            }
        }
        return 1; // no same color assigned to adjacent nodes
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