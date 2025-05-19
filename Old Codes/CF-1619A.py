a = input()

for i in range(int(a)):
    str_in = input()
    str1 = str_in[:len(str_in)//2]
    str2 = str_in[(len(str_in)//2):]
    if(str1 == str2):
        print("YES")
    else:
        print("NO")