t = int(input())

for _ in range(t):
    x,y,n = map(int,input().split())

    find_k = (((n-y)//x)*x)+y
    print(find_k)
