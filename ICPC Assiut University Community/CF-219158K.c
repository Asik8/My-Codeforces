#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    int min =0,max =0;

    if (a<b && a<c)
    {
        printf("%d ",a);
        if (b>c)
            printf("%d\n",b);
        else
            printf("%d\n",c);
    }
    else if (a>b && b<c)
    {
        printf("%d ",b);
        if (a>c)
            printf("%d\n",a);
        else
            printf("%d\n",c);
    }
    else
    {
        printf("%d ",c);
        if (b>a)
            printf("%d\n",b);
        else
            printf("%d\n",a);
    }

    return 0;
}