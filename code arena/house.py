n, q = list(map(int, str(input()).split()))
lst = list(map(int, str(input()).split()))
for i in range(q):
    total = 0
    e = list(map(int, str(input()).split()))
    e_type = e[0]
    if(e_type == 1):
        k, l, r = e[1], e[2], e[3]
        for i in range(l, r+1):
       
            total += lst[i-1]*abs(i - k)
            
        print(total)
    else:
        k, s = e[1], e[2]
        lst[k-1] += s

n, q = list(map(int, str(input()).split()))
lst = list(map(int, str(input()).split()))
for i in range(q):
    total = 0
    e = list(map(int, str(input()).split()))
    e_type = e[0]
    if(e_type == 1):
        k, l, r = e[1], e[2], e[3]
        for i in range(l, r+1):
       
            total += lst[i-1]*abs(i - k)
            
        print(total)
    else:
        k, s = e[1], e[2]
        lst[k-1] += s


