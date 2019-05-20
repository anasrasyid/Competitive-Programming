#include <iostream>
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

using namespace std;

struct Edge 
{ 
	int src, dest, weight; 
}; 

 
struct Graph 
{  
	int V, E; 
 
	struct Edge* edge; 
}; 


struct Graph* createGraph(int V, int E) 
{ 
	struct Graph* graph = new Graph; 
	graph->V = V; 
	graph->E = E; 

	graph->edge = new Edge[E]; 

	return graph; 
} 

struct subset 
{ 
	int parent; 
	int rank; 
}; 
 
int find(struct subset subsets[], int i) 
{  
	if (subsets[i].parent != i) 
		subsets[i].parent = find(subsets, subsets[i].parent); 

	return subsets[i].parent; 
} 

void Union(struct subset subsets[], int x, int y) 
{ 
	int xroot = find(subsets, x); 
	int yroot = find(subsets, y); 

	 
	if (subsets[xroot].rank < subsets[yroot].rank) 
		subsets[xroot].parent = yroot; 
	else if (subsets[xroot].rank > subsets[yroot].rank) 
		subsets[yroot].parent = xroot; 
 
	else
	{ 
		subsets[yroot].parent = xroot; 
		subsets[xroot].rank++; 
	} 
} 

int myComp(const void* a, const void* b) 
{ 
	struct Edge* a1 = (struct Edge*)a; 
	struct Edge* b1 = (struct Edge*)b; 
	return a1->weight > b1->weight; 
} 

long long KruskalMST(struct Graph* graph) 
{ 
	int V = graph->V; 
	struct Edge result[V]; 
	int e = 0;  
	int i = 0; 

	qsort(graph->edge, graph->E, sizeof(graph->edge[0]), myComp); 

	struct subset *subsets = 
		(struct subset*) malloc( V * sizeof(struct subset) ); 
 
	for (int v = 0; v < V; ++v) 
	{ 
		subsets[v].parent = v; 
		subsets[v].rank = 0; 
	} 
 
	while (e < V - 1) 
	{  
		struct Edge next_edge = graph->edge[i++]; 

		int x = find(subsets, next_edge.src); 
		int y = find(subsets, next_edge.dest); 
 
		if (x != y) 
		{ 
			result[e++] = next_edge; 
			Union(subsets, x, y); 
		}  
	} 

	long long hasil =0;
	for (i = 0; i < e; ++i) 
        hasil+= result[i].weight;
	return hasil; 
} 

int main() 
{ 
    int V ; 
	int E ;
    cin>>V>>E;
    while(V != 0 & E != 0){
        struct Graph* graph = createGraph(V, E); 
        int src,dest,weight;
        long total =0;
        for(int i = 0; i < E; i++){
            cin>>src>>dest>>weight;
            total += weight;
            graph->edge[i].src = src; 
            graph->edge[i].dest = dest; 
            graph->edge[i].weight = weight;
        }
        cout<<(total-KruskalMST(graph))<<endl;
        cin>>V>>E; 
    }
	return 0; 
} 