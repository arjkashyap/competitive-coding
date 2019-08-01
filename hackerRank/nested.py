num_1 = str(input())
num_2 = str(input())
list_1 = num_1.split()
list_2 = num_2.split()
alice = 0
bob = 0
for i in range(len(list_1)):
    if list_1[i] > list_2[i]:
        alice += 1
        bob += 0
    elif list_1[i] < list_2[i]:
        alice += 0
        bob += 1
    else:
        alice += 0
        bob += 0
print(alice, bob)
