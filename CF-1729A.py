t = int(input())

for _ in range(t):
    a,b,c = map(int,input().split())
    
    if a<=b and c>b:
        print(1)
    elif b>c:
        rem = (b-c)+c
        if rem == a:
            print(3)
        elif rem > a:
            print(1)
        elif rem<a:
            print(2)
    elif b<c:
        rem = (c-b)+c
        if rem == a:
            print(3)
        elif rem > a:
            print(1)
        elif rem<a:
            print(2)