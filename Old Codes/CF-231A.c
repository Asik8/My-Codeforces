#include <stdio.h>
int main()
{
    int n,c2=0;
    scanf("%d",&n);
    int ar[3];
    for (int i = 0; i < n; i++)
    {
        int  c = 0;
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&ar[j]);
        }

        for (int l = 0; l < 3; l++)
        {
            if(ar[l]==1)
            {
                c++;
            }
        }

        if(c>=2)
        {
            c2++;
        }
    }

    printf("%d\n",c2);

    return 0;
}