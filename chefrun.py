tst = int(input())
result = []
while tst > 0:
    x1, x2, x3, v1, v2 = str(input()).split()
    t1 = abs((int(x3) - int(x1))/int(v1))
    t2 = abs((int(x3) - int(x2))/int(v2))
    if float(t1) < float(t2):
        result.append('Chef')
    elif float(t1) > float(t2):
        result.append('Kefa')
    else:
        result.append('Draw')
    tst -=1
for i in result:
    print(i)
