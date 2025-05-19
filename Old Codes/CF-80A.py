import math
n,m = map(int,input().split())
i = n+1
while True:
    root = math.sqrt(i)
    cont = 0
    
    for j in range(2,int(root)+1):
        if(i%j==0):
            cont+=1
            break
    if(cont>0):
        i+=1
    else:
        break


print("YES") if(i==m) else print('NO')