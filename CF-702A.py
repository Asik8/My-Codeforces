a = int(input())
arr = list(map(int,input().split()))
current_length = 1
max_length = 1

for i in range(1,a):
    if arr[i]>arr[i-1]:
        current_length += 1
    else:
        current_length = 1
    
    if max_length<current_length:
        max_length = current_length
    
print(max_length)
    