def maxhipify(l,p,n):
    largest = p
    left = 2*p +1
    right = 2*p +2
    if left< n and l[left] > l[p]:
        largest = left
    elif right < n and l[right] > l[p]:
        largest = right

    if largest != p :
         l[largest], l[p] = l[p], l[largest]
         maxhipify(l,largest,n)
def buildmaxheap(l,n):
    for i in range(n , -1 , -1):
        maxhipify(l,i)
def heapsort(l):
    buildmaxheap(l,n)
    for i in range(len(l)-1 ,0 , -1):    
        maxhipify(l,0,n)
        n = n-1
l = list(map(int,input("enter the elements of the array ").split()))
n = len(l)
heapsort(l,n)
print("the sorted array is \n")
for i in l:
    print(i,end = ' ')
