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
        lli n;
        scanf("%lld",&n);

        lli a = 1;
        while(a<=n)
        {
            a*=2;
        }        
        printf("%d\n",(a/2)-1);
    }

    return 0;
}