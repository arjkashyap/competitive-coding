T = int(input())

def sol(testcases):
    ans = []
    for i in range(testcases):
        n = input()
        canList = [int(x) for x in str(input()).split()]
        result = sum(canList)
        if result %2 == 0:
            ans.append('NO')
        else:
            ans.append('YES')
            
    for i in range(len(ans)):
        print(ans[i])

sol(T)
