#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
  char a[200], *b;
  int n,i = 0,j = 0;
  printf("enter the size of sub_string\n" );
  scanf("%d", &n);
  b = (char *)malloc((n+1) * sizeof(char));
  b[n+1] = '\0';
  printf("enter string\n");
  getchar();
  fgets(a,200,stdin);
  while( a[i++] != '\0')
    { b[j++] = a[i];
     if (j == n)
      {
        printf("%s \n",b);
        j = 0 ;
      }
    }
  return 0;
}
