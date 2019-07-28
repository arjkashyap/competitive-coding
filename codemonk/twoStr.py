t = int(input())
while t > 0:
    s = input().split()
    s1, s2 = list(s[0]), list(s[1])
    s1 = sorted(s1)
    s2 = sorted(s2)
    isEq = True
    for i in range(len(s1)):
        if s1[i] != s2[i]:
            isEq = False
    if isEq:
        print("YES")
    else:
        print("NO")
    t -= 1
