#include<stdio.h>
#include<string.h>

int main()
{
    char c[200];
    scanf("%s",c);

    int len = strlen(c);

    for(int i=0;i<len;)
    {
        if(c[i]=='.')
        {
            printf("0");
            i++;
        }
        else if(c[i]=='-' && c[i+1]=='.')
        {
            printf("1");
            i+=2;
        }

        else if(c[i]=='-' && c[i+1]=='-')
        {
            printf("2");
            i+=2;
        }
    }
    
    printf("\n");

    return 0;
}