#include <stdio.h>

int main()
{
    long long int t;
    scanf("%lld",&t);

    for (long long int m = 0; m < t; m++)
    {
        long long int a, c = 0;
        scanf("%lld",&a);

        if (a >= 1 && a <= 9)
        {
            printf("1\n");
            printf("%lld\n",a);
            continue;
        }

        else
        {
            long long int a1=a,cont=0,c2=0;
            while(a1!=0)
            {
                int div = a1%10;
                if(div>=1 && div<=9)
                {
                    cont++;
                }
                c2++;
                a1/=10;
            }
            printf("%lld\n",cont);
            while (a != 0)
            {
                long long int div = a % 10;
                if (c == 0 && div >= 1 && div <= 9)
                {
                    printf("%lld", div);
                    printf(" ");
                }
                else if(c>0 && div>=1 && div<=9)
                {
                    printf("%lld", div);
                    long long int c1=c;
                    while(c1!=0)
                    {
                       printf("0");
                       c1--; 
                    }
                    if((c2-1)!=c)
                    {
                        printf(" ");
                    }
                }
                c++;
                a /= 10;
            }
            printf("\n");
        }
    }

    return 0;
}