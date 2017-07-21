#!/bin/python3

import sys

n1,n2,n3 = input().strip().split(' ')
n1,n2,n3 = [int(n1),int(n2),int(n3)]
h1 = [int(h1_temp) for h1_temp in input().strip().split(' ')]
h2 = [int(h2_temp) for h2_temp in input().strip().split(' ')]
h3 = [int(h3_temp) for h3_temp in input().strip().split(' ')]
sum1 = []
sum2 = []
sum3 = []
sum1.append(h1[-1])
sum2.append(h2[-1])
sum3.append(h3[-1])

for i in range(n1 -1) :
    sum1.append(sum1[i] + h1[n1 -2 - i])
for i in range(n2 -1  ) :
    sum2.append(sum2[i] + h2[n2  -2 -i])
for i in range( n3 -1 ) :
    sum3.append(sum3[i] + h3[n3 -2 -i ])

i,j,k = n1-1,n2-1,n3-1
while( i != 0 and j != 0 and k != 0):
    if(sum1[i] == sum2[j] and sum2[j] == sum3[k]):
        print(sum1[i])
        break
    elif sum1[i] > sum2[j] or sum1[i] >sum3[k] :
        i -= i
    elif sum1[i] < sum2[j] or sum2[j] > sum3[k] :
        j -= j
    elif sum3[i]  > sum2[j] and sum3[j] > sum2[k]:
        k -=k
        
if(j ==0 or j ==0 or k == 0):
    print(0)
