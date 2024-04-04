n,x,y = map(int,input().split())

for i in range(n):
    a = int(input())
    if x==y:
        print('Both')
    else:
        l = {}
        if x>y:
            for i in range(a//2+1):
                vanya = (i+1)/x
                vova = (i+1)/y
                l[vanya] = 'vanya'
                l[vova] = 'Vova'
            print(l)
            # if l[a-1] ==l[a]:
            #     print("Both")
            # else:
            #     if a%2==1:
            #         print("Vanya")
            #     else:
            #         print("Vova")
        if x<y:
            for i in range(a//2+1):
                vanya = (i+1)/x
                vova = (i+1)/y
                l[vova] = 'Vova'
                l[vanya] = 'Vanya'
            print(l)
            # if l[a-1] ==l[a]:
            #     print("Both")
            # else:
            #     if a%2==1:
            #         print("Vova")
            #     else:
            #         print("Vanya")
