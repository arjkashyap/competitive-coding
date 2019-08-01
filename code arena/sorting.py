t = int(input())
i = 0
while i < t:
    n = int(input())
    arr = list(map(int, str(input()).split()))
    arr.sort()
    arr.reverse()
    res = [str(x) for x in arr]
    print(" ".join(res))
    i += 1
