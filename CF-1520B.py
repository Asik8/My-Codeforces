# One Aproach with tiem complexity
# t = int(input())

# for _ in range(t):
#     n = int(input())
#     count = 0
#     for i in range(1,n+1):
#         if len(set(str(i))) == 1:
#             count+=1
#     print(count)
    
# Another Aproach:

t = int(input())

for _ in range(t):
    n = int(input())
    count = 0
    for i in range(1,10):
        starting_point = i
        while starting_point<=n:
            count += 1
            starting_point = starting_point*10+i
    print(count)