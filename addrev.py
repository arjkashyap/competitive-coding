t = int(input())
while t > 0:
	a, b = str(input()).split()
	a, b = list(reversed(a)), list(reversed(b))
	c = int("".join(a)) + int("".join(b))
	print(int("".join(list(reversed(str(c))))))
	t = t -1
