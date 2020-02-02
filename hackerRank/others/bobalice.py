num_1 = str(input())
num_2 = str(input())
list_1 = num_1.split()
list_2 = num_2.split()
alice = 0
bob = 0
for i in range(len(list_1)):
    if int(list_1[i]) > int(list_2[i]):
        alice += 1
        bob += 0
    elif int(list_1[i]) < int(list_2[i]):
        alice += 0
        bob += 1
    else:
        alice += 0
        bob += 0
print(alice, bob)
