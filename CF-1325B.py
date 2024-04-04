t = int(input())

for _ in range(t):
    a= int(input())
    l = list(map(int,input().split()))
    
    new_l = set(l)
    print(len(new_l))