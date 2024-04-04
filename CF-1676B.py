t = int(input())

for _ in range(t):
    a = int(input())
    l = list(map(int,input().split()))
    l.sort()
    my_chocolate = 0
    initial_chocolate = l[0]
    
    for i in range(1,len(l)):
        my_chocolate += l[i]-initial_chocolate
    
    print(my_chocolate)    
    
    
    