total = float(input())
dic = {}
for i in range(total):
    key = str(input())
    value = float(input())
    dic[key] = value
names = list(dic.keys())
marks = list(dic.values())
def finder(value):
    keys_in = list(dic.keys())
    values_in = list(dic.values())
    pos = values_in.index(value)
    return keys_in[pos]
real_min = min(marks)
real_pos = marks.index(real_min)
marks.remove(real_min)
marks[:] = (i for i in marks if i != (real_min))
result_min = min(marks)
print(finder(result_min))
