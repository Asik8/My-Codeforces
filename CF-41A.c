#include<stdio.h>
#include<string.h>

int  main()
{
    char a[101],b[101];
    scanf("%s",a);
    scanf("%s",b);

    int c=0;

    int l=strlen(b)-1;
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]!=b[l])
        {
            c++;
        }
        l--;
    }

    if(c>0)
    {
        printf("NO\n");
    }

    else
        printf("YES\n");

    return 0;
}