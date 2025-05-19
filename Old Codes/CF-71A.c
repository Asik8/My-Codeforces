#include <stdio.h>
#include<string.h>
int main()
{
    int a;
    scanf("%d",&a);

    for (int i = 0; i < a; i++)
    {
        char n[101];
        scanf("%s",n);
        int l=strlen(n);
        if(l>10)
        {
            printf("%c%d%c\n",n[0],l-2,n[l-1]);
        }
        else 
        printf("%s\n",n);
        
    }

    return 0;

}