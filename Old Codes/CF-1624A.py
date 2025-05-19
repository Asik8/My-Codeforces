t = int(input())

for _ in range(t):
    a = int(input())
    arr = list(map(int,input().split()))
    arr.sort()
    max = arr[a-1]
    min = arr[0]
    print(max-min)
        
            