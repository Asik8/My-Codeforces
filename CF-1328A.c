#include<stdio.h>

int main()
{
    long long int n;
    scanf("%lld",&n);

    for(long long int i=0;i<n;i++)
    {
        long long int a,b,c=0;
        scanf("%lld %lld",&a,&b);

        if(a%b==0)
        printf("%lld\n",c);

        else
        {
            long long int rem = a%b;
            rem = b-rem;
            printf("%lld\n",rem);
        }
    }

    return 0;
}