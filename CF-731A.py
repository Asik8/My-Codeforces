a = input()
count = 0
intial_char = 'a'
for ch in a:
    if ord(ch)>=ord(intial_char):
        dis1 = ord(ch)-ord(intial_char)
        dis2 = (26+ord(intial_char))-ord(ch)
    else:
        dis1 = ord(intial_char)-ord(ch)
        dis2 = (26+ord(ch))-ord(intial_char)
    intial_char = ch
    count += min(dis1,dis2)
    
print(count)