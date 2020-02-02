s = str(input())
total = 0
global vowels, s_list, vow_list, cons, cons_list
vowels = ['A', 'E', 'I', 'O', 'U']
cons = list('BCDFGHJKLMNPQRSTVWXYZ')
cons_list = []
s_list = list(s)
vow_list = []
def counter_1(sentence):    
    count_1 = 0
    for i in range(len(s_list)):
        if s_list[i] in vowels:
            vow_list.append(s_list[i])
            vowels.remove(s_list[i])
            count_1 += 1
    return count_1

def custom(in_sen, words):
    occ = 0
    input_str = in_sen
    str_count = words
    for i in range(len(input_str)):
        for j in range(len(input_str)):
            if input_str[i:j+1] == str_count:
                occ += 1
    return occ
            

def kev(sentence):
    sen = sentence
    count_2 = 0
    for i in vow_list:
        pos = (s_list.index(i))
        p = 1
        for j in range(len(sen)-1):
            add = sen[pos:pos + p]
            p+=1
            j+=1
            count_2 += custom(sen, add)
    return count_2
counter_1(s)
kevin = int(kev(s))
            
def counter_2(sentence):
    count_3 = 0
    for i in range(len(s_list)):
        if s_list[i] in cons:
            cons_list.append(s_list[i])
            cons.remove(s_list[i])
            count_3 += 1
    return count_3

def stu(sentence):
    sen = sentence
    count_4 = 0
    for i in cons_list:
        pos = (s_list.index(i))
        p = 1
        for j in range(len(sen)-1):
            add = sen[pos:pos + p]
            p+=1
            j+=1
            count_4 += custom(sen, add)
    return count_4
counter_2(s)
stuart = int(stu(s))

def result():
    if kevin > stuart:
        print("Kevin", kevin)
    elif kevin == stuart:
        print("Draw")
    else:
        print("Stuart", stuart)
result()
