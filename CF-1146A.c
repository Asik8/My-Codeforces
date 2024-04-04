#include<stdio.h>
#include<string.h>

int main()
{
    char s[50];
    scanf("%s",s);

    int len = strlen(s),c=0;

    // printf("len = %d\n",len);

    for(int i=0;i<len;i++)
    {
        if(s[i]=='a')
        {
            c++;
        }
    }
    // printf("a = %d\n",c);

    int rem = len-c;
    if(rem<c)
    {
        printf("%d",len);
    }
    else
    {
        printf("%d",c+(c-1));
    }

    return 0;
}