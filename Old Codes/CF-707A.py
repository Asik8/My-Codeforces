rows,col = map(int,input().split())
colored = False

for _ in range(rows):
    row = input().split()
    for pixel in row:
        if pixel in {'C' , 'M', 'Y'}:
            colored =True
            break

if colored:
    print('#Color')

else:
    print('#Black&White')