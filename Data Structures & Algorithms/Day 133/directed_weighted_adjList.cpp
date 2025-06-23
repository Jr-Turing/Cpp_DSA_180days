#include<iostream>
#include<vector>
using namespace std;

// directed Weighted graph
int main()
{
    int vertex, edges;
    cout << "Enter number of vertices: ";
    cin >> vertex;
    cout << "Enter number of edges: ";
    cin >> edges;

    vector<pair<int,int>>AdjList[vertex];    
    
    int u,v,weight;
    for(int i=0; i<edges; i++)
    {
        cin>> u >> v >> weight;
        // For directed weighted graph, we only add edge from u to v with weight
        AdjList[u].push_back(make_pair(v,weight));
    }

    // Print the list
    for(int i=0; i<vertex; i++)
    {
        cout<<i<<" -> ";
        for(int j=0; j<AdjList[i].size(); j++)
        cout<<AdjList[i][j].first<<" "<<AdjList[i][j].second<<" ";

        cout<<endl;
    }
};