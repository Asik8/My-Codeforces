a=int(input())
l=map(int,input().split())
s=0;
for i in l:
    s+=abs(i)
print(s)