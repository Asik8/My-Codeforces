t = int(input())

for _ in range(t):
    pie = "314159265358979323846264338327"
    user = input()
    count = 0
    
    for i in range(len(user)):
        if user[i] == pie[i]:
            count += 1
        else:
            break
    print(count)