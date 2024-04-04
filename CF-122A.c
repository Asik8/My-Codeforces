#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        int c = 0;
        if (a % i == 0 && isLucky(i))
        {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");

    return 0;
}

int isLucky(int i)
{
    while (i > 0)
    {
        int div = i % 10;
        if (div != 4 && div != 7)
        {
            return 0;
        }
        i/=10;
    }
    return 1;
}