t = int(input())

for _ in range(t):
    a = int(input())
    s = input()
    i=0
    j=0
    candy_position  = 0
    for ch in s:
        if ch == 'U':
            i += 1
            if i==1 and j==1:
                candy_position += 1
                break
        elif ch == 'R':
            j += 1
            if i==1 and j==1:
                candy_position += 1
                break
            
        elif ch == 'L':
            j -= 1
            if i==1 and j==1:
                candy_position += 1
                break
            
        elif ch == 'D':
            i -= 1
            if i==1 and j==1:
                candy_position += 1
                break
    
    if candy_position == 1:
        print("YES")
    else:
        print("NO")