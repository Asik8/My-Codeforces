a = int(input())
calculated_height = 0
height = 0

while calculated_height<=a:
    height += 1
    calculated_height += height * (height + 1)//2

print(height-1)

