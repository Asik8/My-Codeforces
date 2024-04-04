# in Python:
t = int(input())
for _ in range(t):
    order = input().strip()
    s = input().strip()
    positions = {char:index for index,char in enumerate(order)}
    count = 0
    for i in range(1,len(s)):
        count += abs(positions[s[i]]- positions[s[i-1]])
    print(count)