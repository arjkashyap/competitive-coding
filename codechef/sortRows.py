#!/usr/bin/python3.6
t = int(input())
lst = []
for i in range(t):
    r = list(map(int, input().split()))
    lst.append(r)

for i in range(len(lst)):
    index = 0
    for j in range(i+1, len(lst)):
        while(lst[i][index] == lst[i+1][index]):
            index += 1
        if lst[i][index] > lst[i][index]:
            tmp = lst[i][index]
            lst[i][index] = lst[i][index + 1]
            lst[i][index + 1] = tmp
for i in lst:
    for j in i:
        print(j, end = " ")
    print()
    
