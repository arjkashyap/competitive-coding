t = int(input())

def prec(op):
    op = str(op)
    if op == "^":
        return 3
    if op == "*" or op == "/":
        return 2
    if op == "+" or op == "-":
        return 1
    else:
        return -1

while t > 0:
    res = ""
    stack = ["N"]
    exp = str(input())
    for i in exp:
        if i == "(":
            stack.append("(")
        elif i >= "a" and i <= "z":
            res += i
        elif i == ")":
            while stack[-1] != "(":
                top = stack[-1]
                stack.pop()
                res+=top
            stack.pop()
        else:
            if prec(i) > prec(stack[-1]):
                stack.append(i)
            elif prec(i) <= prec(stack[-1]):
                while prec(stack[-1]) >= prec(i):
                    top = stack[-1]
                    stack.pop()
                    res += top
                stack.append(i)
    print(res)
    t -= 1
