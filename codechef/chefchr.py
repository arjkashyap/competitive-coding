T = int(input())

def counter(word):
    total = 0
    test = list("chef")
    words = list(word)
    for elem in words:
        if elem in test:
            total += 1
            test.remove(elem)
    return total

def sol(testcases):
    sol = []
    for i in range(testcases):
        count = 0
        sen = str(input())
        for j in range(len(sen)-3):
            if counter(sen[j:j+4]) == 4:
                count += 1
        sol.append(count)
       
    for k in sol:
        if k == 0:
            print("normal")
        else:
            print("lovely "+ str(k))
sol(T)
