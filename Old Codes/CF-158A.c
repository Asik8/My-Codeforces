#include <stdio.h>
int main()
{

    {
        int a, max;
        scanf("%d %d",&a,&max);
        int ar[a];
        int cont = 0, c = 0, i, c2 = 0;

        for (int l = 0; l < a; l++)
        {
            scanf("%d",&ar[l]);
        }

        for (int l = 0; l < a; l++)
        {
            if (ar[l] > 0 && ar[l] >= ar[max - 1])
            {
                cont++;
            }
        }

        printf("%d\n", cont);

        return 0;
    }
}