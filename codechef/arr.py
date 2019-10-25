#!/usr/bin/python3.6

i = int(input())
lst = list(map(int , str(input()).split()))
t = int(input())
while t > 0:
    a = int(input())
    n = lst.count(a)
    if n:
        print(n)
    else:
        print("NOT PRESENT")
    t -= 1
