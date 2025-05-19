#include <stdio.h>
#include <string.h>

int main()
{
    char c[201];
    scanf("%s",c);

    int len = strlen(c);
    int l = 0;

    for (int i = 0; i < len;)
    {
        if (c[i] == 'W' && c[i + 1] == 'U' && c[i + 2] == 'B')
        {
            i += 3;
            printf(" ");
        }
        else
        {
        printf("%c",c[i]); 
        i++;           
        }
    }

    printf("\n");

    return 0;
}