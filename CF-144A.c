#include<stdio.h>

int main()
{
    int a,c;
    scanf("%d",&a);
    int arr[a];
    int max=0,min=101,maxin,minin;

    for (int i = 0; i < a; i++)
    {
        scanf("%d",&arr[i]);

        if(arr[i]>max)
        {
            max = arr[i];
            maxin = i;
        }

        if(arr[i]<=min)
        {
            min = arr[i];
            minin = i;
        }
    }

    if(minin<maxin)
    {
        minin++;
    }

    c=maxin+((a-1)-minin);    

    printf("%d\n",c);

    return 0;
}