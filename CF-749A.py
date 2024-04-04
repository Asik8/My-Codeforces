a = int(input())

if a%2 ==0:
    cont = a//2
    print(cont)
    for i in range(cont):
        print(2,end = ' ')

elif a%2==1:
    cont = (a-3)//2
    print(cont+1)
    for i in range(cont):
        print(2,end = ' ')
    print(3)
    

        