str_input = input()
int_arr = [int(num) for num in str_input.split()]
str = input()
sum = 0

for ch in str:
    if(ch == '1'):
        sum += int_arr[int(ch)-1]
    elif(ch == '2'):
        sum += int_arr[int(ch)-1]
    elif(ch == '3'):
        sum += int_arr[int(ch)-1]
    elif(ch == '4'):
        sum += int_arr[int(ch)-1]
        
print(sum)