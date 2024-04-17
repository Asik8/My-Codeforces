#include<stdio.h>
#include<stdlib.h>

#define lli long long int
#define max_size 100000

int main()
{

    lli n;
    scanf("%lld",&n);
    lli arr[n];
    for (lli i = 0; i < n; i++) {
        scanf("%lld",&arr[i]);
    }

    lli sum = 0;
    for (lli i = 0; i < n; i++) {
        sum+=arr[i];
    }

    lli ans = llabs(sum);
    
    printf("%lld\n",ans);

    return 0;
}