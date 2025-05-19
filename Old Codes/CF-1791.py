t = int(input())
name = "codeforces"

for i in range(t):
    a = input()
    c=0
    for ch in name:
        if(a==ch):
            print("YES")
            break
    else:
        print("NO")
    