t = int(input())

for _ in range(t):
    a = int(input())
    l = list(map(int,input().split()))
    new_l = set(l)
    for i in new_l:
        print(i,end=' ')
    print()
    
