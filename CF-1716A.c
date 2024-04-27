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
        lli count = 0,;
        while(1)
        {
            if(n>=3)
            {
                int div = n/3;
                count += div;
                n-=div*3;
            }
            if(n<3 && n)
        }
    }

    return 0;
}