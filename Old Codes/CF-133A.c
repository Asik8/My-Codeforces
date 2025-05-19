#include<stdio.h>
#include<string.h>

int main()
{
    char a[101];
    scanf("%s",a);

    int len = strlen(a);

    for(int i=0;i<len;i++)
    {
        if(a[i]=='H' || a[i] == 'Q' || a[i]=='9')
        {
            printf("YES\n");
            return 0;
        }
    }

    printf("NO\n");

    return 0;
}