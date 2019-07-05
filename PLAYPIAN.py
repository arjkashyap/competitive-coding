t = int(input())
for i in range(t):
    s = str(input())
    j = 0
    ans = "yes"
    while j < len(s):
        if ((s[j:j+2] == "AA") or (s[j:j+2] == "BB")):
            ans = "no"
            break
        else:
            j+=2
    print(ans)
        
