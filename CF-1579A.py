t = int(input())

for _ in range(t):
    s = input()
    a = 0
    b = 0
    c = 0
    
    for ch in s:
        if ch == 'A':
            a += 1
        elif ch == 'B':
            b += 1
        else:
            c+=1
    if a+b == len(s) and a==b:
        print('YES')
        
    elif b+c == len(s) and b == c:
        print('YES')
        
    elif a<=b and b-a == c:
        print('YES')
    
    else:
        print('NO')