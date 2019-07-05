t = int(input())
def switch(turn):
    if str(turn) == "CHEF":
        return "COOK"
    else:
        return "CHEF"

for i in range(t):
    start = "COOK"
    p1, p2, k = list(map(int, str(input()).split()))
    j = 1
    while j <= p1+p2+k:
        s = switch(start)
        start = s
        j+= k
    print(s)
