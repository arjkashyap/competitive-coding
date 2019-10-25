#!/usr/bin/python3.6
t = int(input())
while t > 0:
    n, k = list(map(int, str(input()).split()))
    count = k
    a = list(map(int, str(input()).split()))
    a = sorted(a, reverse = True)
    index = k
    while a[index] >= a[k-1]:
        count += 1
        index += 1
    print(count)
    t-=1
