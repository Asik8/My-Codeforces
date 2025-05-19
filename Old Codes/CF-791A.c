#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c = 1;
    scanf("%d %d",&a,&b);

    while (1)
    {
        a = a * 3;
        b = b * 2;
        if (a > b)
        {
            break;
        }
        else
        {
            c++;
        }  
    }

    printf("%d\n",c);

    return 0;
}