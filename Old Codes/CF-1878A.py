t = int(input())

for _ in range(t):
    n,k = map(int,input().split())
    a = list(map(int,input().split()))
    
    count_k = 0
    
    for i in a:
        if i == k:
            count_k +=1
            break
        
    if count_k > 0:
        print('YES')
    else:
        print("NO")
    
        
