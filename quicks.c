#include<stdio.h>
#include<stdlib.h>
int partition(int *a , int p , int r){

  int temp, x;
  x = a[r];
  while(1){
  while(a[p]< x)
      p++;
  while(a[r] > x)
      r--;
  if(p < r ){
    temp = a[r];
    a[r] = a[p];
    a[p] = temp;
    }
  else
  return r;

  }
}

void quicks(int * a , int p , int r){

   int q;
  if(p <r)
    {
      q = partition(a , p ,r);
      quicks(a,p,q-1);
      quicks(a,q+1,r);
    }
}

int main()
{
 int *a,n,i;
 printf("enter the size of the array \n" );
  scanf("%d",&n);
  a = (int*)malloc(sizeof(int)*n);
  printf("the array elements are :\n");
 for ( i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }
  quicks(a, 0, n-1);
 printf("after sorting\n" );
 for (int i = 0; i < n; i++)
    printf("%d ",a[i]);
  return 0;
}
