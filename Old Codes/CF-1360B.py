t = int(input())

for _ in range(t):
    a = int(input())
    arr = list(map(int,input().split()))
    l = len(arr)
    distance = []
    
    for i in range(l-1):
        for j in range(i+1,l):
            distance.append(abs(arr[i]-arr[j]))
            
    distance.sort()
    print(distance[0])