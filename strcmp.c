#include<stdio.h>
#include<string.h>
int main()
{
   char a[100], b[100];

   printf("Enter the first string\n");
   gets(a);

   printf("Enter the second string\n");
   gets(b);

  printf("string: %d\n",strcmp(a,b));
   return 0;
}
