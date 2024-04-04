#include<stdio.h>
#include<string.h>

int main()
{
    int n,c1=0,c2=0;
    scanf("%d",&n);

    char a[n];
    scanf("%s",a);

    for(int i=0;i<n;i++)
    {
        if(a[i]=='A')
        {
            c1++;
        }
        else
            c2++;
    }

    if(c1==c2)
    {
        printf("Friendship\n");
    }

    else if(c1>c2)
    {
        printf("Anton\n");
    }

    else
    printf("Danik\n");

    return 0;
}