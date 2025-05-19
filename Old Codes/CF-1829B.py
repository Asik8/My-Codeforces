t = int(input())

for _ in range(t):
    a = int(input())
    s = list(map(int,input().split()))
    count = 0
    max = 0
    count1 = 0
    length = len(s)
    i_passed = 0
    
    if a == 1 and s[0] == 0:
        print(1)
        
    elif a == 1 and s[0] == 1:
        print(0)
      
    else:
        for i in s:
            i_passed += 1
            if i == 0:
                count += 1
                if i_passed == length and count>max:
                    max = count        
                    
            else:
                if count > max:
                    count1 += 1
                    max = count
                count = 0
        if count1 == 0:
            max = count
        print(max)    
            
    