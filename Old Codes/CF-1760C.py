t = int(input())

for _ in range(t):
    n = int(input())
    l = list(map(int,input().split()))
    left_max = [0]*n
    right_max = [0]*n
    
    for i in range(1,n):
        left_max[i] = max(left_max[i-1],l[i-1])
        
    for i in range(n-2,-1,-1):
        right_max[i] = max(right_max[i+1],l[i+1])

    for index in range(n):  
        print(l[index]-max(left_max[index],right_max[index]),end= ' ')
    print()