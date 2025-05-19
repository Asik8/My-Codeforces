t = int(input())

for _ in range(t):
    w,h,n = map(int,input().split())
    count = 1
    
    if w%2 !=0 and h%2 !=0:
        if count == n:
            print('YES')
        else:
            print('NO')
    
    else:
        while True:
            if w%2 !=0 and h%2 !=0:
                break
            else:
                if w%2 == 0 and h%2==0:
                    count *=2
                    w//=2
                elif w%2 ==0 and h%2!=0:
                    count *=2
                    w//=2
                elif w%2 !=0 and h%2==0:
                    count *=2
                    h//=2
        if count >= n:
            print('YES')
        else:
            print("NO")