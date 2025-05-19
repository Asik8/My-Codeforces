t = int(input())

for _ in range(t):
    a = int(input())
    arr = list(map(int, input().split()))
    even_odd=0
    odd_even=0
    for i in range(a):
        if i%2!=arr[i]%2:
            if(i%2==0):
                even_odd+=1
            else:
                odd_even+=1
    if(even_odd == odd_even):
        print((even_odd+odd_even)//2)
    else:
        print(-1)
        