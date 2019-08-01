total = int(input())
num = str(input())
list_num = num.split()
added = 0
for i in range(total):
    elem = int(list_num[i])
    added = added + elem
print(added)
