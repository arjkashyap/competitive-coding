import math
a = int(input())
b = int(input())
c = int(input())
root1 = (-b + math.sqrt(b**2 - 4*a*c))/(2*a)
root2 = (-b - math.sqrt(b**2 - 4*a*c))/(2*a)
print(root1,root2,sep = "\n")
