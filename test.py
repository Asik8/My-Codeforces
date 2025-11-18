a=input()
b=a[:]
b=list(b)
while b and b[-1]=='0':
    b.pop()
b=''.join(b[::-1])
# b[::-1]
# print(a,b)
print(b)
if a==b:
    print("YES")
else: 
    print("NO")
