t = int(input())

for _ in range(t):
    s = input()
    a = 0
    b = 0
    for ch in s:
        if ch == 'A':
            a += 1
        else:
            b+=1

    print('A') if a>b else print('B')