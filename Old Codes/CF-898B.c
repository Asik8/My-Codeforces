#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    scanf("%d",&a);

    for (int l = 0; l < a; l++)
    {
        int n;
        scanf("%d",&n);
        int ar[n];

        for (int p = 0; p < n; p++)
        {
            scanf("%d",&ar[p]);
        }

        int temp;

        for (int j = 0; j < n; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                if (ar[j] > ar[k])
                {
                    temp = ar[j];
                    ar[j] = ar[k];
                    ar[k] = temp;
                }
            }
        }

        ar[0] += 1;
        int mul = 1;

        for (int i = 0; i < n; i++)
        {
            mul *= ar[i];
        }

        printf("%d\n", mul);
    }

    return 0;
}