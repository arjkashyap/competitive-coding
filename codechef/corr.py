n, m = list(map(int, str(input()).split()))
lst = []
for i in range(n+m):
    elm = int(input())
    if elm == -1:
        a = max(lst)
        print(a)
        del lst[lst.index(a)]
    else:
        lst.append(elm)
