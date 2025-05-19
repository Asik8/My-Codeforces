#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d",&a,&b);

    if (a != b)
    {
        if (a < b)
        {
            printf("%d ", a);
            printf("%d\n",((b-a)/2));
        }
        else if (a > b)
        {
            printf("%d ", b);
            printf("%d\n",((a-b)/2));
        }
    }

    else
    {
        printf("%d ",a);
        printf("0\n");
    }
}