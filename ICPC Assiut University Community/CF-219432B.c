#include<stdio.h>

int main()
{
    int a,c=0;
    scanf("%d",&a);

    for(int i=2;i<=a;i+=2)
    {
        c=1;
        printf("%d\n",i);
    }
    if(c==0)
        printf("-1\n");
    return 0;
}