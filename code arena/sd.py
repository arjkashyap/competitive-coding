import math
t = 7
lst = []
while t > 0:
    j = list(map(int, list(str(input()))))
    lst.append(j.count(1))
    t -= 1
m = sum(lst)/len(lst)
for i in range(len(lst)):
    t = (lst[i] - m)*(lst[i] - m)
    lst[i] = t
m = math.sqrt(sum(lst)/len(lst))
print("{:.4f}".format(m))
    

    
