import math

t = int(input())
for _ in range(t):
    n = int(input())
    who = 0
    while n > 1:
        if (int(n) & int(n-1)) == 0 :
            n = n/2
        else:
            temp= int(math.floor(math.log(n, 2.0)))
            n = 2**temp
        who += 1
    if who%2 == 0:
        print("Louise")
    else:
        print("Richard")