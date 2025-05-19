#include <stdio.h>

int main()
{
     long long int a, sum = 0;
    scanf("%lld", &a);

    if (a % 2 == 1)
    {
        sum = ((a +1)/2*(-1));
    }
    else
    {
        sum =a/2; 
    }

    printf("%lld\n", sum);

    return 0;
}