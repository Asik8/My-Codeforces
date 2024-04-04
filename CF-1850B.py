t = int(input())

for _ in range(t):
    a = int(input())
    words = 0
    qualities = 0
    for i in range(a):
        w,q = map(int,input().split())
    
        if i == 0 and w<=10:
            words = w
            qualities = q
            index = i
            
        else:
            if (words <= w and qualities < q and w <=10):
                words = w
                qualities = q
                index = i 
            elif (words >= w and qualities < q and w <=10):
                words = w
                qualities = q
                index = i 
    
    print(index+1)