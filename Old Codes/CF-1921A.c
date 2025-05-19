#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    for(int i=0;i<t;i++)
    {
        int arr[8],x[4],y[4],xc=0,yc=0;
        for(int l=0;l<8;l++)
        {
            scanf("%d",&arr[l]);
            if(l%2==0)
            {
                x[xc]=arr[l];
                xc++;
            }
            else
            {
                y[yc]=arr[l];
                yc++;
            }
        }

        for(int l=0;l<4;l++)
        {
            for(int k=l+1;k<4;k++)
            {
                if(x[l]>x[k])
                {
                    int temp1 = x[l];
                    x[l] = x[k];
                    x[k] = temp1;
                }
                if(y[l]>y[k])
                {
                    int temp2 = y[l];
                    y[l] = y[k];
                    y[k] = temp2;
                }
            }
        }

        int mul1 = x[3]-x[0];
        int mul2 = y[3]-y[0];

        printf("%d\n",mul1*mul2);
    }

    return 0;
}