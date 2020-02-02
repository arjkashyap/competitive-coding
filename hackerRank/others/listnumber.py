waste = int(input())
num = str(input())
elem = num.split()
num_list = []
for i in range(waste):
    num_list.insert(i, int(elem[i]))
num_list.sort()
a = list(set(num_list))
print(a)
print(int(a[-2]))

