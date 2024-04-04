#include<stdio.h>>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    if(a>b && a>c && a>d)
    {
            printf("%d ",a-b);
            printf("%d ",a-c);
            printf("%d\n",a-d);
    }
    else if(a<b && b>c && b>d)
    {
            printf("%d ",b-a);
            printf("%d ",b-c);
            printf("%d\n",b-d);
    }
    else if(a<c && b<c && c>d)
    {
            printf("%d ",c-a);
            printf("%d ",c-b);
            printf("%d\n",c-d);
    }
    else if(a<d && b<d && c<d)
    {
            printf("%d ",d-a);
            printf("%d ",d-b);
            printf("%d\n",d-c);
    }

    return 0;
}