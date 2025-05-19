#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    for(long long int i=0;i<t;i++)
    {
        long long int a,b;
        scanf("%lld %lld",&a,&b);

        if((a+b+1)%2==0)
        {
            printf("Alice\n");
        }
        else if((a+b+1)%2==1)
        {
            printf("Bob\n");
        }

    }

    return 0;
}