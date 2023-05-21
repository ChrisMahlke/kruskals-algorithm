## My empirical study of Kruskal’s algorithm.

Implementation of Kruskal's algorithm for computing minimum spanning trees, using the fast Union-Find algorithm.<br />

The provided code is for a C program that generates a graph based on command line arguments, performs a depth-first search (DFS), checks if the graph is connected, and if it is, performs Kruskal's algorithm to find the minimum spanning tree (MST). The program also calculates and prints out the average weight of the minimum spanning tree over a certain number of trials.

Since I will be generating random graphs, I used a DFS to verify the graphs generated are connected. I used MergeSort to sort the edges.

In the main function, command line arguments are parsed, and the program branches into two main paths. If the argument `-d` is passed, the program calls a sequence of functions to generate the graph, perform DFS, check the graph connectivity, execute Kruskal's algorithm, and then optionally print the results. If `-d` is not passed, the program instead runs a series of trials, each time generating a graph, performing DFS and Kruskal's algorithm, and then adds up the total weights of the MSTs generated and calculates the average after all trials. The results are then printed out.

There are several utility functions in the code, such as `make_edge` for generating edges, `fast_find` and `fast_union` for the Union-Find operations in Kruskal's algorithm, and `merge_sort` for sorting edges by weight (also part of Kruskal's algorithm).

There's also a depth-first search algorithm (DFS) implemented with dfs and `dfs_visit` functions. The dfs function iteratively visits all the vertices in the graph, while `dfs_visit` is a recursive function that explores an individual vertex and its adjacent vertices.

The Graph.h header file contains definitions of the `Graph`, `Vertex`, and `Edge` types, and other functions and variables as well.

**Note** also that some details of the implementation, especially around error handling and optimization, might not be ideal, and could likely be improved.
