#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    for(int i=0;i<t;i++)
    {
    char c[10000];
        scanf("%s",c);

        if((c[0]=='y' || c[0]=='Y') && (c[1]=='e' || c[1]=='E') && (c[2]=='s' || c[2]=='S'))
        {
            printf("YES\n");
        }
        else 
        {
            printf("NO\n");
        }
    }

    return 0;
}