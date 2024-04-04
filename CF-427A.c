#include<stdio.h>

int main()
{
    long int a;
    scanf("%ld",&a);

    long int arr[a],po=0,cr=0;
    for(long int i=0;i<a;i++)
    {
        scanf("%ld",&arr[i]);
        if(arr[i]>0)
        {
            po+=arr[i];
        }
        else if(arr[i]<0 && po>0)
        {
            po = po+arr[i];
            
        }
        else if(arr[i]<0 && po==0)
        {
            cr++;
        }
    }

    printf("%ld\n",cr);

    return 0;
}