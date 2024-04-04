#include <stdio.h>

int main()
{
    int s, p;
    scanf("%d %d",&s,&p);
    int ar[p];
    for (int m = 0; m < p; m++)
    {
        scanf("%d",&ar[m]);
    }

    for (int i = 0; i < p; i++)
    {
        for (int j = i + 1; j < p; j++)
        {
            if (ar[i] > ar[j])
            {
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }

    if (p < s)
    {
        printf("0\n");
    }

    else
    {
        int a[s], mi[p - (s - 1)], l = 0;

        for (int i = 0; i < p - (s - 1); i++)
        {
            for (int k = 0; k < s; k++)
            {
                a[k] = ar[i + k];
            }
            int max = a[0], min = a[0];
            for (int j = 1; j < s; j++)
            {
                if (max < a[j])
                {
                    max = a[j];
                }
                if (min > a[j])
                {
                    min = a[j];
                }
            }
            mi[l] = max - min;
            l++;
        }

        for (int i = 0; i < p - (s - 1); i++)
        {
            for (int j = i + 1; j < p - (s - 1); j++)
            {
                if (mi[i] > mi[j])
                {
                    int temp = mi[i];
                    mi[i] = mi[j];
                    mi[j] = temp;
                }
            }
        }

        printf("%d\n", mi[0]);
    }

    return 0;
}