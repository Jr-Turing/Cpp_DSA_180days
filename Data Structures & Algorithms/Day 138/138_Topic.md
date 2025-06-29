# 🎨 Bipartite Graphs: Two-Coloring Problem 🎨

## 📚 Introduction
A bipartite graph is a special type of graph where the vertices can be divided into two disjoint sets such that:

- No two vertices within the same set are adjacent
- Every edge connects vertices from different sets
- Think of it as coloring all vertices with only two colors, where adjacent vertices must have different colors! 🔴🔵

## 🧩 Key Concepts

### 💡 Definition
A graph G = (V, E) is bipartite if its vertices can be partitioned into two sets V₁ and V₂ such that every edge connects a vertex in V₁ to a vertex in V₂.

### 🌈 Two-Coloring Property
- If we can color all vertices using only two colors where no adjacent vertices have the same color, then the graph is bipartite
- This is equivalent to saying the graph has no odd-length cycles

### 📊 Examples
- ✅ Trees are always bipartite
- ✅ Even-length cycles (C₂ₙ) are bipartite
- ❌ Odd-length cycles (C₂ₙ₊₁) are not bipartite
- ✅ Complete bipartite graphs (Kₘ,ₙ) have vertices split into two sets of size m and n, with all possible edges between the sets

## 🔍 Checking if a Graph is Bipartite

### 🧠 Algorithm Approach
We can determine if a graph is bipartite using either BFS or DFS:

1. Start at any vertex and color it (e.g., color 0)
2. Color all its neighbors with the opposite color (e.g., color 1)
3. Continue this process for all vertices
4. If at any point we try to color a vertex that already has a color, and that color conflicts with what it should be, the graph is not bipartite

### 🚶‍♂️ DFS Approach
```cpp
bool checkBip(int node, vector<int>adj[], vector<int>&color) {
    for(int neighbor : adj[node]) {
        if(color[neighbor] == -1) {
            color[neighbor] = 1 - color[node]; // Assign opposite color
            if(!checkBip(neighbor, adj, color)) return 0;
        } 
        else if(color[neighbor] == color[node]) return 0;
    }
    return 1;
}
```

### 🌊 BFS Approach
```cpp
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
            
            while(!q.empty())
            {
                int node = q.front();
                q.pop();
                
                for(int neighbor : adj[node])
                {
                    if(color[neighbor] == -1)
                    {
                        color[neighbor] = 1 - color[node];
                        q.push(neighbor);
                    }
                    else (!color[neighbor] == color[node]);
                    return 0
                }
            }
        }
    }
    return true;
}
```
## 🔍 Real-Life Applications
#### 🩺 Cancer Detection
#### 🎯 Recommendation Systems
#### 💍 Stable Marriage Problem
#### 👨‍💼 Job Assignment Problem

## 🔄 Comparison: BFS vs DFS for Bipartite Checking

| 📊 Aspect | 🌊 BFS Approach | 🚶‍♂️ DFS Approach |
|---------|--------------|--------------|
| **Implementation** | Uses queue | Uses recursion/stack |
| **Memory** | Stores frontier vertices | Stores call stack |
| **Order of Visit** | Level by level | Branch by branch |
| **Complexity** | O(V+E) | O(V+E) |
| **Best For** | Graphs with many short paths | Graphs with long paths |

## 💻 Implementation Files

- [bipartite_graph_BFS.cpp](./bipartite_graph_BFS.cpp): Implements the BFS approach 
- [bipartite_graph_DFS.cpp](./bipartite_graph_DFS.cpp): Implements the DFS approach 

## 🎯 Example Test Cases
1. **Bipartite Example**:
   ```
   Vertices: 4
   Edges: 4
   Edge List: (0,1), (1,2), (2,3), (3,0)
   ```
   This is a 4-cycle (even length) and is bipartite.

2. **Non-Bipartite Example**:
   ```
   Vertices: 3
   Edges: 3
   Edge List: (0,1), (1,2), (2,0)
   ```
   This is a 3-cycle (odd length) and is not bipartite.

Happy coding! 💻✨