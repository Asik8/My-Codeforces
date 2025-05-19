table_card = input()
hand_cards = list(input().split())
count = 0

for ch in hand_cards:
    if ch[0] == table_card[0]:
        count += 1
        break

if count == 0:
    for ch in hand_cards:
        if ch[1] == table_card[1]:
            count += 1
            break

if count:
    print('YES')
else:
    print('NO')