#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    int ar[a];

    for(int i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
    }

    for(int i=0;i<a;i++)
    {
        for(int j=i+1;j<a;j++)
        {
            if(ar[i]>ar[j])
            {
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }

    printf("%d",ar[0]);
    for(int i=1;i<a;i++)
    {
        printf(" %d",ar[i]);
    }
    printf("\n");

    return 0;
}