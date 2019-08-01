total = int(input())
checks = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
main_list = []
add = 0
for i in range(total + 1):
    data = str(input())
    data_list = data.split()
    main_list.insert(i, data_list)

for i in range(len(main_list) - 1):
    if str(main_list[total][0]) == str(main_list[i][0]):
        for j in range(1, len(main_list[i])):
            add += float(main_list[i][j])
    else:
        continue

avg = float((add/(len(main_list[0]) - 1))*100/100) 
print("{0:.2f}".format(avg))
