t = int(input())

for i in range(t):
    a,b = map(int,input().split())
    count = 0
    if (a==b):
        print(count)
    else:
        while a!=b:
            if a < b:
                dis = b-a
                if dis %2 == 1:
                    count += 1
                    a+=dis
                    if a == b:
                        break
                else:
                    count += 1
                    a+=dis-1
                    if a == b:
                        break
            else:
                dis = a-b
                if dis %2 == 1:
                    count += 1
                    a-=dis+1
                    if a == b:
                        break
                else:
                    count += 1
                    a-=dis
                    if a == b:
                        break
        print(count)