#!/usr/bin/python3.6
t = int(input())
while(t > 0):
    n = int(input())
    s = list(str(input()))
    n -= 1
    while(n > 0):
        s2 = list(str(input()))
        for i in range(len(s)):
            tmp = str( int(s[i]) ^ int(s2[i]))
            s[i] = tmp
        n-=1
    print(s.count('1'))
    t -= 1
