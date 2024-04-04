#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

#define lli long long int
#define max_size 100000

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int n, a[3];
    scanf("%d", &n);

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }
    qsort(a, 3, sizeof(int), compare);

    if (n == a[0] + a[1] || n == a[1] + a[2] || n == a[0] + a[2])
    {
        printf("2\n");
    }
    else if (n == a[0] + a[1]+ a[2])
    {
        printf("3\n");
    }
    else
    {
        int count = 0;
        for (int i = 0; i < 3; i++)
        {
            if (n >= a[i])
            {
                count += n / a[i];
                printf("count = %d n= %d a[i]= %d\n", count, n, a[i]);
                n %= a[i];
                printf("n= %d\n", n);
            }
            else
            {
                break;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}