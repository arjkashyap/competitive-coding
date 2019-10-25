T = int(input())

def front(chLen, glLen):
    chList = list(map(int, chLen.split()))
    glList = list(map(int, glLen.split()))
    result = True
    for i in range(len(chList)):
        if chList[i] > glList[i]:
            result = False
    print(chLen, glLen, result)
    return result

def back(chLen, glLen):
    chList = list(map(int, chLen.split()))
    glList = list(map(int, glLen.split()))
    result = True
    for i in range(len(chList)):
        if chList[i] < glList[i]:
            result = False
    print(chLen, glLen, result)
    return result
sol = []

for i in range(T):
    fin = int(input())
    chLen = str(input())
    glLen = str(input())
    if front(chLen, glLen) == True & back(chLen, glLen) == True:
        sol.append("both")
    elif front(chLen, glLen) == True & back(chLen, glLen) == False:
        sol.append("front")
        print("I did " + chLen + " and " + glLen)
    elif front(chLen, glLen) == False & back(chLen, glLen) == True:
        sol.append("back")
    elif front(chLen, glLen) == False & back(chLen, glLen) == False:
        sol.append("none")
        


print(sol)
