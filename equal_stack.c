#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n1;
    int n2;
    int n3;
    scanf("%d %d %d",&n1,&n2,&n3);
    int *h1 = malloc(sizeof(int) * n1);
    for(int h1_i = 0; h1_i < n1; h1_i++){
       scanf("%d",&h1[h1_i]);
    }
    int *h2 = malloc(sizeof(int) * n2);
    for(int h2_i = 0; h2_i < n2; h2_i++){
       scanf("%d",&h2[h2_i]);
    }
    int *h3 = malloc(sizeof(int) * n3);
    for(int h3_i = 0; h3_i < n3; h3_i++){
       scanf("%d",&h3[h3_i]);
    }

    int small = n1 > n2 ? (n1 > n3 ? n1 : n3) : (n2> n3 ? n2 : n3);

    int sum1[n1], sum2[n2], sum3[n3];
    sum1[0] = h1[n1 -1];
    sum2[0] = h2[n2 -1];
    sum3[0] = h3[n3 -1];


    for(int i = 0; i < n1 -1  ; i++ )
      sum1[i + 1]  = sum1[i] + h1[n1 -1-i];

    for(int i = 0 ; i < n2 -1 ; i++ )
      sum2[i + 1 ]  = sum2[i] + h2[n2 - 1 -i];

    for(int i = 0 ; i < n3 -1 ; i++ )
      sum3[i + 1 ] = sum3[i] + h3[n3 - 1 -i];

    for(int i = 0 ; i < n1 ; i++)
        printf("%d ",sum1[i]);
    for(int i = 0 ; i < n2 ; i++)
        printf("%d ",sum2[i]);
    for(int i = 0 ; i < n3 ; i++)
        printf("%d ",sum3[i]);

    if (small == n1)
    { int j =0;
      for(int i = 0 ; i < n1 ; i++)
         { int j =0;
           while(sum1[i] < sum2[j] && sum1[i] < sum3[j] && j< n2 && j < n3 )
           {
               if(sum1[i] == sum2[j] && sum1[i] == sum3[j])
                 {
                   printf("%d",sum1[i]);
                   exit(0);

                  }
             j++;
            }

         }
    }
    if (small == n2)
    { int j =0;
      for(int i = 0 ; i < n2 ; i++)
         { int j =0;
           while(sum2[i] < sum1[j] && sum2[i] < sum3[j] && j< n1 && j < n3 )
           {
                if(sum2[i] == sum1[j] && sum2[i] == sum3[j])
               {
                   printf("%d",sum2[i]);
                   exit(0);
                 }
            j++;
            }
        }
      }
      if (small == n3)
      { int j =0;
        for(int i = 0 ; i < n3 ; i++)
           { int j =0;
             while(sum3[i] < sum2[j] && sum3[i] < sum1[j] && j< n2 && j < n3 )
             {
                 if(sum3[i] == sum2[j] && sum3[i] == sum1[j])
                  {
                     printf("%d",sum3[i]);
                     exit(0);
                  }
              j++;
             }

           }
      }
    return 0;

}
