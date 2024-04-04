t=int(input())

for _ in range(t):
    a=int(input())
    if(a<=1399):
        print("Division 4")

    elif(a>=1400 and a<=1599):
        print("Division 3")

    elif(a>=1600 and a<=1899):
        print("Division 2")

    elif(a>=1900):
        print("Division 1")