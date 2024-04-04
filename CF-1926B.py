t = int(input())

for _ in range(t):
    arr = int(input())
    l = []
    
    for i in range(arr):
        cont =0
        st = input()
        for ch in st:
            if(ch == '1'):
                cont+=1
        l.append(cont)
    
    l.sort(reverse=True)
        
    for i in range(len(l)-1):
        if(l[i] == l[i+1]):
            print('SQUARE')
            break
        elif(l[i]!=l[i+1]):
            print('TRIANGLE')
            break
        
            
    
    