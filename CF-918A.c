#include<stdio.h>
int main()
{
    int t,a[3],c=0;

    scanf("%d",&t);

    for(int i=0;i<t;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[j]);
        }

        if(a[0]!=a[1] && a[0]!=a[2])
        printf("%d\n",a[0]);

        else if(a[1]!=a[0] && a[1]!=a[2])
        printf("%d\n",a[1]);

        else 
        printf("%d\n",a[2]);
    }

    return 0;
}