t = int(input())

for _ in range(t):
    grid = []
    char_list = []
    
    for i in range(8):
        row = input()
        grid.append(row)
        
    for i in range(8):
        for j in range(8):
            if ord(grid[i][j]) >= 97 and ord(grid[i][j]) <= 122:
                char_list.append(grid[i][j])
    
    for ch in char_list:
        print(ch,end='')
    print()