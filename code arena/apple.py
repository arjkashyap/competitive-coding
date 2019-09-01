#!/usr/bin/python3.6
n = int(input())
a = list(map(int, str(input()).split()))
total = sum(a)

equalNum = total // n

c = 0
ind = n-1
while len(set(a)) != 1:
    if ind == 0:
        ind = n -1
    print(a)
    while a[ind] != equalNum:
        print(ind)
        print(a)
        if ind != n-1 and a[ind+1] < a[ind]:
            a[ind] -= 1
            a[ind + 1] += 1
            c += 1
        elif a[ind-1] < a[ind]:
            a[ind] -= 1
            a[ind -1] += 1
            c += 1
        elif ind == n-1 and a[0] < a[ind]:
            a[0] += 1
            a[ind] -= 1
            c += 1
    ind -= 1

print(c)
