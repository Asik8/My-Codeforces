#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int ar[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &ar[j]);
        }

        int c = 0, search = ar[0];

        for (int j = 1; j < n; j++)
        {
            if (search == ar[j])
            {
                c++;
            }
        }

        if (c == 0)
        {
            printf("1\n");
        }
        else
        {
            int ind;
            for (int j = 1; j < n; j++)
            {
                if (search != ar[j])
                {
                    ind = j;
                    break;
                }
            }
            printf("%d\n",ind+1);
        }
    }

    return 0;
}