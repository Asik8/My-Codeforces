t = int(input())

for _ in range(t):
    a,b,n = map(int,input().split())
    count = 1
    
    if a+b > n:
        print(count)
    else:
        while True:
            sum = a+b
            count += 1
            if a<b:
                a = sum
                if a+b > n:
                    break
            else:
                b = sum
                if a+b > n:
                    break
    
        print(count)