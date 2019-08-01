def func(s1, s2):
    for j in range(len(s1)):
        for k in range(j + 1, len(s2)):
            if s1[j:k] in s2:
                return True
n = int(input())
i = 0
while i < n:
    subseq = False
    str_1 = str(input())
    str_2 = str(input())
    if func(str_1, str_2):
        print("Yes")
    if not func(str_1, str_2):
        print("No")
    i += 1

