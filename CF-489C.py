a,b = map(int,input().split())
if b == 0:
    print("-1 -1")
else:
    # print(1,end='')
    # for i in range(a-1):
    #     print(0,end='')
    # print(end=' ')
    if b%2!=0:
        print(b//2-1,end='')
        print(b//2+2,end=' ')
        print(b//2+2,end='')
        print(b//2-1)
    else:
        print(b//2,end='')
        print(b//2)

    
