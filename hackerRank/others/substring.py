main = str(input())
substr = str(input())
def sub():
    count = 0
    for i in range(len(main)):
        for j in range(len(main)):
            if main[i: j + 1] == substr:
                count += 1
            else:
                pass
    return count
        

print(sub())
