sen = str(input())
main_list = sen.split()
subs = []
j = 0
empty = []
for i in range(len(main_list)):
    subs.append(list(main_list[i]))

for i in range(len(main_list)):
    word = str(subs[i][0])
    subs[i].remove(word)
    a = word.upper()
    subs[i].insert(0, a)
print(subs)
i = 0
while i < len(main_list):
    empty.append(''.join(subs[i]))
    i += 1
print(' '.join(empty))
