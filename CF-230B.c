#include <stdio.h>
#include <math.h>
#define max_num 1000000

int main()
{
    long long int t;
    scanf("%lld", &t);
    char a[max_num+1] = {0};
    a[0] = a[1] = 1;

    // Using Sieve of Eratosthenes Algorithms
    for (long long int i = 2; i*i <= max_num; i++)
    {
        if (a[i] == 0)
        {
            for (long long int j = 2; i*j <= max_num; j++)
            {
                a[i * j] = 1;
            }
        }
    }

    for (long long int j = 0; j < t; j++)
    {
        long long int num;
        scanf("%lld", &num);
        long long int s = sqrt(num);

        if (num < 4)
        {
            printf("NO\n");
        }

        else
        {
            if (s * s == num && a[s] == 0)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }

    return 0;
}