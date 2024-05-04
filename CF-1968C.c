#include<stdio.h>
#include<math.h>

#define lli long long int
#define max_size 100000

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int n;
        scanf("%d",&n);
        int ar[n-1],a[n];
        for (int i = 0; i < n-1; i++) {
            scanf("%d",&ar[i]);
        }
        a[0] = ar[0]+1;
        a[1] = a[0]+ar[0];

        int l=1,tem= a[1];
        for(int i=1;i<n-1;i++)
        {
            if(ar[i]%tem == ar[i])
            {
                tem = ar[i];
                a[++l] = tem;
            }
            else
            {
                int val = tem+ar[i];
                
                a[++l] = tem;
            }
        }

        for(int i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }printf("\n");
    }

    return 0;
}