tst = int(input())
chef = list("chef")
count = 0
while tst > 0:
    frn = False
    name = list(str(input()))
    for i in range(len(name)):
        if i != (len(name)-1):
            for j in range(len(chef)):
                if name[i] == chef[j]:
                    if j != (len(chef)-1):
                        if name[i+1] == chef[j+1]:
                            frn = True
                            break
                    else:
                        break
        else:
            break
    if frn == True:
        count+=1
    tst -= 1
print(count)
