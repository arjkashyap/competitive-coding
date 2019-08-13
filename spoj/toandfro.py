#!/usr/bin/python3.6
while True:
    n = int(input())
    if n != 0:
        s = str(input())
        lst = [ list(s[x:x+n]) for x in range(0, len(s), n) ]
        i = 1
        res = ""
        while i < len(lst):
            lst[i] = list(reversed(lst[i]))
            i += 2
        for a in range(n):
            for b in range(len(lst)):
                res+= lst[b][a]
        print(res)
    else:
        break
