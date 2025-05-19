t = int(input())

for _ in range(t):
    a = int(input())
    s = input()
    
    if a == 1:
        print(1)
    else:
        first = 0
        last = a-1

        while True:
            if (s[first] == '0' and s[last] == '1') or (s[first] == '1' and s[last] == '0'):
                new_s = s[first+1:last]
                if not new_s:
                    break
                first += 1
                last -= 1
            else:
                if first == 0:
                    new_s = s
                break
            
        count = 0

        for ch in new_s:
            if ch == '0' or ch == '1':
                count += 1
        print(count)
            
            
    