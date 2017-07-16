#include<stdio.h>

int main()
{
  FILE *ft;
  char a[100];
  ft = fopen("sample.txt","w");
  printf("enter data : \n");
  fgets(a, 100, stdin);
  fprintf(ft,"%s",a );
  fclose(ft);
  return 0;
}
