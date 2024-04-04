t = int(input())

for _ in range(t):
    a = int(input())
    print('First') if (a-1)%3 ==0 or (a+1)%3 == 0 else print('Second')

