t = int(input())

for _ in range(t):
    n,m = map(int,input().split())
    sum = 0
    
    if n==1:
        print(sum)
    
    elif n==2:
        print(m)
    
    else:
        if m%2 != 0:
            a = m//2
            b = (m//2)+1
            sum += a*2 + b*2
        elif m%2 ==0:
            a = m//2
            sum += a*4
        print(sum)
        