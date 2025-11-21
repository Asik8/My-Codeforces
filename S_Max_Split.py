s=input()
lst=[]
m=0
l=0
r=0
for i,c in enumerate(s):
    if(c=='L'): l+=1
    else: r+=1
    if(l==r):
        lst.append(s[m:i+1])
        m=i+1
print(len(lst))
for x in lst:
    print(x)