#include <stdio.h>
#include <math.h>

int main()
{
    long long int t;
    scanf("%lld", &t);

    for (long long int m = 0; m < t; m++)
    {
        long long int l, r;
        scanf("%lld %lld", &l, &r);
       
        if(l*2<=r)
        {
            printf("%lld %lld\n",l,l*2);
        }
        else
        {
            printf("-1 -1\n");
        }
    }

    return 0;
}