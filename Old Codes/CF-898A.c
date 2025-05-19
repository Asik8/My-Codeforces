#include <stdio.h>
#include <string.h>

int main()
{
    int a;
    scanf("%d",&a);

    for (int i = 0; i < a; i++)
    {
        char c[100];
        scanf("%s",c);

        if (strcmp(c, "bca") == 0 || strcmp(c, "cab") == 0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }

    return 0;
}