#!/usr/bin/python3.6
n, q = list(map(int, str(input()).split()))
a = []
a = list(map(int, str(input()).split()))

def isRound(a):
    rev = list(reversed(str(a)))
    rev = "".join(rev)
    if rev == str(a):
        return True
        
    return False
    

while q > 0:
    lst = list(map(int, str(input()).split()))
    if lst[0] == 1:
        i = lst[1]
        r = lst[2]
        count = 0
        for index in range(i-1, r):
            if isRound(a[index]):
                count += 1
        print(count)
    elif lst[0] == 2:
        i = lst[1]
        k = lst[2]
        a[i-1] = k
        
    q -= 1                
