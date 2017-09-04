#include<stdio.h>
#include<stdlib.h>
#define MAX 30
#define V 5

struct Edge {
  int u,v,w;
}edge;

struct{
    struct Edge list[MAX];
    int size;
}edgelist,spanlist;

void sort()
{
    int i,j;
    struct Edge temp;

    for(i=0;i<edgelist.size;i++)
      {
        for(j=0;j<edgelist.size-i-1;j++)
          {
            if(edgelist.list[j].w>edgelist.list[j+1].w)
            {
                temp=edgelist.list[j];
                edgelist.list[j]=edgelist.list[j+1];
                edgelist.list[j+1]=temp;
            }
          }
      }

}
int find(int *belongs, int no)
{
    return(belongs[no]);
}

void uni(int *belongs, int co1 , int co2)
{
    int i;
    for(i = 0 ; i < V; i++)
        if(belongs[i] == co2)
            belongs[i] = co1;
}
void kruskal(int graph[V][V])
{
   int  belongs[V]; edgelist.size = 0 ;

   for(int i =0 ; i < V ; i++)
      belongs[i] = i;
    //making of edgelist from the adjacency matrix.
    for(int i = 0 ; i < V ; i++)
    {
        for(int j =0 ; j< V ; j++)
        {
            if(graph[i][j] != 0)
            {
                edgelist.list[edgelist.size].w = graph[i][j];
                edgelist.list[edgelist.size].u = i;
                edgelist.list[edgelist.size].v = j;
                edgelist.size++;
            }
        }
    }
   sort();


    spanlist.size = 0;
    for(int i = 0 ; i < edgelist.size;i++)
        {
            int co1 = find(belongs, edgelist.list[i].u);
            int co2 = find(belongs, edgelist.list[i].v);
            if( co1 != co2)
                {
                  spanlist.list[spanlist.size] = edgelist.list[i];
                  spanlist.size++;
                  uni(belongs , co1, co2);
                }

        }

    for( int i = 0 ; i < spanlist.size; i++)
       printf("%d -> %d  weight:%d \n",spanlist.list[i].u,spanlist.list[i].v,spanlist.list[i].w) ;
}

int main()
{

        /* Let us create the following graph
               2    3
           (0)--(1)--(2)
            |   / \   |
           6| 8/   \5 |7
            | /     \ |
           (3)-------(4)
               9
        */
       int  graph[V][V] = {{0, 2, 0, 6, 0},
                       {2, 0, 3, 8, 5},
                       {0, 3, 0, 0, 7},
                       {6, 8, 0, 0, 9},
                       {0, 5, 7, 9, 0},
                      };
         // Print the solution
         kruskal(graph);

    return 0;
}
