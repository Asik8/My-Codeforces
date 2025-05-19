t = int(input())

for _ in range(t):
    a = int(input())
    str = input().strip()
    used_letters = set()
    prev_char = None
    c=0
    for ch in str:
        if prev_char is not None and ch!=prev_char:
            if ch in used_letters:
               print('NO')
               c+=1
               break
            used_letters.add(ch)
        prev_char = ch
    if c==0:
        print('YES')
    # print(str)
        