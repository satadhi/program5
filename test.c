#include <stdio.h>

int a;
char aaa[50];

int main()
{
scanf("enter the number :%d",&a);
printf("%d",a);

printf("Enter a string\n");
getchar();
fgets(aaa,50,stdin);
printf("%s\n",aaa);
 return 0;
}
