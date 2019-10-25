#!/usr/bin/python3.6
t = int(input())

while(t > 0):
    n = int(input())
    gls = list(map(int, str(input()).split()))
    fls = list(map(int, str(input()).split()))
    a = max([ gls[i]*20 - fls[i]*10 for i in range(len(gls)) ])
    if( a > 0):
        print(a)
    else:
        print(0)
    t-=1
