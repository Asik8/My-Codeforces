#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int a, b, c, count = 0;
        scanf("%d %d %d", &a, &b, &c);

        if (a == b)
        {
            printf("%d\n", count);
        }
        else if (a < c && b < c)
        {
            printf("%d\n", count + 1);
        }
        else
        {
            int max, min;
            if (a > b)
            {
                max = a;
                min = b;
            }
            else if (b > a)
            {
                max = b;
                min = a;
            }

            while (1)
            {
                max -= c;
                min += c;
                count += 1;
                if (min >= max)
                {
                    break;
                }
            }
            printf("%d\n", count);
        }
    }

    return 0;
}