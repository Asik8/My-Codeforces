#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int ar[n],a[n+1];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }

    for(int i=0;i<n;i++)
    {
        int temp = i;
        temp++;
        int l = ar[i];
        a[l]=temp;
        // printf("i= %d temp=%d ar[i]=%d, l=%d, a[l]=%d\n",i,temp,ar[i],l,a[l+1]);
    }

    printf("%d",a[1]);

    for(int i=2;i<=n;i++)
    {
        printf(" %d",a[i]);
    }
    printf("\n");

    return 0;
}