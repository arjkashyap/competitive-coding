def solve (a, c, b, M, N, X):
    # Write your code here
    dem = [ b[i] - a[i] for i in range(len(a)) ]
    for i in c:
        dem.append(i)
    dem = list(sorted(dem))
    total = 0
    i = 0
    while 1:
        total += dem[i]
        i += 1
        if(dem[i] + total > X):
            break
    return i
    
N,M,X = map(int,input().split(" "))
a=[]
b=[]
for i in range(N):
    x,y=map(int,input().split(" "))
    a.append(x)
    b.append(y)
c = list(map(int, input().split(" ")))

out_ = solve(a, c, b, M, N, X)
print (out_)
