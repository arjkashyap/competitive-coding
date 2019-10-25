N = int(input())
c = [int(x) for x in (str(input())).split()]
t = [int(x) for x in str(input()).split()]
sol = []
for i in range(len(t)):
    if t[i] == 3:
        sol.append(c[i])
for i in range(len(t)-1):
    if((t[i]== 1)&(t[i + 1] == 2)|((t[i] == 2)&(t[i+1] == 1))):
        coins = c[i] + c[i+1]
        sol.append(coins)
        continue
print(sol)
print(min(sol))
