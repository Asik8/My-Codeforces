import math
t = int(input())

for _ in range(t):
    n,k = map(int,input().split())
    
    a = list(map(int,input().split()))
    b = list(map(int,input().split()))
    
    if k!=0:
        a.sort()
        b.sort(reverse = True)
        # print(b)

        for i in range(k):
            if(a[i]<b[i]):
                a[i],b[i] = b[i],a[i]

        sum1 = 0 

        for i in a:
            sum1+=i

        print(sum1)
    
    else:
        sum1=0
        for i in a:
            sum1+=i
        
        print(sum1)

