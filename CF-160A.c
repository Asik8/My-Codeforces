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
            if(ar[i]<ar[j])
            {
                int temp = ar[i];
                ar[i]= ar[j];
                ar[j]= temp;
            }
        }
    }

    int sum1=0,sum2=0,c=0;

    for(int i=0;i<a;i++)
    {
        sum1+=ar[i];
        c++;
        sum2 = 0;
        for(int j=i+1;j<a;j++)
        {
            sum2+=ar[j];
        }
        if(sum1>sum2)
        {
            printf("%d\n",c);
            return 0;
        }
    }


    return 0;
 }