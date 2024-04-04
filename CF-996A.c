#include<stdio.h>

int main()
{
    long long int a;
    scanf("%lld",&a);

    int ar[5]={1,5,10,20,100};
    int cont =0;

    for(int i=4;i>=0;i--)
    {
        long long int rem =a/ar[i];
        cont +=rem;
        a=a%ar[i];
    }

    printf("%d\n",cont);

    return 0;
}