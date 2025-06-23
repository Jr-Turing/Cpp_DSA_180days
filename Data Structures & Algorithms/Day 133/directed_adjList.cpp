#include<iostream>
#include<vector>
using namespace std;

// directed graph(No Weight)
int main()
{
    int vertex, edges;
    cout << "Enter number of vertices: ";
    cin >> vertex;
    cout << "Enter number of edges: ";
    cin >> edges;

    vector<int>AdjList[vertex];    
    
    int u,v;
    for(int i=0; i<edges; i++)
    {
        cin>> u >> v;
        // For directed graph, we only add edge from u to v (not both ways)
        AdjList[u].push_back(v);
    }

    // Print the list
    for(int i=0; i<vertex; i++)
    {
        cout<<i<<" -> ";
        for(int j=0; j<AdjList[i].size(); j++)
        cout<<AdjList[i][j]<<" ";

        cout<<endl;
    }
};