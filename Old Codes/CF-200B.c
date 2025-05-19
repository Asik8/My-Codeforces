#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);

    int ar[a];
    float sum =0;

    for(int i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
        sum +=ar[i];
    }

    printf("%f\n",(sum/a));
    return 0;
}