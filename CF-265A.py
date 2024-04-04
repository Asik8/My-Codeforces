#include<stdio.h>
#include<string.h>

# int main()
# {
#     char t[50],s[50];
#     scanf("%s",s);
#     scanf("%s",t);
#     int count = 0,l=0;

#     for(int i=0;i<strlen(t);i++)
#     {
#         if (t[i] == s[l])
#         {
#             count++;
#             l++;
#         }
#     }
#     printf("%d\n",count+1);

#     return 0;
# }

s = input()
t = input()
count = 1
l =0

for ch in t:
    if ch == s[l]:
        count += 1
        l+= 1
print(count)