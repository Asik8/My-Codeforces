#include <stdio.h>

int main()
{
    long long int n, k,ans;
    scanf("%lld %lld",&n,&k);

    if(k<=((n+1)/2))
    {
        ans = 1+2*(k-1);
    }    

    else
    {
        k-=(n+1)/2;
        ans = 2*k;
    }

    printf("%lld\n",ans);

    return 0;
}