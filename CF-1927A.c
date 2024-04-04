#include <stdio.h>

int main()
{
    // freopen("input.txt", "r", stdin);
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int a, i1 = 0, i2 = 0;
        scanf("%d", &a);

        char c[a];
        scanf("%s", c);

        for (int j = 0; j < a; j++)
        {
            if (c[j] == 'B')
            {
                i1 = j;
                break;
            }
        }
        for (int j = a - 1; j >= 0; j--)
        {
            if (c[j] == 'B')
            {
                i2 = j;
                break;
            }
        }
        printf("%d\n", (i2 - i1) + 1);
    }

    return 0;
}