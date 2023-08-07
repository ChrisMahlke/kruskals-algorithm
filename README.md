## My empirical study of Kruskal’s algorithm.

Implementation of Kruskal's algorithm for computing minimum spanning trees, using the fast Union-Find algorithm.<br />

The provided code is for a C program that generates a graph based on command line arguments, performs a depth-first search (DFS), checks if the graph is connected, and if it is, performs Kruskal's algorithm to find the minimum spanning tree (MST). The program also calculates and prints out the average weight of the minimum spanning tree over a certain number of trials.

Since I will be generating random graphs, I used a DFS to verify the graphs generated are connected. I used MergeSort to sort the edges.

In the main function, command line arguments are parsed, and the program branches into two main paths. If the argument `-d` is passed, the program calls a sequence of functions to generate the graph, perform DFS, check the graph connectivity, execute Kruskal's algorithm, and then optionally print the results. If `-d` is not passed, the program instead runs a series of trials, each time generating a graph, performing DFS and Kruskal's algorithm, and then adds up the total weights of the MSTs generated and calculates the average after all trials. The results are then printed out.

There are several utility functions in the code, such as `make_edge` for generating edges, `fast_find` and `fast_union` for the Union-Find operations in Kruskal's algorithm, and `merge_sort` for sorting edges by weight (also part of Kruskal's algorithm).

There's also a depth-first search algorithm (DFS) implemented with dfs and `dfs_visit` functions. The dfs function iteratively visits all the vertices in the graph, while `dfs_visit` is a recursive function that explores an individual vertex and its adjacent vertices.

The Graph.h header file contains definitions of the `Graph`, `Vertex`, and `Edge` types, and other functions and variables as well.

**Note** also that some details of the implementation, especially around error handling and optimization, might not be ideal, and could likely be improved.

## Description

This is a partial implementation of Kruskal's algorithm for finding a Minimum Spanning Tree (MST) on a given graph.

1. **Graph Structure**: The program uses a `Graph` structure that seems to be defined in "Graph.h" (not provided). This structure presumably holds vertices, edges, and other graph properties.

2. **Main Functionality**: The program takes command-line arguments to specify the type of graph (randomly generated or based on an option), the number of vertices, trials, and dimensions. Depending on these arguments, it generates the graph, checks for connectivity, finds the MST using Kruskal's algorithm, and outputs results.

3. **Kruskal's Algorithm**: The program uses a version of Kruskal's algorithm. The edges are sorted based on weight, and then edges are added to the MST unless they create a cycle.

4. **Fast Union-Find**: For Kruskal's algorithm to be efficient, you need a quick way to determine which component a vertex belongs to and to unite two components. This is done using the union-find data structure, with path compression and union by rank/size (in this case, it seems to be by size).

5. **DFS**: The program also contains a depth-first search (DFS) algorithm to traverse the graph and likely to check connectivity.

6. **Edge Weights**: Depending on the dimension argument, the program can generate edge weights randomly or based on Euclidean distance (only dimension 0 and 2 are shown, but there might be more for other dimensions).

7. **Memory Management**: There's an emphasis on dynamic memory allocation (`calloc`, `malloc`) and deallocation (`free`). This allows the program to handle varying graph sizes.

8. **Error Handling**: The code contains multiple error-checking steps, such as ensuring the proper number of command-line arguments and verifying memory allocation success.

9. **Performance Metrics**: The program uses the `clock()` function to measure the time it takes to execute certain parts of the algorithm, such as sorting edges and executing Kruskal's algorithm.

10. **Miscellaneous Functions**: There are several utility functions, such as `swap`, `fast_find`, `fast_union`, `merge_sort`, `running_time`, and more.

In summary, the program is a structured approach to generating random graphs and finding MSTs using Kruskal's algorithm, with performance metrics and error handling in place.
