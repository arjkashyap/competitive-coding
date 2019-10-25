#!/usr/bin/python3.6
t = int(input())

while(t > 0):
    n = int(input())
    at = list(map(int, str(input()).split()))
    df = list(map(int, str(input()).split()))
    maxD = -1
    for i in range(len(df)):
        if i == n -1 and df[i] > at[i-1] + at[0] and df[i]>maxD:
            maxD = df[i]
        else:
            if i != n-1 and df[i] > at[i+1] + at[i-1] and df[i] > maxD:
                maxD = df[i]
    print(maxD)    
    
    t-=1
