'''program to find one of the pick of a given array'''
list1 = list(map(int,input("enter the array").split()))
mid =0
st = 0
en = len(list1)-1
while True:
    mid  = (st +en)//2
    if list1[mid+1] < list1[mid] and list1[mid-1] < list1[mid]:
        print("the pick is: {}".format(list1[mid]))
        break
    elif(list1[mid+1]>list1[mid]):
           