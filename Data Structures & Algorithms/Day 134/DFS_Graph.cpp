class Solution
{
public:
    // Function to perform DFS on the graph
    void DFS(int node, vector<int>adj[], vector<int>&ans, vector<bool>&visited)
    {
        visited[node] = 1;
        ans.push_back(node);

        for(int j=0; j<adj[node].size(); j++) 
        {
            if(!visited[adj[node][j]])
            DFS(adj[node][j], adj, visited, ans);
        }
    }

    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[])
    {
        vector<bool>visisted(V,0);
        vector<int>ans;
        DFS(0,adj,ans,visisted);

        return ans;
    }
};