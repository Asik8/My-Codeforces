t = int(input())

for _ in range(t):
    n,m,k= map(int,input().split())
    lp = list(map(int,input().split()))
    rp = list(map(int,input().split()))
    count = 0
    
    for i in lp:
        for j in rp:
            if (i+j)<=k:
                count += 1
    
    print(count)
    