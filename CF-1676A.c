#include <stdio.h>
#include<stdlib.h>

int main()
{
    long long int t;
    scanf("%lld", &t);

    char ar[6000];
    for (long long int i = 0; i < t; i++)
    {
        scanf("%s",ar);
        int s1=0,s2=0;

        for (int j = 0; j < 6; j++)
        {
            if(j<3)
            {
                s1+=ar[j];
            }
            else if (j>=3)
            {
                s2+=ar[j];
            }
        }

        if (s1 == s2)
        {
            printf("YES\n");
        }

        else
        {
            printf("NO\n");
        }
    }

    return 0;
}