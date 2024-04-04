t = int(input())

for _ in range(t):
    a = int(input())
    mihai = 0
    bianca = 0 
    l = list(map(int,input().split()))
    
    for num in l:
        if num %2 == 0:
            mihai += num
        else:
            bianca += num
        
    
    if mihai <= bianca:
        print("NO")
    else:
        print("YES")