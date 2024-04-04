#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int main()
{
    long long int t;
    scanf("%lld", &t);

    for (long long int i = 0; i < t; i++)
    {
        char c[1000000];
        scanf("%s",c);

        int len = strlen(c);
        int cont =0;

        for (int j = 0; j < len; j++)
        {
            if (c[j] == '0')
            {
                cont++;
            }
        }

        if(cont+1 == len || c[0]=='0')
        {
            printf("-1\n");
        }

        else
        {
            int l;
        for (int j = 1; j < len; j++)
        {
            if (c[j] != '0')
            {
                l = j;
                break;
            }
        }
        // printf("%d",l);

        char a[l], b[len - l];
        int sum1=0;
        int sum2=0;

        int index = 0,stage = 1;

        for (int j = l-1; j >=0; j--)
        {
            a[j] = c[j];
            sum1+=stage*atoi(c[j]);
            stage*=10;
        }

        for (int j = len-1; j >=l; j--)
        {
            b[index] = c[j];
            index++;
            sum2+=stage*atoi(c[j]);
            stage*=10;
        }

        printf("Sum = %d sum2 = %d\n",sum1,sum2);

        if (strcmp(a, b) || sum1 >= sum2)
        {
            printf("-1\n");
        }
        else
        {
            for (int j = 0; j < l; j++)
            {
                printf("%c",a[j]);
            }
            printf(" ");
            for (int j = 0; j < len-l; j++)
            {
                printf("%c",b[j]);
            }
            printf("\n");
        }
        }
    }

    return 0;
}