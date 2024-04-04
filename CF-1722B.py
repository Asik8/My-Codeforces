t = int(input())

for _ in range (t):
    a = int(input())
    s1 = input()
    s2 = input()
    blindness = True
    
    for i in range(a):
        if s1[i] != s2[i]:
            if s1[i] == 'R' or s2[i] == 'R':
                blindness = False
                break
    
    print("YES") if blindness else print('NO')
        