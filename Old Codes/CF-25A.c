#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    int ar[a], even = 0, odd = 0;

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &ar[i]);
        if (ar[i] % 2 == 0)
        {
            even++;
        }
        else if (ar[i] % 2 != 0)
        {
            odd++;
        }
    }

    if (odd >= even)
    {
        for (int i = 0; i < a; i++)
        {
            if (ar[i] % 2 == 0)
            {
                printf("%d\n",i+1);
                break;
            }
        }
    }

    else if (odd < even)
    {
       for (int i = 0; i < a; i++)
        {
            if (ar[i] % 2 != 0)
            {
                printf("%d\n",i+1);
                break;
            }
        }
    }

    return 0;
}