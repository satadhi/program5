#include<stdio.h>
#include<stdlib.h>
int main()
{
 int max,i,*b,*a,n;
 printf("ente the size\n ");
 scanf("%d",&n );
 a = (int*)calloc(n+1,sizeof(int));
 for(i = 0 ; i<n ;i++)
     scanf("%d",&a[i]);
 max = a[0];
 for(i=0;i<n;i++)
    {
       if(max<a[i])
         max = a[i];
    }
  b =(int*)calloc(max+1,sizeof(int));// calloc initialize array at const time
  for(i=0;i<n;i++) //using counting sort technique
  {
       b[a[i]] += 1;
  }
  for(i=0;i<max ;i++)
  {
    if(b[i] != 0 && b[i]%2  != 0)
        printf("Number %d occured %d times\n",i,b[i] );
  }
  return 0;
}
