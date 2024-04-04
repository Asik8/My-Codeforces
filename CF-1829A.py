t = int(input())

for _ in range(t):
    a = 'codeforces'
    b = input()
    count = 0
    
    for ch in range(min(len(a),len(b))):
        if a[ch] != b[ch]:
            count+=1
            
    print(count)