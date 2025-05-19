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

    if(a==1)
    {
        printf("0\n");
    }

    else
    {
        int low=0,high=ar[0],cont=0;

        for(int i=0;i<a;i++)
        {
            if(ar[i]>high)
        {
            cont++;
            int temp = high;
            high = ar[i];
            low = temp;
            break;
        }
        else if(ar[i]<high)
        {
            cont++;
            low = ar[i];
            break;
        }
        }


    for(int i=1;i<a;i++)
    {
        if(ar[i]>high && ar[i]>low)
        {
            cont++;
            high = ar[i];
        }
        else if(ar[i]<high && ar[i]<low)
        {
            cont++;
            low = ar[i];
        }
    }

    printf("%d\n",cont);
    }

    return 0;
}