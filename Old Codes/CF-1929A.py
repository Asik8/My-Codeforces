t = int(input())

for _ in range(t):
    a = int(input())
    arr =list(map(int,input().split()))
    
    arr.sort()
    sum =0
    for i in range(a-1):
        sum += arr[i+1]-arr[i]
    print(sum)
        