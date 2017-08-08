def firstDuplicate(a):
    seen = [0]*(len(a)+1)
    for i in a:
        print(seen)
        if a[i] == 0:
            a[i] = 1
        elif a[i] == 1:
            return i
    return -1

a = h1 = [int(h1_temp) for h1_temp in input().strip().split(' ')]
print(firstDuplicate(a))
