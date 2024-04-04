t = int(input())

for _ in range(t):
    n = int(input())
    l = [2**i for i in range(1,n+1)]
    row1 = 0
    row2 = 0
    
    if n == 2:
        print(l[1]-l[0])
     
    else:
        row1 += l[n-1]
        row1 += sum(l[:(n//2)-1])
        row2 = sum(l[(n//2)-1:n-1])
        print(abs(row1-row2))
        
    