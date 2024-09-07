#include <stdio.h>
# include <stdlib.h>
# include "mybfs.h"

Graph* createGraph(int V){
    Graph * graph = (Graph *) malloc(sizeof( Graph ));
    graph->V=V;
    graph->adj=(bool**) malloc(V*sizeof(bool*));
    for (int i = 0; i < V; i++) {
        graph->adj[i] = (bool *)malloc(V * sizeof(bool));
    }
    for (int i = 0; i < V; i++){
        for (int j = 0; j < V; j++){
            graph->adj[i][j]=false;
        }
    }
    graph->visited=(bool*) malloc(V*sizeof(bool));
    for (int i = 0; i < V; i++){
        graph->visited[i]=false;
    }

    graph->distance=(int *) malloc(V*sizeof(int));
    for (int i = 0; i < V; i++){
        graph->distance[i]=0;
    }

    return graph;
}

void addEdge(int u,int v , Graph* graph){
    graph->adj[u][v]=true;
    
}

void deleteGraph(Graph* graph){
    free(graph->visited);
    for(int i=0 ;i<graph->V;i++){
        free(graph->adj[i]);
    }
    free(graph->adj);
    free(graph);
}

void BFS(Graph * graph,int start){
    int* queue=(int *) malloc(graph->V*sizeof(int));
    int rear=0;
    int front =0;
    queue[rear++] = start;
    graph->visited[start] = true;

    while (front < rear){
        int current = queue[front++];
        printf("now visited(%d):%d \n ",graph->distance[current],current);
        for (int i = 0; i < graph->V; i++) {
            if (graph->adj[current][i] == true && graph->visited[i] == false) {
                queue[rear++] = i;
                graph->visited[i] = true;
                graph->distance[i]=graph->distance[current]+1;
            }
        }
    }
    free(queue);
}