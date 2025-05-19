import math

t = int(input())

for _ in range(t):
    x,y = map(int,input().split())
    
    a = max(x,y)
    b = min(x,y)
        
    if a<=2*b:
        mul = 2*b*2*b
    else:
        mul = a*a
    
    print(mul)
    

