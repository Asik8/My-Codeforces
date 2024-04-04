a = int(input())
emp = a
count = 0
for i in range(2,a+1):
    if emp % i == 0:
        if i != a//i:
            count += 1
        else:
            count += 1
print(count)
    
