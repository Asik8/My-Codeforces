#include<stdio.h>

int main()
{
    long long int n,m;
    scanf("%lld %lld",&n,&m);
    long long int arr[m];

    for(int i=0;i<m;i++)
    {
        scanf("%lld",&arr[i]);
    }
    long long int c=0,i=1;
    for(long long int j=0;j<m;j++)
    {
        long long int targetHouse = arr[j];
        if(targetHouse>=i)
        {
            c+=targetHouse-i;
        }
        else
        {
            c+= n-i+targetHouse; 
        }

        i=targetHouse;
    }

    printf("%lld\n",c);

    return 0;
}