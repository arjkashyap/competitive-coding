total = int(input())
entry = str(input())
ent_list = entry.split()
list_set = []
for i in range(total):
    list_set.append(int(ent_list[i]))
set_ent = set(list_set)
listed = list(set_ent)
added = 0
for i in range(len(listed)):
    added += int(listed[i])

print(added/len(listed))
        
        
