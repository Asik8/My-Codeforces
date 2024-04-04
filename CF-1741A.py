t = int(input())

for i in range(t):
    a,b= input().split()
    
    a = a[::-1]  
    b = b[::-1]
    
    if(a==b):
        print('=')
    
    elif(a[0]==b[0] and a[0]=='S'):
        x1=len(a)
        x2=len(b)
        
        if(x1>x2):
            print('<')
        else:
            print('>')
            
    elif(a[0]==b[0] and a[0]=='L'):
        x1=len(a)
        x2=len(b)
        if(x1>x2):
            print('>')
        else:
            print('<')
            
    elif(a[0]=='S' and b[0]=='L'):
        print('<')
    elif(a[0]=='L' and b[0]=='S'):
        print('>')
        
    elif(a[0]=='S' and b[0]=='M'):
        print('<')
    elif(a[0]=='M' and b[0]=='S'):
        print('>')
        
    elif(a[0]=='L' and b[0]=='M'):
        print('>')
    elif(a[0]=='M' and b[0]=='L'):
        print('<')
            