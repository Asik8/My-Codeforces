#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    for (int l = 0; l < t; l++)
    {
        int n;
        scanf("%d",&n);

        int ar[n], c = 0;

        for (int j = 0; j < n; j++)
        {
            scanf("%d",&ar[j]);
        }

        if (n == 1)
        {
            printf("YES\n");
            continue;
        }

        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (ar[j] < ar[i])
                    {
                        int temp = ar[i];
                        ar[i] = ar[j];
                        ar[j] = temp;
                    }
                }
            }
            
            for (int i = 0; i < n - 1; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (ar[j] >= ar[i] && ar[j] - ar[i] == 1 || ar[j] - ar[i] == 0 && ar[i] != 0 && ar[j] != 0)
                    {
                        ar[i] = 0;
                    }
                }
            }

            for (int j = 0; j < n; j++)
            {
                if (ar[j] > 0)
                {
                    c++;
                }
            }
            if (c == 1)
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