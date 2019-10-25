T = int(input())
ans = []
def sol(testCases):
    for i in range(testCases):
        fingers = int(input())
        finLen = list(map(int, str(input()).split()))
        gloveLen = list(map(int, str(input()).split()))
        frontCon = True
        backCon = True
        for j in range(len(gloveLen)):
            if finLen[j] > gloveLen[j]:
                frontCon = False
        for j in range(1, len(gloveLen)+1):
            if finLen[j-0] < (gloveLen[-x] for x in range(1, len(gloveLen)+1))[j]:      #I think bug is here
                backCon = False
        if frontCon == True & backCon == True:
            ans.append("both")
        if frontCon == True & backCon == False:
            ans.append("front")
        if frontCon == False & backCon == True:
            ans.append("back")
        if frontCon == False & backCon == False:
            ans.append("none")
    
sol(T)
print(ans)
