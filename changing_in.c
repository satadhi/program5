#include<stdio.h>
int main()
{
  FILE *ft ;
  char ch;
  ft = fopen("sample.txt","+r");
  while((ch = getc(ft)) != EOF)
  {
    if(ch == "satadhi")
       putc(ft,"Ram");
  }
  fclose(ft);
  return 0;
}
