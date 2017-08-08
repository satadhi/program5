#include<stdio.h>
#include<stdlib.h>

 struct items{

   double w,p,ratio;

}a[4];

int main()
{
  int i,j,n;
  struct items temp;
  printf("enter the total items \n");
  scanf("%d", &n);

  for(i = 0 ; i < 4 ; i++)
  {
    printf("weight , profit : " );
    scanf("%lf %lf",&a[i].w, &a[i].p);
    a[i].ratio =(a[i].p)/(a[i].w);
  }
  for(i=1;i<n;i++)
    {
      j=i-1;
      temp=a[i];
      while((j>-1)&&(temp.ratio < a[j].ratio))
          {
            a[j+1]=a[j];
            j--;
         //  printf("this is inside while\n" );
          }
      a[j+1]=temp;

     }


  for(i = 0 ; i < 4 ; i++)
  {
    printf("weight , profit: " );
    printf("%0.2lf %0.2lf %0.3lf ",a[i].w,a[i].p,a[i].ratio);
    printf("\n" );

  }
}
