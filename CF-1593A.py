t = int(input())

for i in range(t):
    a,b,c = map(int,input().split())
    
    max_votes = max(a,b,c)
    
    if a == b == c:
        print(1,1,1)
        
    elif a == b and b!=c and a == max_votes:
        print(1,1,(max_votes-c)+1)
        
    elif a != b and b==c and b == max_votes:
        print((max_votes-a)+1,1,1)
        
    elif a == c and b!=c and a == max_votes:
        print(1,(max_votes-b)+1,1)
        
    else:
        if a == max_votes:
            print(0,(a-b)+1,(a-c)+1)
        
        elif b == max_votes:
            print((b-a)+1,0,(b-c)+1)

        elif c == max_votes:
            print((c-a)+1,(c-b)+1,0)