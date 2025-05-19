# // In c language:
# #include <stdio.h>

# int main()
# {
#     int n;
#     scanf("%d", &n);
#     int arr[n][n];
#     for (int i = 0; i < n; i++)
#     {
#         for (int j = 0; j < n; j++)
#         {
#             if (i == 0 || j == 0)
#             {
#                 arr[i][j] = 1;
#             }
#             else
#             {
#                 arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
#             }
#         }
#     }
#     printf("%d\n", arr[n - 1][n - 1]);
#     return 0;
# }

n = int(input())
arr = []

for i in range(n):
    arr.append([0]*n)

for i in range(0,n):
    for j in range(0,n):
        if i == 0 or j == 0:
            arr[i][j] = 1
        else:
            arr[i][j] = arr[i - 1][j] + arr[i][j - 1]

print(arr[n-1][n-1])