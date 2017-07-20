#This is not working god knows why ?
def maxhipify(l,p,j):
    largest = p
    left = 2*p +1
    right = 2*p +2
    if left< j and l[left] > l[p]:
        largest = left
    elif right < j and l[right] > l[p]:
        largest = right

    if largest != p :
         l[largest], l[p] = l[p], l[largest]
         maxhipify(l,largest,j)

def heapsort(l):
    n = len(l)
    for i in range(n , -1 , -1):
        maxhipify(l,i,n)

    for j in range(n-1 ,0 , -1):
        l[0],l[j] = l[j],l[0]
        maxhipify(l,0,j)

data = list(map(int,input("enter the elements of the array ").split()))
heapsort(data)
print("the sorted array is")
print(data)
