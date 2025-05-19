t = int(input())

for _ in range(t):
    a = int(input())
    b = a//3
    
    two_s = b
    one_s = a-(two_s*2)
    if two_s-one_s>1 or one_s - two_s>1:
        while True:
            two_s+=1
            one_s-=2
            if(two_s-one_s==1 or one_s - two_s==1):
                break
    print(one_s,two_s)