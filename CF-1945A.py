t = int(input())

for _ in range(t):
    a,b,c = map(int,input().split())
    tent_count = 0

if b==0 and c==0 and a>0:
    print(a)

elif a==0 and b==0 and c>0:
    print(1)
    
else:
    tent_count +=a
    a = 0
    if c>b*2:
        div_c = c//2
        if b== div_c:
            tent_count+=1
            if c%2 !=0:
                tent_count += 1
                b=0
                c=0
        elif b>div_c:
            tent_count += div_c
            b-= div_c
            if (b+(c%2))%3 ==0:
                tent_count += 1
                b=0
                c=0

        elif b<div_c:
            tent_count += b
            div_c -= b
            b=0
            new_c = (div_c*2) + c%2
            tent_count += new_c//3
            if new_c%3 !=0:
                tent_count += 1
                c=0
    elif c<b*2:
        new_b = b//3
        tent_count+= new_b
        b%=3
        if c>=b*2:
            tent_count+=b
            c-=b*2
            b=0
            if c>0:
                tent_count+=c//3
                if c%3 !=0:
                    tent_count+=1
                    c=0
                else:
                    c=0
        else:
            if b+c>2:
                tent_count+= (b+c)//3
                if (b+c)%3 !=0:
                    tent_count+=1
                    b=0
                    c=0
                else:
                    b=0
                    c=0
    
    if a==b==c==0:
        print(tent_count)
    else:
        print(-1)