a=int(input())
l=list(map(int,input().split()))
s=sum(x for x in l)
l.sort()
s1=sum(l[:-1])
if s%2==0 and s1>=l[-1]:
    print("YES")
else:
    print("NO")
    