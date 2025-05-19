#include<stdio.h>
int main()
{
    int a;
    long long int m,n;
    scanf("%lld %lld %d",&m,&n,&a);

    long long int result = ((m+(a-1))/a)*((n+(a-1))/a);
    printf("%lld\n",result);

    return 0;
}