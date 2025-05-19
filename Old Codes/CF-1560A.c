#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    for (int i = 0; i < t; i++)
    {
        int a, c = 0, j = 1;
        scanf("%d",&a);

        while(c < a)
        {
            if (j % 10 != 3 && j % 3 != 0)
            {
                c++;
            }
            j++;
        }
    
        printf("%d\n", j-1);
    }

    return 0;
}