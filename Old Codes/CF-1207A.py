t = int(input())

for _ in range(t):
    b,p,f = map(int,input().split())
    h,c = map(int,input().split())
    ans = 0
    
    if c>h:
        buns = b//2
        if buns >= f:
            ans += c*f
            buns -= f
            if buns >= p:
                ans += p*h
            else:
                ans += buns * h
        elif buns < f:
            ans += c*buns
            
    elif c<h:
        buns = b//2
        if buns >= p:
            ans += h*p
            buns -= p
            if buns >= f:
                ans += f*c
            else:
                ans += buns * c
        elif buns < p:
            ans += h*buns
    
    elif c == h:
        sum = p+f
        buns = b//2
        if buns>=sum:
            ans += sum*c
        else:
            ans += buns*c
    
    print(ans)
            