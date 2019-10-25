tst = int(input())
while tst>0:
    r = int(input())
    a = list(map(int, str(input()).split()))
    b = list(map(int, str(input()).split()))
    a[a.index(max(a))], b[b.index(max(b))] = [0, 0]
    if sum(a)< sum(b):
        print("Alice")
    elif sum(a) > sum(b):
        print("Bob")
    else:
        print("Draw")
    tst -=1
