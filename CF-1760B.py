t = int(input())

for _ in range(t):
    a = int(input())
    s = input()
    
    heighest_char = s[0]
    
    for ch in s:
        if ch > heighest_char:
            heighest_char = ch
    
    print(ord(heighest_char)-ord('a')+1)