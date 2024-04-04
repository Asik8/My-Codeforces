#include<stdio.h>

int main()
{
    long long int t;
    scanf("%lld",&t);

    for(long long int i=0;i<t;i++)
    {
        long long int cont=0,a,b,c,d;
        scanf("%lld %lld %lld %lld",&a,&b,&c,&d);

        if(b>a)
        {
            cont++;
        }

        if(c>a)
        {
            cont++;
        }

        if(d>a)
        {
            cont++;
        }

        printf("%lld\n",cont);
    }

    return 0;
}