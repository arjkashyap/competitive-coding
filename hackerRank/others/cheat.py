"""
For the word "BANANA", the first vowel 'A' occurs at position 1,
len("BANANA") = 6, so there are 6-1 = 5 substrings starting with
this letter 'A': ['A', 'AN', 'ANA', 'ANAN', 'ANANA'], you add one
extra letter tothat specific letter 'A' until you get to the end
of the word.
"""
s = str(input())
def minion_game(string):
    vowel =['A','E','I','O','U']
    S=0
    K=0
    for i in range(len(string)):
        if string[i] in vowel:
            K+= len(string)-i
        else:
            S+=len(string)-i
    if S>K:
        print("Stuart"+" "+ "%d" % S)
    elif K>S:
        print("Kevin"+" "+'%d' % K)
    else:
        print("Draw")

minion_game(s)
