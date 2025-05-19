#include<stdio.h>

int main()
{
    int a,b,c,arr[5];
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    int s1 = a+b*c;
    arr[0]=s1;

    int s2 = a*(b+c);
    arr[1]=s2;

    int s3 = a*b*c;
    arr[2]=s3;

    int s4 = (a+b)*c;
    arr[3]=s4;

    int s5 = a+b+c;
    arr[4]=s5;

    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]= temp;
            }
        }
    }

    printf("%d\n",arr[4]);

    return 0;
}