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
    int n, m;
    scanf("%d %d",&n,&m);
    int min = (n<m)? n : m;

    int count = 0;
    for (int i = 0; i <= min; i++)
    {
        for (int j = 0; j <= min; j++)
        {
            // printf("i = %d, j=%d\n",i,j);
           if((i*i)+j == n && i+(j*j)== m)
           {
                count++;
           }
        }
    }

    printf("%d\n",count);

    return 0;
}