t = int(input())
while t > 0:
    n = int(input())
    lst = list(map(int, str(input()).split()))
    a = []
    r = []
    for i in lst:
        a.append(lst.count(i))
    m = max(a)
    for i in lst:
        if lst.count(i) == m:
            r.append(i)
    j = list(set(list(sorted(r))))
    j.sort()
    j.reverse()
    print(" ".join(map(str, j)))
    t -=1 
