x = int(input())
y = int(input())
z = int(input())
n = int(input())
grid = []
p = 0
for i in range(x + 1):
    for j in range(y + 1):
        for k in range(z + 1):
            if(i + j + k != n):
                grid.insert(p, [k, j, i])
                p += 1
print(grid)
                    
