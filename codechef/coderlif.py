tst = int(input())
result = []
while tst > 0:
    days = list(map(int, str(input()).split()))
    extends = False
    for i in range(len(days)-5):
        count = 0
        for j in range(i, i+7):
            if days[j] == 1:
                count += 1
        if count > 5:
            result.append("#coderlifematters")
            extends = True
            break
    if extends == False:
        result.append("#allcodersarefun")
    tst -= 1
for i in result:
    print(i)
    
