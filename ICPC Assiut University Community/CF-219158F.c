#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdbool.h>

#define lli long long int
#define max_size 100000

int main()
{
    lli n,m;
    scanf("%lld %lld",&n,&m);
    printf("%lld\n",((n%10)+(m%10)));
    return 0;
}