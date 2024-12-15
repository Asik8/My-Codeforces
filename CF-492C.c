#include <stdio.h>
#include<stdlib.h>
#define lli long long int

int compare(const void *a, const void *b)
{
    const lli *ass1 = (const lli *)a;
    const lli *ass2 = (const lli *)b;
    return ass1[1] - ass2[1];
}

int main()
{
    lli n, r, avg;
    scanf("%lld %lld %lld", &n, &r, &avg);
    lli ar[n][2];

    lli sum_score = 0;
    for (lli i = 0; i < n; i++)
    {
        scanf("%lld %lld", &ar[i][0], &ar[i][1]);
        sum_score += ar[i][0];
    }

    if (sum_score / n >= avg)
    {
        printf("0\n");
    }
    else
    {
        lli rem = (n * avg) - sum_score;

        qsort(ar, n, sizeof(ar[0]), compare);

        lli essay = 0;
        for (lli i = 0; i < n; i++)
        {
            if (rem == 0)
            {
                break;
            }

            if (ar[i][0] < r)
            {
                lli dis = r - ar[i][0];
                if (dis < rem)
                {
                    rem -= dis;
                    essay += ar[i][1] * dis;
                }
                else if (dis > rem)
                {
                    essay += ar[i][1] * rem;
                    rem = 0;
                }

                else if (dis == rem)
                {
                    essay += ar[i][1] * rem;
                    rem = 0;
                }
            }
        }
        printf("%lld\n", essay);
    }

    return 0;
}