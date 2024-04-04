#include <stdio.h>
#include <math.h>

int main()
{
    long long int a;
    scanf("%lld",&a);

    for (int i = 0; i < a; i++)
    {
        long long int b;
        scanf("%lld",&b);
        long long int s[b];
        long long int sum = 0;
        for (int l = 0; l < b; l++)
        {
            scanf("%lld",&s[l]);
            sum += s[l];
        }

        long long int r = sqrt(sum);

        if (r*r == sum)
        {
            printf("YES\n");
        }

        else
            printf("NO\n");
    }

    return 0;
}