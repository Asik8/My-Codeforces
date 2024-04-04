t = int(input())

for _ in range(t):
    s = input()
    c = input()
    
    if len(s) == 1:
        if s==c:
            print("YES")
        else:
            print('NO') 
    
    else:
        while True:
            s= s[1:-1]
            if len(s)==1:
                if len(s)==1 and s == c:
                    print("YES")
                else:
                    print('NO')
                break
    
    
