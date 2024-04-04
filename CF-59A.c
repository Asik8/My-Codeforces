#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char s[101];
    scanf("%s",s);
    int c1=0,c2=0;

    int len = strlen(s);

    for(int i=0;i<len;i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            c1++;
        }
        else 
        {
            c2++;
        }
    }

    if(c1>c2)
    {
        for(int i=0;i<len;i++)
        {
            s[i]=toupper(s[i]);
        }
    }

    else
    {
        for(int i=0;i<len;i++)
        {
            s[i]=tolower(s[i]);
        }
    }

    printf("%s\n",s);

    return 0;
}