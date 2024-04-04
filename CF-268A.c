#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    a *= 2;
    int ar[a];
    int cont = 0, i, j;

    for(int l=0;l<a;l++)
    {
        scanf("%d",&ar[l]);
    }
    for (i = 1; i < a; i += 2)
    {
        for (j = 0; j < a; j += 2)
        {
            if(ar[i]==ar[j])
            {
                cont++;
            }
        }
    }

    printf("%d\n", cont);

    return 0;
}