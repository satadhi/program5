#include<stdio.h>
#include<stdlib.h>
int main()
{
 int max, n,i;
 printf("enter the array size \n");
 scanf("%d",&n);
int *b;
b = (int*)calloc(max+1,sizeof(int));
for(i=0;i<n;i++)
   {
    b[a[i]] +=1;
    printf("counter \n");
   }    
for(i=0;i<max;i++)
    {
     printf("%d ",b[i]);
     
     
     //if(b[i]!=0 && b[i]/2 !=0)
       // {
         // printf("elements %d occured %d time",i,b[i]);  
        //}
    } 

printf("/n");
return 0;
}
