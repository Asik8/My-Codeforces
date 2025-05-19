t = int(input())

for _ in range(t):
    a = int(input())
    b = list(map(int,input().split()))
    value = sum(b)
    
    if value == a:
        print(0)
    elif value > a:
        print(value-a)
    else:
        print(1)

