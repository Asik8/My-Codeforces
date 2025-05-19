#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    long long int ar[n];

    for(int i=0;i<n;i++)
    {
        scanf("%lld",&ar[i]);
    }

    int max =ar[0];

    for(int i=1;i<n;i++)
    {
        if(max<ar[i])
        {
            max = ar[i];
        }
    }

    int c =0;

    for(int i=0;i<n;i++)
    {
        c+=(max-ar[i]);
    }

    printf("%d\n",c);

    return 0;
}