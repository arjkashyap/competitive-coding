from collections import OrderedDict
str_input = str(input())
k = int(input())
lines = int((len(str_input))/k)
str_list = []
result = []

def refiner(string_input):
    dup = string_input
    return("".join(OrderedDict.fromkeys(dup)))


    
for i in range(lines):
    adder = str(str_input[:k])
    str_list.append((adder.split()))
    str_input = str_input.replace(adder, "")

for i in range(len(str_list)):
    open_str = "".join(str_list[i])
    refined = refiner(open_str)
    result.append(refined)

for i in range(len(result)):
    print("".join(result[i]))
