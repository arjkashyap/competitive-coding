#!/usr/bin/python3.6
t = str(input())

def display(n):
    n = str(n)
    a = list(n)
    return "".join(list(reversed(a)))

if int(t) > 0:
    print(display(t))
else:
    t = abs(int(t))
    print("-"+display(t))
    

