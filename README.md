+ Overview
  This assignment focus on demonstrating graph traversal using Depth-First Search (DFS) and Breadth-First Search (BFS) algorithms. The graph used for traversal is represented as an adjacency list and consists of 5 vertices with the following edges:

*BFS
  - 0 -> 1
  - 0 -> 4
  - 1 -> 2
  - 1 -> 3
  - 3 -> 4
 
*DFS 
  - 0 -> 1
  - 0 -> 4
  - 1 -> 2
  - 1 -> 5

# DFS Traversal
Depth-First Search (DFS) is an algorithm for traversing or searching tree or graph data structures. The algorithm starts at the root node (selecting some arbitrary node as the root in the case of a graph) and explores as far as possible along each branch before backtracking.
## Results
Starting from vertex 0, the DFS traversal visits the vertices in the following order:
0 -> 1 -> 4 -> 2 -> 3

## BFS Traversal
Breadth-First Search (BFS) is an algorithm for traversing or searching tree or graph data structures. It starts at the tree root (or some arbitrary node of a graph) and explores the neighbor nodes at the present depth prior to moving on to the nodes at the next depth level.

## Results
Starting from vertex 0, the BFS traversal visits the vertices in the following order:
0 -> 1 -> 4 -> 2 -> 3

+ Observations
- Both DFS and BFS traversals visit all the vertices in the graph.
- The order of traversal differs between DFS and BFS, with DFS exploring as far as possible along each branch before backtracking, while BFS explores all neighbors at the current depth level before moving on to the next level.
