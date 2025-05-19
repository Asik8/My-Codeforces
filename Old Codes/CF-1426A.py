t = int(input())

for _ in range(t):
    n ,x = map(int,input().split())
    
    if(n<3):
        print(1)
    
    else:
        n-=2
        if(n%x) == 0:
            print(n//x+1)
        else:
            print((n//x)+2)
    