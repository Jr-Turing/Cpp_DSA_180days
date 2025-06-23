# Day 133: Graph Representations in C++

## Introduction to Graph Data Structures

Graphs are one of the most versatile and powerful data structures in computer science. They are used to represent complex relationships between objects. In this lesson, we explore different ways to represent graphs in code, with a focus on the two most common representations:

1. **Adjacency Matrix**
2. **Adjacency List**

Additionally, we'll examine how these representations can be adapted for different types of graphs:
- Directed vs. Undirected graphs
- Weighted vs. Unweighted graphs

## Graph Terminology Review

Before diving into implementations, let's quickly review some key graph concepts:

- **Vertex (Node)**: A fundamental unit in a graph
- **Edge**: A connection between two vertices
- **Directed Edge**: An edge with a specific direction (from one vertex to another)
- **Undirected Edge**: An edge with no specific direction (bidirectional)
- **Weighted Edge**: An edge with an associated value or cost
- **Adjacent Vertices**: Vertices connected by an edge

## Graph Representations

### 1. Adjacency Matrix

An adjacency matrix is a 2D array of size V×V (where V is the number of vertices), where each cell indicates whether there is an edge between two vertices.

#### Characteristics:
- Space complexity: O(V²)
- Time to check if two vertices are connected: O(1)
- Time to find all neighbors of a vertex: O(V)
- Good for dense graphs

#### Variations:
- **Undirected Unweighted**: Boolean matrix where matrix[i][j] = matrix[j][i] = true if edge exists
- **Directed Unweighted**: Boolean matrix where matrix[i][j] = true if edge from i to j exists
- **Weighted**: Instead of boolean values, the matrix stores the weight of the edge

### 2. Adjacency List

An adjacency list uses an array of lists, where each list contains the neighbors of a vertex.

#### Characteristics:
- Space complexity: O(V+E) where E is the number of edges
- Time to check if two vertices are connected: O(degree) where degree is the number of neighbors
- Time to find all neighbors of a vertex: O(1) to access the list, then O(degree) to traverse
- Better for sparse graphs

#### Variations:
- **Undirected Unweighted**: Each vertex has a list of adjacent vertices
- **Directed Unweighted**: Each vertex has a list of vertices it points to
- **Weighted**: Each vertex has a list of pairs (neighbor, weight)

## Implementation Examples

This lesson includes implementations for all major variations:

1. `adjmat.cpp` - Undirected unweighted graph using adjacency matrix
2. `directed_adjmat.cpp` - Directed unweighted graph using adjacency matrix
3. `directed_weighted_adjmat.cpp` - Directed weighted graph using adjacency matrix
4. `undirected_adjList.cpp` - Undirected unweighted graph using adjacency list
5. `directed_adjList.cpp` - Directed unweighted graph using adjacency list
6. `undirected_weighted_adjList.cpp` - Undirected weighted graph using adjacency list
7. `directed_weighted_adjList.cpp` - Directed weighted graph using adjacency list

## Comparison of Adjacency Matrix vs. Adjacency List

| Operation | Adjacency Matrix | Adjacency List |
|-----------|------------------|----------------|
| Memory Usage | O(V²) | O(V+E) |
| Add Vertex | O(V²) | O(1) |
| Add Edge | O(1) | O(1) |
| Remove Vertex | O(V²) | O(V+E) |
| Remove Edge | O(1) | O(E) |
| Query | O(1) | O(V) |

## When to Use Each Representation

- **Use Adjacency Matrix when**:
  - The graph is dense (many edges)
  - Quick edge weight lookups are needed
  - The graph is small

- **Use Adjacency List when**:
  - The graph is sparse (few edges)
  - You need to find all neighbors quickly
  - Memory usage is a concern
  - The graph is large

## Time and Space Complexity Considerations

When working with large graphs, the choice of representation can significantly impact performance. For most real-world applications with sparse graphs, adjacency lists are preferred due to their memory efficiency.

## Practical Applications

- **Social Networks**: Friends can be represented as vertices with connections as edges
- **Road Maps**: Intersections as vertices, roads as edges, distance as weights
- **Computer Networks**: Devices as vertices, connections as edges
- **Web Pages**: Pages as vertices, hyperlinks as directed edges

## Further Learning

The next lessons will build on these representations to implement various graph algorithms like:
- Breadth-First Search (BFS)
- Depth-First Search (DFS)
- Dijkstra's Algorithm
- Minimum Spanning Tree algorithms
