class Solution
{
public:
    // Function to return Breadth first Traversal of given
    vector<int> bfsOfGraph(int V, vector<int> adj[])
    {
        queue<int>q;
        q.push(0);
        vector<bool>visited(V,0);
        visited[0] = 1;

        vector<int>ans;
        int node;

        // Perform BFS traversal
        while(!q.empty())
        {
            node = q.front();
            q.pop();
            ans.push_back(node);            
            
            for(int j=0; j<adj[node].size(); j++) // Traverse all the adjacent nodes
            {
                if(!visited[adj[node][j]])
                {
                    visited[adj[node][j]] = 1;
                    q.push(adj[node][j]);
                }
            }
        }
        return ans;
    }
};