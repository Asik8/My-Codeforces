t = int(input())

for _ in range(t):
    a = int(input())
    digits = len(str(a))
    first_digit = int(str(a)[0])
    
    total = 10 * (first_digit-1)
    total += digits * (digits+1)//2
    print(total)
