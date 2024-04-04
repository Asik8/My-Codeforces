t = int(input())

for _ in range(t):
    a,b,c = map(int,input().split())
    
    if(a+b>=10):
        print('YES')
    
    elif(a+c>=10):
        print('YES')
    
    elif(b+c>=10):
        print('YES')
        
    else:
        print('NO')