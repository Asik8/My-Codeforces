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
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        
        if (a+(c%2)>b)
        {
            printf("First\n");
        }
        else
            printf("Second\n");
    }

    return 0;
}