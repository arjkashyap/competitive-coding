from itertools import combinations
t = int(input())
i = 0
while i < t:
    n, k = list(map(int, str(input()).split()))
    s = list(map(int, str(input()).split()))
    comb = list(combinations(s, 3))
    f = comb.count((k, k, k))
    l = len(comb)
    while f % 2 == 0:
        f = f//2
        l = l//2
    
    print(str(f) + "/" + str(l))
    i+=1
