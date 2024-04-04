t = int(input())
usernames = set()

for _ in range(t):
    request = input()

    if request in usernames:
        i=1
        while request+str(i) in usernames:
            i+=1
        new_name = request+str(i)
        usernames.add(new_name)
        print(new_name)
    else:
        usernames.add(request)
        print('OK') 