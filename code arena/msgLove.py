#!/usr/bin/python3.6
love = list("love")
msg = []
s = list(str(input()))

for i in range(len(s)):
    if s[i] in love:
        msg.append(s[i])

msg = "".join(msg)

isLove = True;

for i in msg:
    if i not in love:
        isLove = False

if isLove:
    print("I love you, too!")
else:
    print("Let us breakup!")


