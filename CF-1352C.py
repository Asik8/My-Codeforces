t = int(input())

for _ in range(t):
    n,k = map(int,input().split())
    
    if k<n:
        print(k)
    elif k%(n-1) != 0:
        x = k+k//(n-1)
        if x % n != 0:
            ans = x
        else:
            ans = x-1
        print(ans)
    else:
        x = k+k//(n-1)
        if x % n != 0:
            ans = x
        else:
            ans = x-1
        print(ans)