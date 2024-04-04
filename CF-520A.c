#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int a;
    scanf("%d",&a);
    char c[a];
    scanf("%s",c);

    if (a < 26)
    {
        printf("NO\n");
    }

    else
    {
        int test[26]={0};
        for (int i = 0; i < a; i++)
        {
            char d = tolower(c[i]);
                test[d-'a']++;
        }

        for(int i=0;i<26;i++)
        {
            if(test[i]==0)
            {
                printf("NO\n");
                return 0;
            }
        }
        printf("YES\n");
    }

    return 0;
}