t = int(input())

for _ in range(t):
    n = int(input())
    s = input()
    
    l = [0]*26
    baloon_count = 0

    for ch in s:
        if l[ord(ch)-ord('A')] == 0: 
               l[ord(ch)-ord('A')] = 1
               baloon_count += 2
        else:
            baloon_count +=1
    
    print(baloon_count)
    
    