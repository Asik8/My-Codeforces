t = int(input())

for _ in range(t):
    a = int(input())
    l = list(map(int,input().split()))
    new_list = []
    
    first = 0
    last = a-1
    
    while first != last:
        new_list.append(l[first])
        first += 1
        new_list.append(l[last])
        last -= 1
        if first == a//2 and a%2 == 0:
            break
        
    if a%2==1:
        new_list.append(l[first])
    
    for i in range(a-1):
        print(new_list[i],end=' ')
    print(new_list[a-1])
        