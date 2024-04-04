#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    for(int i=0;i<t;i++)
    {
        int a;
        scanf("%d",&a);
        int ar[a*2];
        for(int j=0;j<a*2;j++)
        {
            scanf("%d",&ar[j]);
        }

        int odd =0,even = 0;

        for(int j=0;j<a*2;j++)
        {
            if((ar[j])%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }

        if(odd !=even)
        {
            printf("NO\n");
        }

        else
        {
            printf("YES\n");
        }
    }

    return 0;
}