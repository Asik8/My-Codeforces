#include <stdio.h>

int main()
{
    long long int a;
    scanf("%lld",&a);

    int ar[a], c1 = 0, c2 = 0, c3 = 0, c4 = 0, taxi = 0;
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&ar[i]);
        if (ar[i] == 1)
        {
            c1++;
        }
        else if (ar[i] == 2)
        {
            c2++;
        }
        else if (ar[i] == 3)
        {
            c3++;
        }
        else if (ar[i] == 4)
        {
            c4++;
        }
    }

    taxi = (c4 + c3);

    c1 -= c3;
    c3 = 0;
    c4 = 0;
    if (c1 < 0)
    {
        c1 = 0;
    }

    if (c1 != 0)
    {
        taxi += (c2 / 2);
        if (c2 % 2 != 0)
        {
            if (c1 <= 2)
            {
                taxi++;
                c1 = 0;
                c2 = 0;
            }
            else
            {
                c1 -= 2;
                taxi++;
                c2 = 0;
            }
        }

        if (c1 != 0)
        {
            taxi += (c1 / 4);
            if (c1 % 4 != 0)
            {
                taxi++;
            }
        }
    }
    else if (c1 == 0)
    {
        if (c2 > 0)
        {
            taxi += (c2 / 2);
            if (c2 % 2 != 0)
            {
                taxi++;
            }
        }
    }
    printf("%d\n", taxi);

    return 0;
}