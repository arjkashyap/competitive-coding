total = int(input())
num = str(input())
num_list = num.split()
new_list = []
for i in range(total):
    new_list.insert(i, int(num_list[i]))
print(sum(new_list))
