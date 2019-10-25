def funct():
    for t in range(int(input())):
        n=int(input())
        d1=d2=d3=0
        c1=c2=c3=101
        for i in range(n):
            C,L,D=[int(x) for x in input().split()]
            if L==1:
                if D>d1:
                    d1=D
                    c1=C
                elif D==d1:
                    c1=min(C,c1)
            elif L==2:
                if D>d2:
                    d2=D
                    c2=C
                elif D==d2:
                    c2=min(C,c2)
                    
            else:
                if D>d3:
                    d3=D
                    c3=C
                elif D==d3:
                    c3=min(C,c3)
        print(d1,c1)
        print(d2,c2)
        print(d3,c3) 
funct()
