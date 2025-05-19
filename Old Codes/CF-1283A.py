t = int(input())

for _ in range(t):
    h,m = map(int,input().split())
    
    hour = 24-h
    total_time = (hour*60)-m
    print(total_time)