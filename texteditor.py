mystring = ""
his = []
x = int(input())
for _ in range(x):
    temp = input().strip().split()

    if temp[0] == '1':
        his.append(mystring)
        mystring = mystring + temp[1]
    elif temp[0] == '2':
        his.append(mystring)
        mystring = mystring[0 : -1 * int(temp[1])]
    elif temp[0] == '3':
        print(mystring[ int(temp[1]) -1])
    else:
        mystring = his.pop()
