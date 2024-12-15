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
    int t;
    scanf("%d",&t);

    while(t--)
    {
        lli n,sum=0;
        scanf("%lld",&n);
        while(n>0)
        {
            sum+=n;
            n/=2;
        }
        printf("%lld\n",sum);
    }

    return 0;
}