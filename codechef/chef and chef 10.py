T = int(input())
def sol(testCases):
    i = 0
    tests = testCases
    ans = []
    while i < int(tests):
        count = 0
        x = int(input())
        if x % 5 == 0:
            while True:
                if x % 10 == 0:
                     break
                else:
                    x = x*2
                    count += 1
            ans.append(count)
        else:
            ans.append(-1)
        i+=1
    for j in range(len(ans)):
        print(ans[j])
    
sol(T)
            
            
        
