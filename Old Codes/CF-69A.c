#include<stdio.h>
#include<math.h>

int main()
{
    int a;
    scanf("%d",&a);

    int ar[a*3],c1=0,c2=0,c3=0,l=(a*3);

    for(int i=0;i<l;i++)
    {
        scanf("%d",&ar[i]);
    }

    for(int j=0;j<l;j+=3)
    {
        c1+=ar[j];
    }

    for(int j=1;j<l;j+=3)
    {
        c2+=ar[j];
    }

    for(int j=2;j<l;j+=3)
    {
        c3+=ar[j];
    }

    if(c1==0 && c2==0 && c3==0)
    {
        printf("YES\n");
    }

    else 
    printf("NO\n");
    return 0;
}