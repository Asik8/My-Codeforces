#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdbool.h>

#define lli long long int
#define max_size 100000

int main()
{
    lli n;
    scanf("%lld",&n);
    if (n>=0)
        printf("%lld\n",n);
    else
    {
    lli first = n/10;
    lli second = n/100*10+n%10;
    if (n>first && n>second)
        printf("%lld\n",n);
    else if (n<=first && first>=second)
        printf("%lld\n",first);
    else if (n<=second && first<=second)
        printf("%lld\n",second);
    }

    return 0;
}