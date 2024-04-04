#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char c[101];
    scanf("%s",c);
    int len = strlen(c);
    int cont = 0;

    for (int i = 0; i < len; i++)
    {
        if (c[i] >= 'A' && c[i] <= 'Z')
        {
            cont++;
        }
    }

    if (cont == len)
    {
        for (int i = 0; i < len; i++)
        {
            c[i] = tolower(c[i]);
        }

        printf("%s\n", c);
    }

    else if (c[0] >= 97 && c[0] <= 122)
    {
        int c2=0;
        for (int i = 1; i < len; i++)
        {
            if (c[i] >= 65 && c[i] <= 90)
            {
                c2++;
            }
        }

        if(c2==(len-1))
        {
            c[0] = toupper(c[0]);
            for (int i = 1; i < len; i++)
        {
            
                c[i]= tolower(c[i]);
        }
        }

        printf("%s\n", c);
    }

    else
    {
        printf("%s\n", c);
    }

    return 0;
}