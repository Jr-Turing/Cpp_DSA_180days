#include<iostream>
#include<vector>
using namespace std;

// Adjacency matrix
// directed weighted graph

int main()
{
    // Take graph information from user
    int vertex, edges;
    cout << "Enter number of vertices: ";
    cin >> vertex;
    cout << "Enter number of edges: ";
    cin >> edges;

    vector<vector<int> >AdjMat(vertex, vector<int>(vertex,0));
    
    int u,v, weight;
    for(int i=0; i<edges; i++)
    {
        // u and v are the vertices of the edge
        cout << "Enter edge " << i+1 << " (format: vertex1 vertex2): ";
        cin >> u >> v >> weight;
       
        AdjMat[u][v] = weight;
    }    
    
    for(int i=0; i<vertex; i++)
    {
        for(int j=0; j<vertex; j++)
            cout << AdjMat[i][j] << " ";

        cout << endl;
    }
};