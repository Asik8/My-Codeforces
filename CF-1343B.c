#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    for (int i = 0; i < t; i++)
    {
        int a;
        scanf("%d",&a);

        if ((a / 2) % 2 != 0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
            int even[a / 2], odd[a / 2], e = 0, sume = 0, sumo = 0, o = 0;

            for (int j = 0; j < a; j++)
            {
                if ((j + 1) % 2 == 0)
                {
                    even[e] = j + 1;
                    e++;
                    sume += j + 1;
                }
                else
                {
                    odd[o] = j + 1;
                    o++;
                    sumo += j + 1;
                }
            }

            if (sume > sumo)
            {
                int temp = sume - sumo;
                odd[o - 1] = odd[o - 1] + temp;
            }

            else if (sume < sumo)
            {
                int temp = sumo - sume;
                even[e - 1] = even[e - 1] + temp;
            }

            for (int j = 0; j < a / 2; j++)
            {
                printf("%d ", even[j]);
            }
            for (int j = 0; j < a / 2; j++)
            {
                printf("%d ", odd[j]);
            }
            printf("\n");
        }
    }

    return 0;
}