waste = int(input())
nums = str(input())
num_list = list(nums.split())
int_list = []
for i in range(len(num_list)):
    int_list.insert(i, int(num_list[i]))
result = tuple(int_list)
print(result)
print(hash(result))
    
    
    
