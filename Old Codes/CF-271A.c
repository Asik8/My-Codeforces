#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int year, c[10], c1;
    scanf("%d",&year);

    while (1)
    {
        year++;
        c1 = 0;
        memset(c, 0, sizeof(c));

        int y3 = year;
        while (y3 > 0)
        {
            int div = y3 % 10;

            if(c[div]==1)
            {
                break;
            }
            c[div] = 1;
            c1++;
            y3 /= 10;
        }

        if (c1 == 4)
        {
            printf("%d\n", year);
            break;
        }
    }

    return 0;
}