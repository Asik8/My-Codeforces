t = int(input())

for _ in range(t):
    s = int(input())
    st = input()
    T_list = [0]*5
    
    if(s>5):
        print('NO')
    
    else:
        for ch in st:
            if ch == 'T':
                T_list[0]+=1
            elif ch =='i':
                T_list[1]+=1
            elif ch == 'm':
                T_list[2]+=1
            elif ch == 'u':
                T_list[3]+=1
            elif ch == 'r':
                T_list[4]+=1
    
        for ele in range(5):
            if T_list[ele] <1:
                print('NO')
                break
        else:
            print('YES')
    