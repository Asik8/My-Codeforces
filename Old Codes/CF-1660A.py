t = int(input())

for _ in range(t):
    a,b = map(int,input().split())
    
    if a ==0 :
        print(1)
    else:
        sum = a+b*2
        print(sum+1) 