/*
 * file:        Graph.h
 *
 * Description: Header file containing new data types and declarations for a graph.
 */

/* Global variable to mark DFS (Depth First Search) discovery and finish times */
double  timestamp       = 0;

/* Global variable to measure the time taken by DFS */
double  dfs_time        = 0;

/* Global variable to measure the time taken to sort */
double  sort_time       = 0;

/* Global variable to measure the time taken by Kruskal's algorithm */
double  Kruskal_time    = 0;

/* Global variable for the number of trials performed */
int     numtrials       = 0;

/* Global variable for average calculation */
int     average         = 0;

/* Global variable for dimension representation */
int     dimension       = 0;

/* Enum for representing the states of a vertex during DFS traversal:
 * white - The vertex has not been discovered.
 * gray  - The vertex has been discovered but not fully explored.
 * black - The vertex and its neighbors have been completely explored.
 */
enum color_t {white, gray, black};

/* Structure representing an edge in the graph */
typedef struct edge_t {
    unsigned long int   u_edge;     /* Start vertex of the edge */
    unsigned long int   v_edge;     /* End vertex of the edge */
    double              weight;     /* Weight of the edge */
    struct edge_t       *next;      /* Pointer to the next edge in the list */
} Edge;

/* Structure representing a vertex in the graph */
typedef struct vertex_t {
    double              discovery_time;      /* Time at which vertex was discovered during DFS */
    double              finish_time;         /* Time at which DFS finishes exploring the vertex */
    unsigned long int   num_edges;           /* Number of edges connected to the vertex */
    float               component_size;      /* Size of the connected component to which the vertex belongs */
    enum    color_t     Color;               /* Current color/state of the vertex during DFS traversal */
    struct  vertex_t    *parent;             /* Pointer to the parent vertex in DFS tree */
    struct  vertex_t    *kruskal_parent;     /* Pointer to the parent vertex in Kruskal's tree */
    Edge                *adj_list;           /* Pointer to the start of adjacency list of the vertex */
    Edge                *last_edge;          /* Pointer to the end of adjacency list of the vertex */
} Vertex;

/* Structure representing a graph */
typedef struct graph_t {
    int                 size;                /* Size of the graph */
    double              edge_prob;           /* Probability of an edge existing */
    unsigned long int   num_edges;           /* Total number of edges in the graph */
    unsigned long int   dfs_trees;           /* Number of DFS trees created from the graph */
    double              dfs_weight;          /* Total weight of the DFS tree */
    double              Kruskal_weight;      /* Total weight of the tree from Kruskal's algorithm */
    int                 num_vertices_alloc;  /* Number of vertices allocated in memory */
    Vertex              *vertices;           /* Array of pointers to vertices in the graph */
} Graph;
