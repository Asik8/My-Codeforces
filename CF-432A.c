#include<stdio.h>

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);

    int ar[n],c=0;

    for(int i=0;i<n;i++)
    {
       scanf("%d",&ar[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(ar[i]+k<=5)
        {
            c++;
        }
    }

    printf("%d\n",c/3);

    return 0;
}