#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char a[110], b[110];

    scanf("%s",a);
    scanf("%s",b);

    int i = 0;

    while (a[i] != "\0" && b[i] != "\0")
    {
        char c = tolower(a[i]);
        char d = tolower(b[i]);
        if (c < d)
        {
            printf("-1\n");
            return 0;
        }

        else if (c > d)
        {
            printf("1\n");
            return 0;
        }

        i++;
    }

    printf("0\n");

    return 0;
}