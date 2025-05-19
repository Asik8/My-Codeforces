#include <stdio.h>
#include <string.h>

int main()
{
    int n, t;
    scanf("%d %d",&n,&t);

    char c[n];
    scanf("%s",c);

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n-1;)
        {
            if (c[j] == 'B' && c[j + 1] == 'G')
            {
                char temp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = temp;
                j+=2;
            }
            else
            {
                j++;
            }
        }
    }

    printf("%s\n", c);

    return 0;
}