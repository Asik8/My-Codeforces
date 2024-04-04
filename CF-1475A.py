t=int(input())

for _ in range(t):
    a=int(input())
    if(a<3):
        print("NO\n")
    else:
        if(a%2==1 or (a&(a-1))!=0):
            print("YES\n")
        else:
            print("NO\n")
            
            
    
