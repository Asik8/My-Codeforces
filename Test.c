#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

#define lli long long int
#define max_size 100000

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int in = (2 * n) / 3;
    for (int i = 0; i < in - 1; i++)
    {
        for (int j = i + 1; j < in; j++)
        {
            if (ar[j] > ar[i])
            {
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }

    int in2= (3 * n) / 4;
    for (int i = n-in2; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ar[j] < ar[i])
            {
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }

    int ans = n/2;

    printf("%d\n", ar[ans]);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}