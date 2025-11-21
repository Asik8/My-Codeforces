
n=int(input())
l=list(map(int,input().split()))
f=True
c=0
while f:
    for i in range(n):
        if l[i]%2==0:
            l[i]=l[i]/2
        else:
            f=False
            break
    c+=1
print(c-1)
        