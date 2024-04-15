#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdbool.h>

#define lli long long int
#define max_size 100000

int bi_search(int ar[],int max,int x,int n)
{
    lli l=1,h=1e10,mid,sum =0;
    while(l<h-1)
    {
        mid = l+(h-1)/2;
        for(int i=0;i<n;i++)
        {
            if(ar[i]<mid)
                sum+=mid - ar[i];
        }
        if(sum>x)
            h = mid;
        else if(sum<x)
            l = mid;   
    }
    printf("%lld\n",mid);
    return;
    
}

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int n,x;
        scanf("%d %d",&n,&x);
        lli ar[n],max =0;
        for (lli i = 0; i < n; i++) {
            scanf("%lld",&ar[i]);
            if(ar[i]>max)
                max = ar[i];
        }
        bi_search(ar,max,x,n);
    }

    return 0;
}