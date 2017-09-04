#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
#define V 5

void printMST(int parent[], int graph[V][V])
{
   printf("Edge   Weight\n");
   for (int i = 1; i < V; i++)
      printf("%d - %d    %d \n", parent[i], i, graph[i][parent[i]]);
}

int min(int * key, int * mstSet)
{
  int x = INT_MAX, min_index;
   for (size_t i = 0; i < 5; i++)
      if(mstSet[i]== 0 && key[i] < x)
       x = key[i], min_index = i;
  return min_index;

}

void primMST(int graph[V][V])
{
  int parent[V], key[V],mstSet[V];
  for (size_t i = 0; i < V; i++)
      key[i] = INT_MAX, mstSet[i] = 0;
  parent[0]= -1; key[0]=0;
  for (size_t i = 0; i < V; i++)
   {
      int u = min(key, mstSet);
      mstSet[u] = 1;
     for(int v =0 ; v< V ; v++)
      if(graph[u][v] && mstSet[v] == 0 && graph[u][v] < key[v])
        key[v] = graph[u][v], parent[v] = u;
   }

  printMST(parent,graph);
}

int main()
{

   int graph[V][V] = {{0, 5, 4, 0, 0},
                      {5, 0, 3, 0, 5},
                      {4, 3, 0, 6, 2},
                      {0, 0, 6, 0, 8},
                      {0, 5, 2, 8, 0},
                     };

    // Print the solution
    primMST(graph);

    return 0;
}
