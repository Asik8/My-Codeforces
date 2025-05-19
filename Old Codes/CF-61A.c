#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100];
    scanf("%s",a);
    scanf("%s",b);

    int l = strlen(a);
    char c[200];

    for(int i=0;i<l;i++)
    {
        if(a[i]=='0' && b[i]=='0' || a[i]=='1' && b[i]=='1')
        {
            c[i]='0';
        }
        
        else if(a[i]=='0' && b[i]=='1' || a[i]=='1' && b[i]=='0')
        {
            c[i]='1';
        }
    }

    for(int i=0;i<l;i++)
    {
        printf("%c",c[i]);
        if(i==99)
        {
            break;
        }
    }
    printf("\n");

    return 0;
}