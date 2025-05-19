t = int(input())
test_cases = []
for _ in range(t):
    test_cases.append(int(input()))
    
def dp(n):
    ans = 0
    str_n = str(n)
    for digit in str_n:
        ans += int(digit)
    return ans

max_num  = max(test_cases)
arr=[0]*(max_num+1)
for i in range(1,max_num+1):
    arr[i] = dp(i)+arr[i-1]

for a in test_cases:
    print(arr[a])

