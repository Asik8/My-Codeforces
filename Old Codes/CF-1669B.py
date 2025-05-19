t = int(input())

for _ in range(t):
    a = int(input())
    l = list(map(int,input().split()))
    count = 0
    l.sort()
    found = False
    
    variable = l[0]
    for i in l:
        if i == variable:
            count += 1
            if count == 3:
                found = True
                break
        else:
            variable = i
            count = 1
            
    print(variable) if found else print(-1)
    
    