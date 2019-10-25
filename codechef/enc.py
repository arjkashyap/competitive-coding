t = int(input())
w = list("abcdefghijklmnopqrstuvwxyz")
while t > 0:
    n = int(input())
    s = list(str(input()))
    i = 0
    if n%2 == 0:
        while i < n:
            temp = s[i]
            s[i] = s[i+1]
            s[i+1] = temp
            i+=2
    else:
        while i < n-1:
            temp = s[i]
            s[i] = s[i+1]
            s[i+1] = temp
            i+=2
    for i in range(n):
        s[i] = w[25 - w.index(s[i])]
    print("".join(s))                
    t -= 1
