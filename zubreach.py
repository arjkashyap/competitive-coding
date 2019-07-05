T = int(input())

def sol(testcases):
    ans = []
    for i in range(1, testcases+1):
        M, N = list(map(int, str(input()).split()))
        rx, ry = list(map(int, str(input()).split()))
        moves = int(input())
        seq = list(str(input()))
        x = 0
        y = 0
        for j in seq:
            if j == "U":
                y += 1
            if j == "D":
                y -= 1
            if j == "R":
                x += 1
            if j == "L":
                x -= 1
        if((x > M)|(y > N)|(x < 0)|(y < 0)):
            ans.append("Case " + str(i)+ ": DANGER")
        elif((x == rx)&(y == ry)):
            ans.append("Case " + str(i)+ ": REACHED")
        else:
            ans.append("Case " + str(i)+ ": SOMEWHERE")
    for k in ans:
        print(k)

sol(T)
