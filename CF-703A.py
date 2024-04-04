t = int(input())
c1=0
c2=0
for _ in range(t):
    a,b =map(int,input().split())
    if(a>b):
        c1=c1+1
    elif(b>a):
        c2 = c2+1
        
if(c1 == c2):
    print("Friendship is magic!^^")
elif(c1>c2):
    print("Mishka")
elif(c1<c2):
    print("Chris")
    
        