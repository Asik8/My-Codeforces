t = int(input())
arr = []

for _ in range(t):
    arr = list(map(int,input().split()))
    cham1 = arr[0] if arr[0]>arr[1] else arr[1]
    cham2 = arr[2] if arr[2]>arr[3] else arr[3]
    
    arr.sort(reverse=True)
    
    if (arr[0]==cham1 or arr[1]==cham1) and (arr[0]==cham2 or arr[1]==cham2):
        print('YES')
    
    else:
        print('NO')