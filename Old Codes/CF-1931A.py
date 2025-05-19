t = int(input())

for _ in range(t):
    a = int(input())
    result =''
    for i in range(1,27):
        for j in range(1,27):
            for k in range(1,27):
                if i+j+k == a:
                    result =chr(k+96)+chr(j+96)+chr(i+96)
                    break
            
            
    print(result)
            
            