n,x = map(int,input().split())
distress = 0

for _ in range(n):
    char = input().split()
    
    if char[0] == '+':
        x += int(char[1])
        
    else:
        if int(char[1])<=x:
            x-=int(char[1])
            
        else:
            distress+=1

print(x,distress)