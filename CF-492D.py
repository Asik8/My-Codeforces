n,x,y = map(int,input().split())

for i in range(n):
    a = int(input())
    if x==y:
        print('Both')
    else:
        l = {}
        times =[]
        if x>y:
            for i in range(a//2+1):
                vanya = (i+1)/x
                vova = (i+1)/y
                l[vanya] = 'vanya'
                l[vova] = 'Vova'
                times.append(vanya)
                times.append(vova)
            print(l)
            
        if x<y:
            for i in range(a//2+1):
                vanya = (i+1)/x
                vova = (i+1)/y
                l[vova] = 'Vova'
                l[vanya] = 'Vanya'
                times.append(vanya)
                times.append(vova)
            print(l)
            
        s_dict = sorted(l.keys())
        print(s_dict)
