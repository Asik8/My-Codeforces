#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    scanf("%s",a);
    int l = strlen(a);
    int c2 = 0, i = 0,c3=0,len;
    int cont[26] = {0}; 

    for(int j=0;j<l;j++)
    {
        i = (a[j]-'a');
        if(cont[i]==0)
        {
            len++;
            cont[i]=1;
        }
    }

    if (len % 2 == 0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }

    return 0;
}