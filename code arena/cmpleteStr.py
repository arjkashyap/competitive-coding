#!/usr/bin/python3.6
t = int(input())

while t > 0:
    complete = True
    s = str(input())
    tst = list("abcdefghijklmnopqrstuvwxyz")
    print(tst)
    for i in tst:
        if i in s:
            pass
        else:
            print(i)
            complete = False
    if complete:
        print("YES")
    else:
        print("No")
    t -= 1
