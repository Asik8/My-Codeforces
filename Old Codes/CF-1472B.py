import math
t = int(input())

for _ in range(t):
    a = int(input())
    n = list(map(int,input().split()))
    
    one =0
    two =0
    
    for i in n:
        if i == 1:
            one+=1
        else:
            two+=1
    
    bob = 0
    alice =0
    
    if(one %2== 0 and two%2 == 0) or (one == 0 and two%2 == 0) or (one %2== 0 and two == 0) or (one>two and (one-(two*2))%2 == 0) or (two>one and one != 0 and one%2 == 0 and (two-one)%2 == 1):
        print('YES')
        
    else:
        print('NO')
    
    

