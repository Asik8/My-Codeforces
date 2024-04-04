# #include <stdio.h>
# #include <math.h>

# int main()
# {
#     int t;
#     scanf("%d", &t);
#     while (t--)
#     {
#         int n, s;
#         scanf("%d %d", &n, &s);
#         int arr[n], initial_sum = 0;
#         for (int i = 0; i < n; i++)
#         {
#             scanf("%d", &arr[i]);
#             initial_sum += arr[i];
#         }

#         if (initial_sum == s)
#         {
#             printf("0\n");
#         }
#         else if (initial_sum < s)
#         {
#             printf("-1\n");
#         }

#         else
#         {
#             int max_length = 0, length = 0;

#             for (int i = 0; i < n - 1; i++)
#             {
#                 int sum = 0;
#                 for (int j = i; j < n; j++)
#                 {
#                     sum += arr[j];
#                     if (sum == s)
#                     {
#                         length = (j - i) + 1;
#                         if (length > max_length)
#                         {
#                             max_length = length;
#                         }
#                     }
#                 }
#             }

#             printf("%d\n",n-max_length);
#         }
#     }
# }


t = int(input())

for _ in range(t):
    n,s = map(int,input().split())
    arr = list(map(int,input().split()))
    
    if sum(arr) == s:
        print(0)
    
    elif sum(arr)<s:
        print(-1)
    
    else: 
        max_len = 0
        sumOfLength = 0
        my_dict = {}

        for i in range(n):
            sumOfLength += arr[i]

            if (sumOfLength == s):
                max_len = i+1

            elif (sumOfLength-s) in my_dict:
                max_len = max(max_len,i-my_dict[sumOfLength-s])

            if sumOfLength not in my_dict:
                my_dict[sumOfLength]= i

        print(n-max_len)