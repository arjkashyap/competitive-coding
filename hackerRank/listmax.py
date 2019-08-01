total = int(input())
num = str(input())
elem = num.split()
num_list = []
for i in range(total):
    num_list.insert(i, int(elem[i]))
num_list.sort()
a = list(set(num_list))
a.remove(max(a))
print(max(a))
