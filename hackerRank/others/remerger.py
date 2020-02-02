from collections import OrderedDict
string = "AABCAAADA"
k = 3
lines = int((len(string))/k)     # In how many lines is output formated
main_list = []
for i in range(lines):
    main_list.append(string[:k])    # Take the three texts from string and put em in list
    string = string.replace(string[:k], "") # Removes text from main list for future ref

for i in range(len(main_list)):
    print("".join(OrderedDict.fromkeys((main_list[i].split()))))
    
