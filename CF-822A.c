#include<stdio.h>
 
#define ll long long int
 
int main()
{
    ll a,b,ans=1;
    scanf("%lld %lld",&a,&b);
 
    if(a<b)
    {
        for(ll i=1;i<=a;i++)
        {
            ans *= i;
        }
    }
 
    else
    {
        for(ll i=1;i<=b;i++)
        {
            ans *= i;
        }
    }
 
    printf("%lld\n",ans);
 
    return 0;
}