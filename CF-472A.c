#include<stdio.h>

int main()
{
    long long int a;
    scanf("%lld",&a);

    for(long long int i=4;i<a;i+=2)
    {
        int sub = a-i;
        int c=0;
        for(int j=2;j<sub/2;j++)
        {
            if(sub%j==0)
            {
                c++;
                break;
            }
        }

        if(c>0)
        {
            printf("%lld %d\n",i,sub);
            return 0;
        }
    }

    return 0;
}