n = int(input())
lst = [str(input()) for x in range(n)]
lst.sort()
lst = list(set(lst))
print(len(lst))
for i in lst:
    print(i)
