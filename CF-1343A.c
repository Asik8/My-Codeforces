#include<stdio.h>
#include<math.h>

int main()
{
    // freopen("input.txt","r",stdin);
    int t;
    scanf("%d",&t);

    for(int j=0;j<t;j++)
    {
        long long int a;
        scanf("%lld",&a);
        int x,k=1;

        while(a%(2*k-1)!=0)
        {          
            k*=2;
        }

        x = a/k;
        printf("%d\n",x);        
    }

    return 0;
}