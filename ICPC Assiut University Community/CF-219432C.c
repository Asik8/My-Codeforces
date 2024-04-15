#include<stdio.h>

int main()
{
    int a,n=0,p=0,odd=0,even=0;
    scanf("%d",&a);

    int ar[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
    }

    for(int i=0;i<a;i++)
    {
        if(ar[i]<0)
            n++;
        if(ar[i]>0)
            p++;
        if(ar[i]%2 == 0)
            even++;
        if(ar[i]%2 !=0)
            odd++;
    }

    printf("Even: %d\n",even);
    printf("Odd: %d\n",odd);
    printf("Positive: %d\n",p);
    printf("Negative: %d\n",n);
    return 0;
}