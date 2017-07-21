n,m = map(int,input().split())
arr=[]
da = [0] * (n+1)
for _ in range(m):
    a,b,k = map(int,input().split())
    da[a-1] += k
    if((b)<=len(da)): da[b] -=k
for i in range(1,len(da)-1):
    arr.append(da[i+1]+da[i])
print(max(arr))
