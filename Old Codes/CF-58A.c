#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    scanf("%s", a);

    int l = strlen(a);
    int c = 0;

    for (int i = 0; i < l; i++)
    {
        if (a[i] == 'h')
        {
            for (int j = i + 1; j < l; j++)
            {
                if (a[j] == 'e')
                {
                    for (int k = j + 1; k < l; k++)
                    {
                        if (a[k] == 'l')
                        {
                            for (int m = k + 1; m < l; m++)
                            {
                                if (a[m] == 'l')
                                {
                                    for (int n = m + 1; n < l; n++)
                                    {
                                        if (a[n] == 'o')
                                        {
                                            c++;
                                            break;
                                        }
                                    }
                                }
                                if (c > 0)
                                {
                                    break;
                                }
                            }
                        }
                        if (c > 0)
                        {
                            break;
                        }
                    }
                }
                if (c > 0)
                {
                    break;
                }
            }
        }
        if (c > 0)
        {
            break;
        }
    }

    if(c==1)
    {
        printf("YES\n");
    }
    else
    printf("NO\n");

    return 0;
}