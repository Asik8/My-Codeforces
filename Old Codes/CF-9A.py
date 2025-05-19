a,b = map(int,input().split())
if(a>b):
    chance = 6-a+1
    ans = chance/6
    if(ans ==0):
        print('0/1')
    elif(ans == 0.5):
        print('1/2')
    elif(ans == 1):
        print('1/1')
    elif(ans == 1/3):
        print('1/3')
    elif(ans == 1/6):
        print('1/6')
    elif(ans == 2/3):
        print('2/3')
    elif(ans == 5/6):
        print('5/6')

elif(a<b):
    chance = 6-b+1
    ans = chance/6
    if(ans ==0):
        print('0/1')
    elif(ans == 0.5):
        print('1/2')
    elif(ans == 1):
        print('1/1')
    elif(ans == 1/3):
        print('1/3')
    elif(ans == 1/6):
        print('1/6')
    elif(ans == 2/3):
        print('2/3')
    elif(ans == 5/6):
        print('5/6')
        
elif(a==b):
    chance = 6-b+1
    ans = chance/6
    if(ans ==0):
        print('0/1')
    elif(ans == 0.5):
        print('1/2')
    elif(ans == 1):
        print('1/1')
    elif(ans == 1/3):
        print('1/3')
    elif(ans == 1/6):
        print('1/6')
    elif(ans == 2/3):
        print('2/3')
    elif(ans == 5/6):
        print('5/6')

