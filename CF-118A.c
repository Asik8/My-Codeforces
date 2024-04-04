#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char a[101], b[101];
    scanf("%s",a);
    int c1 = 0;

    for (int i = 0; i < strlen(a); i++)
    {
        a[i] = tolower(a[i]);
    }

    for (int j = 0; j < strlen(a); j++)
    {
        if (a[j] != 'a' && a[j] != 'e' && a[j] != 'i' && a[j] != 'o' && a[j] != 'u'&& a[j]!='y')
        {
            b[c1] = a[j];
            c1++;
        }
    }

    b[c1] = '\0';
    int l = strlen(b);

    for (int k = 0; k < l; k++)
    {
        printf(".");
        printf("%c", b[k]);
    }
    printf("\n");

    return 0;
}