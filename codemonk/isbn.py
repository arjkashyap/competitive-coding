n = str(input())
a = 0

for i in range(0, len(n)):
    a += (i+1)*(int(n[i]))
if a % 11 == 0:
    print("Legal ISBN")
else:
    print("Illegal ISBN")

