t = int(input())

for _ in range(t):
    a = int(input())
    l = list(map(int,input().split()))
    l.sort()
    count = 0
    
    for i in range(a-1):
        if l[i+1]<=l[i]:
            count += 1
            break
    
    if count == 0:
        print("YES")
    else:
        print("NO")