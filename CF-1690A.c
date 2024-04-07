#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdbool.h>

#define lli long long int
#define max_size 100000

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        lli n,a,b,c;
        scanf("%lld",&n);
        if(n%3 == 0)
        {
            int div = n/3;
            a = div+1;
            b = div;
            c = div-1;
        }

        else if(n%3 ==1)
        {
            int div = n/3;
            a = div+2;
            b = div+1;
            c = div-2;
        }

        else if(n%3 ==2)
        {
            int div = n/3;
            a = div+2;
            b = div+1;
            c = div-1;
        }
        
        if(c==0)
        {
            b--;
            c++;
        }
        printf("%lld %lld %lld\n",b,a,c);
    }

    return 0;
}