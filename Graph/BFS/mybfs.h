#ifndef MYBFS_H
#define MYBFS_H
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>


#define MAX_VERTICES 20 



typedef struct {
    int V;
    bool**  adj;
    bool* visited;
    int * distance; 
} Graph;

Graph* createGraph(int V);
void addEdge(int u,int v , Graph* graph);
void deleteGraph(Graph* graph);
void bfs(Graph* graph, int start);
#endif