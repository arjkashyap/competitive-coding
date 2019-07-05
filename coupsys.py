T = int(input())

def disc(level, input_list):
    result = []     # Lists with similar level
    list_2 = []     # List with maximum Discount
    for k in range(len(input_list)):
        if level == input_list[k][1]:
            result.append(input_list[k])
    maxD = max([result[x][2] for x in range(len(result))])
    for p in range(len(result)):
        if result[p][2] ==  maxD:
            list_2.append(result[p])
    minC = min([result[x][0] for x in range(len(list_2))])
    return [maxD, minC]
    

def sol(testcase):
    ans = []
    for i in range(testcase):
        n = int(input())
        j = 0
        mainList = []
        while j < n:
            mainList.append(list(map(int, str(input()).split())))
            j += 1
        ans.append(disc(1, mainList))
        ans.append(disc(2, mainList))
        ans.append(disc(3, mainList))
            
    a = 0
    while a < len(ans):
        print(ans[a])
        print(ans[a+1])
        print(ans[a+2])
        a += 3
         
sol(T)
 
