lst = [6, 2, 5, 5, 4, 5, 6, 3, 7, 6]
t = int(input())
e = 0
while e < t:
    n = int(input())
    temp = []
    fav = str(input()).split()
    for i in fav:
        a= 0
        for j in list(i):
            a += lst[int(j)]
        temp.append(a)
    print(fav[temp.index(min(temp))])
    e = e + 1
