t = int(input())

for _ in range(t):
    n = int(input())
    count = 0
    no_answer = 0
    
    if(n==1):
        print(count)
    
    else:
        while n != 1:
            if n%6 == 0:
                n= n//6
            
            else:
                n*=2
            
            count += 1
            if n < 1:
                no_answer = 1
                break
                
        if no_answer == 0:
            print(count)
        else:
            print('-1')