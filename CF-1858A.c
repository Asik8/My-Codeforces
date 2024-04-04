#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

#define lli long long int
#define max_size 100000

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        bool anna = false, katie = false;

        for (int i = 0; i < a + b; i++)
        {
            if (i % 2 == 0)
            {
                anna = true;
                katie = false;
            }
            else
            {
                katie = true;
                anna = false;
            }
        }

        if (katie)
        {
            for (int i = 0; i < c; i++)
            {
                if (i % 2 == 0)
                {
                    anna = true;
                    katie = false;
                }
                else
                {
                    katie = true;
                    anna = false;
                }
            }
        }

        else if(anna)
        {
            for (int i = 0; i < c; i++)
            {
                if (i % 2 == 0)
                {
                    anna = false;
                    katie = true;
                }
                else
                {
                    katie = false;
                    anna = true;
                }
            }
        }

        if (anna)
        {
            printf("First\n");
        }
        else
            printf("Second\n");
    }

    return 0;
}