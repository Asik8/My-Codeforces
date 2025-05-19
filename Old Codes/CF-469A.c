#include <stdio.h>

int main()
{
    int l;
    scanf("%d",&l);

    int x, y, c = 0;
    scanf("%d",&x);

    int xr[500];

    for (int i = 0; i < x; i++)
    {
        scanf("%d",&xr[i]);
    }

    scanf("%d",&y);
    for (int i = x; i < x+y; i++)
    {
        scanf("%d",&xr[i]);
    }

    for(int i=0;i<x+y-1;i++)
    {
        for(int j=i+1;j<x+y;j++)
        {
            if(xr[i]>xr[j])
            {
                int temp = xr[i];
                xr[i]=xr[j];
                xr[j]= temp;
            }
        }
    }

    for (int i = 0; i < x+y; i++)
    {
        if(xr[i]!=xr[i+1])
        {
            c++;
        }
    }

    if (c==l)
        printf("I become the guy.\n");

    else
        printf("Oh, my keyboard!\n");

    return 0;
}