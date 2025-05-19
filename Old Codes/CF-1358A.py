t = int(input())

for _ in range(t):
    r,c = map(int,input().split())
    
    if r%2==1 and c%2==1:
        print((r//2*c)+(c//2)+1)

    elif r%2 ==1 and c%2 ==0:
        print((r//2*c)+(c//2))
    
    else:
        print((r//2*c))
    
