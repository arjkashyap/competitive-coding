t = int(input())
e = 0
while e < t:
    a = int(input())
    n = list(map(int, list("".join(list(str(input()))).replace(" ", ""))))
    r = []
    for i in range(len(n)):
        r.append(max(n))
        del n[n.index(max(n))]
    for i in r:
        print(i, end = "")
    print("")
    e+=1
