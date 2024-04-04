t = int(input())

for _ in range (t):
    a = int(input())
    arr = list(map(int,input().split()))
    if(a==1):
        print('NO')
    else:
        sum1 = 0
        sum2 = 0
        for i in range(a//2):
            sum1 += arr[i]
            
        for i in range(a//2,a):
            sum2 += arr[i]
        
        if (sum1 % 2==0 and sum2 %2 == 0) or (sum1 % 2==1 and sum2 %2 == 1):
            print("YES")
        else:
            print("NO")