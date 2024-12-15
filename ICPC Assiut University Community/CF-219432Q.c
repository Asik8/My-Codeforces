#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdbool.h>

#define lli long long int
#define max_size 100000

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        char n[101];
        scanf("%s",n);
        int l = strlen(n)-1;
        for(int i=l;i>=0;i--)
        {
            printf("%c ",n[i]);
        }printf("\n");
    }

    // Another Way
    // while(t--)
    // {
    //     int n;
    //     scanf("%d",&n);
    //     do
    //     {
    //         printf("%d ",n%10);
    //         n/=10;
    //     }while(n!=0);
    //     printf("\n");
    // }

    return 0;
}