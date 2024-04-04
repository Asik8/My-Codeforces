t = int(input())

for _ in range(t):
    a = int(input())
    sum = 0
    even = 0
    odd = 0
    l = list(map(int,input().split()))
    
    for num in l:
        sum += num
        if num %2==0:
            even += num
        else:
            odd += num
    
    if sum %2 ==1:
        print("YES")
    elif even >=1 and odd >= 1:
        print('YES')
    else:
        print("NO")
        