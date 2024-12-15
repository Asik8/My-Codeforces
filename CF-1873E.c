#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdbool.h>

#define lli long long int
#define max_size 100000

void bi_search(lli ar[],lli x,lli n)
{
    lli l=1,h=1e10,ans= 0;
    while(l<=h)
    {
        lli sum = 0;
        lli mid = (l+h)/2;
        for(lli i=0;i<n;i++)
        {
            if(ar[i]<mid)
                sum+=(mid-ar[i]);
        }
        if(sum<=x)
        {
            ans = mid;
            l = mid+1;
        }
        else
            h = mid-1;
    }
    printf("%lld\n",ans);
}

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        lli n,x;
        scanf("%lld %lld",&n,&x);
        lli ar[n];
        for (lli i = 0; i < n; i++) {
            scanf("%lld",&ar[i]);
        }
        bi_search(ar,x,n);
    }

    return 0;
}
