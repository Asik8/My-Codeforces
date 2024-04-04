t = int(input())

for _ in range(t):
    l = list(map(int,input().split()))
    total_coins = l[3]
    new_l = l[:-1]
    new_l.sort()
    rem = 0
    rem+= new_l[2]-new_l[0]
    rem+= new_l[2]-new_l[1]
    
    if total_coins == rem:
        print("YES")
        
    elif total_coins > rem:
        if (total_coins-rem)%3 == 0:
            print("YES")
        else:
            print("NO")
    
    else:
        print("NO")